#ifndef __OBJ_IMPL_H__
#define __OBJ_IMPL_H__



#include <stdio.h>
#include <string.h>
#include "../inc/obj.h"


struct obj_impl
{
    const struct obj_ops * ops;
};


void obj_impl_register(struct obj_impl * self);



#endif