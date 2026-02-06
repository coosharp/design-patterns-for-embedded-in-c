#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <stdio.h>
#include <string.h>
#include "../inc/drawer.h"
#include "../inc/bridge.h"

struct client
{
    const struct drawer_ops * drawer_ops;
    const struct bridge_ops ** bridge_ops;
};

void client_register(struct client * self, const struct bridge_ops ** ops);








#endif