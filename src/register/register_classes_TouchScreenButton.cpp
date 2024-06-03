#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_TouchScreenButton() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<TouchScreenButton>("TouchScreenButton")
           .constructor<>()
           .property<TouchScreenButton::get_texture_normal, TouchScreenButton::set_texture_normal>("texture_normal")
           .property<TouchScreenButton::get_texture_pressed, TouchScreenButton::set_texture_pressed>("texture_pressed")
           .property<TouchScreenButton::get_bitmask, TouchScreenButton::set_bitmask>("bitmask")
           .property<TouchScreenButton::get_shape, TouchScreenButton::set_shape>("shape")
           .property<TouchScreenButton::is_shape_centered, TouchScreenButton::set_shape_centered>("shape_centered")
           .property<TouchScreenButton::is_shape_visible, TouchScreenButton::set_shape_visible>("shape_visible")
           .property<TouchScreenButton::is_passby_press_enabled, TouchScreenButton::set_passby_press>("passby_press")
           .property<TouchScreenButton::get_action, TouchScreenButton::set_action>("action")
           .property<TouchScreenButton::get_visibility_mode, TouchScreenButton::set_visibility_mode>("visibility_mode")
		   .fun<static_cast<bool(TouchScreenButton::*)()const>(&TouchScreenButton::is_pressed)>("is_pressed")
;}