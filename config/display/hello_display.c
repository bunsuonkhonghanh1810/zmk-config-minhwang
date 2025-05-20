#include <lvgl.h>
#include <zmk/display.h>
#include "widgets/hello_widget.h"

static struct zmk_widget_hello hello_widget;

static lv_obj_t *screen;

void hello_screen_init() {
    screen = lv_obj_create(NULL);
    zmk_widget_hello_init(&hello_widget, screen);
    lv_obj_align(hello_widget.obj, LV_ALIGN_CENTER, 0, 0);
}

lv_obj_t *zmk_display_screen(void) {
    return screen;
}
