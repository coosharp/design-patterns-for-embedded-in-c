#ifndef ILI9341_H
#define ILI9341_H

#include <stdio.h>
#include <string.h>
#include "../inc/display.h"


struct ili9341
{
    const struct drawing_board * drawer;
    void * user_data;
};

void ili9341_register(struct ili9341 * self);


#endif