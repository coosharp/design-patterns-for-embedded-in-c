#include "../inc/display.h"
#include "../inc/st7735.h"
#include "../inc/st7789.h"
#include "../inc/ili9341.h"

void display_draw_point(const struct display * self, int x, int y)
{
    draw_point_t fn = (*self->drawer)->draw_point;
    fn(self->drawer, x, y);
}

void display_register_panel(struct display * self, display_panel_type_t type)
{
    switch (type)
    {
    case PANEL_ST7735:
        struct st7735 * st7735 = malloc(sizeof(struct st7735));
        st7735_register(st7735);
        self->drawer = &st7735->drawer;
        break;
    case PANEL_ST7789:
        struct st7789 * st7789 = malloc(sizeof(struct st7789));
        st7789_register(st7789);
        self->drawer = &st7789->drawer;
        break;
    case PANEL_ILI9341:
        struct ili9341 * ili9341 = malloc(sizeof(struct ili9341));
        ili9341_register(ili9341);
        self->drawer = &ili9341->drawer;
        break;
    default:
        break;
    }
}
