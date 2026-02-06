#ifndef ST7789_H
#define ST7789_H

#include <stdio.h>
#include <string.h>
#include "../inc/display.h"


struct st7789
{
    const struct drawing_board * drawer;
    void * user_data;
};

void st7789_register(struct st7789 * self);


#endif