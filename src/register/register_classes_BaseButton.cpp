#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/base_button.hpp>

using namespace godot;

void register_classes_BaseButton() {
    qjs::Context::Module &_module = _Control;
    _module.class_<BaseButton>("BaseButton")
           .constructor<>()
           .property<BaseButton::is_disabled, BaseButton::set_disabled>("disabled")
           .property<BaseButton::is_toggle_mode, BaseButton::set_toggle_mode>("toggle_mode")
           .property<BaseButton::is_pressed, BaseButton::set_pressed>("button_pressed")
           .property<BaseButton::get_action_mode, BaseButton::set_action_mode>("action_mode")
           .property<BaseButton::get_button_mask, BaseButton::set_button_mask>("button_mask")
           .property<BaseButton::is_keep_pressed_outside, BaseButton::set_keep_pressed_outside>("keep_pressed_outside")
           .property<BaseButton::get_button_group, BaseButton::set_button_group>("button_group")
           .property<BaseButton::get_shortcut, BaseButton::set_shortcut>("shortcut")
           .property<BaseButton::is_shortcut_feedback, BaseButton::set_shortcut_feedback>("shortcut_feedback")
           .property<BaseButton::is_shortcut_in_tooltip_enabled, BaseButton::set_shortcut_in_tooltip>("shortcut_in_tooltip")
		    .fun<static_cast<void(BaseButton::*)()>(&BaseButton::_pressed)>("_pressed")
		    .fun<static_cast<void(BaseButton::*)(bool)>(&BaseButton::_toggled)>("_toggled")
		    .fun<static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_pressed_no_signal)>("set_pressed_no_signal")
		    .fun<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_hovered)>("is_hovered")
		    .fun<static_cast<BaseButton::DrawMode(BaseButton::*)()const>(&BaseButton::get_draw_mode)>("get_draw_mode")
;}