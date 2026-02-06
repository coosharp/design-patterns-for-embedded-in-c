#include "../inc/client.h"



static int client_write(const struct drawer_ops ** ops, const char * str, int len)
{
    printf("client_write\r\n");
    const struct client * self = (const struct client *)ops;
    return bridge_write(self->bridge_ops, str, len);
    return 0;
}

static int client_read(const struct drawer_ops ** ops, char * str, int len)
{
    printf("client_read\r\n");
    const struct client * self = (const struct client *)ops;
    return bridge_read(self->bridge_ops, str, len);
}

static struct drawer_ops client_drawer_ops =
{
    .write = client_write,
    .read = client_read,
};

void client_register(struct client * self, const struct bridge_ops ** ops)
{
    memset(self, 0, sizeof(struct client));
    self->drawer_ops = &client_drawer_ops;
    self->bridge_ops = ops;
}