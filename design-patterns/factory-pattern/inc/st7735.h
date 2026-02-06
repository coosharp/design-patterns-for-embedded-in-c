#ifndef ST7735_H
#define ST7735_H

#include <stdio.h>
#include <string.h>
#include "../inc/display.h"



struct st7735
{
    const struct drawing_board * drawer;
    void * user_data;
};

void st7735_register(struct st7735 * self);


#endif