#ifndef __BRIDGE_H__
#define __BRIDGE_H__

#include <stdio.h>


typedef struct bridge_ops bridge_ops_t;
typedef int (* bridge_write_fn_t)(const bridge_ops_t ** self, const char * str, int len);
typedef int (* bridge_read_fn_t)(const bridge_ops_t ** self, char * str, int len);

struct bridge_ops
{
    bridge_write_fn_t write;
    bridge_read_fn_t read;
};


static inline int bridge_write(const struct bridge_ops ** ops, const char * str, int len)
{
    printf("bridge_write\r\n");
    return (*ops)->write(ops, str, len);
}

static inline int bridge_read(const struct bridge_ops ** ops, char * str, int len)
{   
    printf("bridge_read\r\n");
    return (*ops)->read(ops, str, len);
}



#endif
