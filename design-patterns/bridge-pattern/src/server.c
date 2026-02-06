#include "../inc/server.h"

static int server_write(const struct bridge_ops ** ops, const char * str, int len)
{
    const struct server * self = (const struct server *)ops;
    printf("server_write: %s\r\n", str);
    return 0;
}

static int server_read(const struct bridge_ops ** ops, char * str, int len)
{
    const struct server * self = (const struct server *)ops;
    printf("server_read: %s\r\n", str);
    return 0;
}

static const struct bridge_ops server_bridge_ops = 
{
    .write = server_write,
    .read = server_read,
};

void server_register(struct server * self)
{
    memset(self, 0, sizeof(struct server));
    self->ops = &server_bridge_ops;
}