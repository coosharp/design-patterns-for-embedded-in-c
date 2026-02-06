#include <stdio.h>
#include <string.h>





struct bridge
{

};

struct client
{

};

static int client_write(const struct obj ** self, const char *buf, int len)
{
    return 0;
}

static int client_read(const struct obj ** self, char *buf, int len)
{
    return 0;
}


struct server
{

};

struct obj
{
    int (* write)(const struct obj ** self, const char *buf, int len);
    int (* read)(const struct obj ** self, char *buf, int len);
};

int obj_write(const struct obj ** self, const char *buf, int len)
{
    return (*self)->write(self, buf, len);
}

int obj_read(const struct obj ** self, char *buf, int len)
{
    return (*self)->read(self, buf, len);
}

const struct obj obj_client = 
{
    .write = client_write,
    .read = client_read,
};

int main(void)
{
    return 0;
}