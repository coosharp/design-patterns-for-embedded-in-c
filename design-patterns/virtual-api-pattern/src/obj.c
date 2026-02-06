#include "../inc/obj.h"

int obj_write(const struct obj * self, const char *data, int len)
{
    obj_write_fn_t fn = (*self->ops)->write;
    return fn(self->ops, data, len);
}

int obj_read(const struct obj * self, char *data, int len)
{
    obj_read_fn_t fn = (*self->ops)->read;
    return fn(self->ops, data, len);
}

void obj_register(struct obj * self, const struct obj_ops ** ops)
{
    self->ops = ops;
}