#include "../inc/drawer.h"


int drawer_write(const struct drawer * self, const char * str, int len)
{
    printf("drawer_write\r\n");
    drawer_write_fn_t fn = (*self->ops)->write;
    return fn(self->ops, str, len);
}

int drawer_read(const struct drawer * self, char * str, int len)
{
    printf("drawer_read\r\n");
    drawer_read_fn_t fn = (*self->ops)->read;
    return fn(self->ops, str, len);
}

void drawer_register(struct drawer * self, const struct drawer_ops ** ops)
{
    memset(self, 0, sizeof(struct drawer));
    self->ops = ops;
}
