#include "../inc/display.h"


int main(void)
{
    struct display st7735_panel;
    display_register_panel(&st7735_panel, PANEL_ST7735);
    display_draw_point(&st7735_panel, 10, 10);

    struct display st7789_panel;
    display_register_panel(&st7789_panel, PANEL_ST7789);
    display_draw_point(&st7789_panel, 10, 10);

    struct display ili9341_panel;
    display_register_panel(&ili9341_panel, PANEL_ILI9341);
    display_draw_point(&ili9341_panel, 10, 10);

    return 0;
}