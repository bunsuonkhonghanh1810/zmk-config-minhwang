#pragma once

#include <lvgl.h>

struct zmk_widget_hello {
    lv_obj_t *obj;
};

int zmk_widget_hello_init(struct zmk_widget_hello *widget, lv_obj_t *parent);
