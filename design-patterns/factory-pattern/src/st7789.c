#include "../inc/st7789.h"

static void st7789_draw_point(const struct drawing_board ** drawer, int x, int y)
{
    printf("st7789_draw_point: %d, %d\r\n", x, y);
}

const struct drawing_board st7789_drawer = 
{
    .draw_point = st7789_draw_point,
};


void st7789_register(struct st7789 * self)
{
    memset(self, 0, sizeof(struct st7789));
    self->drawer = &st7789_drawer;
}