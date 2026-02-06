#include "../inc/obj_impl.h"

static int obj_impl_write(const struct obj_ops ** ops, const char * str, int len)
{
    struct obj_impl *self = (struct obj_impl *)ops;
    printf("write: %s\r\n", str);
    return len;
}

static int obj_impl_read(const struct obj_ops ** ops, char * str, int len)
{
    struct obj_impl *self = (struct obj_impl *)ops;
    printf("read: %s\r\n", str);
    return len;
}

static struct obj_ops impl_ops = {
    .write = obj_impl_write,
    .read = obj_impl_read
};


void obj_impl_register(struct obj_impl * self)
{
    self->ops = &impl_ops;
}