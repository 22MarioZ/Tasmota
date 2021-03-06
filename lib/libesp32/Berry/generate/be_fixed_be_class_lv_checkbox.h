#include "be_constobj.h"

static be_define_const_map_slots(be_class_lv_checkbox_map) {
    { be_const_key(tostring, -1), be_const_func(lvx_tostring) },
    { be_const_key(get_state, -1), be_const_func(lvbe_checkbox_get_state) },
    { be_const_key(is_checked, 7), be_const_func(lvbe_checkbox_is_checked) },
    { be_const_key(dot_p, 4), be_const_int(0) },
    { be_const_key(create, 9), be_const_func(lvbe_checkbox_create) },
    { be_const_key(set_state, -1), be_const_func(lvbe_checkbox_set_state) },
    { be_const_key(is_inactive, 10), be_const_func(lvbe_checkbox_is_inactive) },
    { be_const_key(set_disabled, -1), be_const_func(lvbe_checkbox_set_disabled) },
    { be_const_key(set_checked, -1), be_const_func(lvbe_checkbox_set_checked) },
    { be_const_key(get_text, -1), be_const_func(lvbe_checkbox_get_text) },
    { be_const_key(init, -1), be_const_func(lvbe_checkbox_create) },
    { be_const_key(set_text, 3), be_const_func(lvbe_checkbox_set_text) },
    { be_const_key(set_text_static, 2), be_const_func(lvbe_checkbox_set_text_static) },
};

static be_define_const_map(
    be_class_lv_checkbox_map,
    13
);

BE_EXPORT_VARIABLE be_define_const_class(
    be_class_lv_checkbox,
    1,
    (bclass *)&be_class_lv_obj,
    lv_checkbox
);
