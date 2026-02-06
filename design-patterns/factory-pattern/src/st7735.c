#include "../inc/st7735.h"



static void st7735_draw_point(const struct drawing_board ** drawer, int x, int y)
{
    printf("st7735_draw_point: %d, %d\r\n", x, y);
}

const struct drawing_board st7735_drawer = 
{
    .draw_point = st7735_draw_point,
};


void st7735_register(struct st7735 * self)
{
    memset(self, 0, sizeof(struct st7735));
    self->drawer = &st7735_drawer;
}