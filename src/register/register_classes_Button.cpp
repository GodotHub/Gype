#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/button.hpp>

using namespace godot;

void register_classes_Button() {
    qjs::Context::Module &_module = _Control;
    _module.class_<Button>("Button")
           .constructor<>()
           .property<Button::get_text, Button::set_text>("text")
           .property<Button::get_button_icon, Button::set_button_icon>("icon")
           .property<Button::is_flat, Button::set_flat>("flat")
           .property<Button::get_text_alignment, Button::set_text_alignment>("alignment")
           .property<Button::get_text_overrun_behavior, Button::set_text_overrun_behavior>("text_overrun_behavior")
           .property<Button::get_clip_text, Button::set_clip_text>("clip_text")
           .property<Button::get_icon_alignment, Button::set_icon_alignment>("icon_alignment")
           .property<Button::get_vertical_icon_alignment, Button::set_vertical_icon_alignment>("vertical_icon_alignment")
           .property<Button::is_expand_icon, Button::set_expand_icon>("expand_icon")
           .property<Button::get_text_direction, Button::set_text_direction>("text_direction")
           .property<Button::get_language, Button::set_language>("language")
;}