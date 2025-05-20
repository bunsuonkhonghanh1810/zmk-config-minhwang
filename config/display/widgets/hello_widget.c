#include <zephyr/kernel.h>
#include <zmk/display/widgets/label.h>

ZMK_DISPLAY_WIDGET(label_widget, 32, 12);

int zmk_widget_hello_init(struct zmk_widget_hello *widget, lv_obj_t *parent) {
    widget->obj = label_widget_create(parent);
    label_widget_set_text(widget->obj, "Hello, World!");
    return 0;
}
