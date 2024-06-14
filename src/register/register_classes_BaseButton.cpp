#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BaseButton() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<BaseButton>("BaseButton")
			.constructor<>()
			.base<Control>()
			.property<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_disabled), static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_disabled)>((new std::string("disabled"))->c_str())
			.property<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_toggle_mode), static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_toggle_mode)>((new std::string("toggle_mode"))->c_str())
			.property<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_pressed), static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_pressed)>((new std::string("button_pressed"))->c_str())
			.property<static_cast<BaseButton::ActionMode (BaseButton::*)() const>(&BaseButton::get_action_mode), static_cast<void (BaseButton::*)(BaseButton::ActionMode)>(&BaseButton::set_action_mode)>((new std::string("action_mode"))->c_str())
			.property<static_cast<BitField<MouseButtonMask> (BaseButton::*)() const>(&BaseButton::get_button_mask), static_cast<void (BaseButton::*)(BitField<MouseButtonMask>)>(&BaseButton::set_button_mask)>((new std::string("button_mask"))->c_str())
			.property<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_keep_pressed_outside), static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_keep_pressed_outside)>((new std::string("keep_pressed_outside"))->c_str())
			.property<static_cast<Ref<ButtonGroup> (BaseButton::*)() const>(&BaseButton::get_button_group), static_cast<void (BaseButton::*)(const Ref<ButtonGroup> &)>(&BaseButton::set_button_group)>((new std::string("button_group"))->c_str())
			.property<static_cast<Ref<Shortcut> (BaseButton::*)() const>(&BaseButton::get_shortcut), static_cast<void (BaseButton::*)(const Ref<Shortcut> &)>(&BaseButton::set_shortcut)>((new std::string("shortcut"))->c_str())
			.property<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_shortcut_feedback), static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_shortcut_feedback)>((new std::string("shortcut_feedback"))->c_str())
			.property<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_shortcut_in_tooltip_enabled), static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_shortcut_in_tooltip)>((new std::string("shortcut_in_tooltip"))->c_str())
			.fun<static_cast<void (BaseButton::*)()>(&BaseButton::_pressed)>((new std::string("_pressed"))->c_str())
			.fun<static_cast<void (BaseButton::*)(bool)>(&BaseButton::_toggled)>((new std::string("_toggled"))->c_str())
			.fun<static_cast<void (BaseButton::*)(bool)>(&BaseButton::set_pressed_no_signal)>((new std::string("set_pressed_no_signal"))->c_str())
			.fun<static_cast<bool (BaseButton::*)() const>(&BaseButton::is_hovered)>((new std::string("is_hovered"))->c_str())
			.fun<static_cast<BaseButton::DrawMode (BaseButton::*)() const>(&BaseButton::get_draw_mode)>((new std::string("get_draw_mode"))->c_str());
	qjs::Value _DrawMode = context->newObject();
	_DrawMode[(new std::string("DRAW_NORMAL"))->c_str()] = BaseButton::DrawMode::DRAW_NORMAL;
	_DrawMode[(new std::string("DRAW_PRESSED"))->c_str()] = BaseButton::DrawMode::DRAW_PRESSED;
	_DrawMode[(new std::string("DRAW_HOVER"))->c_str()] = BaseButton::DrawMode::DRAW_HOVER;
	_DrawMode[(new std::string("DRAW_DISABLED"))->c_str()] = BaseButton::DrawMode::DRAW_DISABLED;
	_DrawMode[(new std::string("DRAW_HOVER_PRESSED"))->c_str()] = BaseButton::DrawMode::DRAW_HOVER_PRESSED;
	_module.add("DrawMode", std::move(_DrawMode));
	qjs::Value _ActionMode = context->newObject();
	_ActionMode[(new std::string("ACTION_MODE_BUTTON_PRESS"))->c_str()] = BaseButton::ActionMode::ACTION_MODE_BUTTON_PRESS;
	_ActionMode[(new std::string("ACTION_MODE_BUTTON_RELEASE"))->c_str()] = BaseButton::ActionMode::ACTION_MODE_BUTTON_RELEASE;
	_module.add("ActionMode", std::move(_ActionMode));
}