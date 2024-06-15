#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BaseButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<BaseButton>("BaseButton")
            .constructor<>()
            .base<Control>()
            .property<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_disabled),static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_disabled)>("disabled")
            .property<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_toggle_mode),static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_toggle_mode)>("toggle_mode")
            .property<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_pressed),static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_pressed)>("button_pressed")
            .property<static_cast<BaseButton::ActionMode(BaseButton::*)()const>(&BaseButton::get_action_mode),static_cast<void(BaseButton::*)(BaseButton::ActionMode)>(&BaseButton::set_action_mode)>("action_mode")
            .property<static_cast<BitField<MouseButtonMask>(BaseButton::*)()const>(&BaseButton::get_button_mask),static_cast<void(BaseButton::*)(BitField<MouseButtonMask>)>(&BaseButton::set_button_mask)>("button_mask")
            .property<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_keep_pressed_outside),static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_keep_pressed_outside)>("keep_pressed_outside")
            .property<static_cast<Ref<ButtonGroup>(BaseButton::*)()const>(&BaseButton::get_button_group),static_cast<void(BaseButton::*)(const Ref<ButtonGroup> &)>(&BaseButton::set_button_group)>("button_group")
            .property<static_cast<Ref<Shortcut>(BaseButton::*)()const>(&BaseButton::get_shortcut),static_cast<void(BaseButton::*)(const Ref<Shortcut> &)>(&BaseButton::set_shortcut)>("shortcut")
            .property<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_shortcut_feedback),static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_shortcut_feedback)>("shortcut_feedback")
            .property<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_shortcut_in_tooltip_enabled),static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_shortcut_in_tooltip)>("shortcut_in_tooltip")
            .fun<static_cast<void(BaseButton::*)()>(&BaseButton::_pressed)>("_pressed")
            .fun<static_cast<void(BaseButton::*)(bool)>(&BaseButton::_toggled)>("_toggled")
            .fun<static_cast<void(BaseButton::*)(bool)>(&BaseButton::set_pressed_no_signal)>("set_pressed_no_signal")
            .fun<static_cast<bool(BaseButton::*)()const>(&BaseButton::is_hovered)>("is_hovered")
            .fun<static_cast<BaseButton::DrawMode(BaseButton::*)()const>(&BaseButton::get_draw_mode)>("get_draw_mode")
;    qjs::Value _DrawMode = context->newObject();
    _DrawMode["DRAW_NORMAL"] = BaseButton::DrawMode::DRAW_NORMAL;
    _DrawMode["DRAW_PRESSED"] = BaseButton::DrawMode::DRAW_PRESSED;
    _DrawMode["DRAW_HOVER"] = BaseButton::DrawMode::DRAW_HOVER;
    _DrawMode["DRAW_DISABLED"] = BaseButton::DrawMode::DRAW_DISABLED;
    _DrawMode["DRAW_HOVER_PRESSED"] = BaseButton::DrawMode::DRAW_HOVER_PRESSED;
    _module.add("DrawMode", std::move(_DrawMode));
    qjs::Value _ActionMode = context->newObject();
    _ActionMode["ACTION_MODE_BUTTON_PRESS"] = BaseButton::ActionMode::ACTION_MODE_BUTTON_PRESS;
    _ActionMode["ACTION_MODE_BUTTON_RELEASE"] = BaseButton::ActionMode::ACTION_MODE_BUTTON_RELEASE;
    _module.add("ActionMode", std::move(_ActionMode));
}