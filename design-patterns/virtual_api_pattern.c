#include <stdio.h>
#include <string.h>

/******************************************************/
struct obj_ops
{
    int (* write)(const struct obj_ops ** ops, const char *data, int len);
    int (* read)(const struct obj_ops ** ops, char *data, int len);
};

int obj_write(const struct obj_ops ** ops, const char *data, int len)
{
    return (*ops)->write(ops, data, len);
}

int obj_read(const struct obj_ops ** ops, char *data, int len)
{
    return (*ops)->read(ops, data, len);
}
/******************************************************/
struct obj_impl
{
    const struct obj_ops * ops;
};

static int obj_impl_write(const struct obj_ops ** ops, const char *data, int len)
{
    struct obj_impl *self = (struct obj_impl *)ops;
    printf("write: %s\n", data);
    return len;
}

static int obj_impl_read(const struct obj_ops ** ops, char *data, int len)
{
    struct obj_impl *self = (struct obj_impl *)ops;
    printf("read: %s\n", data);
    return len;
}

static struct obj_ops impl_ops = {
    .write = obj_impl_write,
    .read = obj_impl_read
};

void obj_impl_init(struct obj_impl *impl)
{
    impl->ops = &impl_ops;
}

const struct obj_ops ** obj_get_impl(struct obj_impl *impl)
{
    return &impl->ops;
}
/******************************************************/
int main(void)
{
    struct obj_impl impl;
    obj_impl_init(&impl);

    const struct obj_ops ** ops =  obj_get_impl(&impl);

    const char * data = "Hello World!\r\n";
    obj_write(ops, data, strlen(data));

    return 0;
}