#ifndef DISPLAY_H
#define DISPLAY_H



#include <stdio.h>
#include <stdlib.h>

typedef struct drawing_board drawing_board_t;
typedef void (* draw_point_t)(const drawing_board_t ** self, int x, int y);

typedef enum 
{
    PANEL_ST7735 = 0,
    PANEL_ST7789 = 1,
    PANEL_ILI9341 = 2,
}display_panel_type_t;

struct drawing_board
{
    draw_point_t draw_point;
};


struct display
{
    const struct drawing_board ** drawer;
};

void display_register_panel(struct display * self, display_panel_type_t type);
void display_draw_point(const struct display * self, int x, int y);


#endif