#include <zephyr/kernel.h>
#include <zmk/display/widgets/custom_widget.h>
#include <lvgl.h>

static lv_obj_t *label;

void hello_widget_init(lv_obj_t *parent) {
    label = lv_label_create(parent);
    lv_label_set_text(label, "Hello, world!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
}

ZMK_WIDGET_CUSTOM(hello_widget, hello_widget_init)
