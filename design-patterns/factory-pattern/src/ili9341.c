#include "../inc/ili9341.h"


static void ili9341_draw_point(const struct drawing_board ** drawer, int x, int y)
{
    printf("ili9341_draw_point: %d, %d\r\n", x, y);
}

const struct drawing_board ili9341_drawer = 
{
    .draw_point = ili9341_draw_point,
};


void ili9341_register(struct ili9341 * self)
{
    memset(self, 0, sizeof(struct ili9341));
    self->drawer = &ili9341_drawer;
}
