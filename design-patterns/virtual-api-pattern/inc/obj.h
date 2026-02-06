#ifndef __OBJ_H__
#define __OBJ_H__

#include <stdio.h>
#include <string.h>

typedef struct obj_ops obj_ops_t;
typedef int (* obj_write_fn_t)(const obj_ops_t ** self, const char * str, int len);
typedef int (* obj_read_fn_t)(const obj_ops_t ** self, char * str, int len);

struct obj_ops
{
    obj_write_fn_t write;
    obj_read_fn_t read;
};


struct obj
{
    const struct obj_ops ** ops;
};

void obj_register(struct obj * self, const struct obj_ops ** ops);
int obj_read(const struct obj * self, char *data, int len);
int obj_write(const struct obj * self, const char *data, int len);

#endif