#ifndef __SERVER_H__
#define __SERVER_H__

#include <stdio.h>
#include <string.h>
#include "../inc/bridge.h"


struct server
{
    const struct bridge_ops * ops;
    void * user_data;
};


void server_register(struct server * self);






#endif