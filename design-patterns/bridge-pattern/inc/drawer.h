#ifndef __DRAWER_H__
#define __DRAWER_H__


#include <stdio.h>
#include <string.h>

typedef struct drawer_ops drawer_ops_t;
typedef int (* drawer_write_fn_t)(const drawer_ops_t ** self, const char * str, int len);
typedef int (* drawer_read_fn_t)(const drawer_ops_t ** self, char * str, int len);


struct drawer_ops
{
    drawer_write_fn_t write;
    drawer_read_fn_t read;
};


struct drawer
{
    const struct drawer_ops ** ops;
};


void drawer_register(struct drawer * self, const struct drawer_ops ** ops);
int drawer_read(const struct drawer * self, char * str, int len);
int drawer_write(const struct drawer * self, const char * str, int len);




#endif