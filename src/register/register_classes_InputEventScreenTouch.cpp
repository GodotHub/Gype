
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event_screen_touch.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventScreenTouch() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventScreenTouch>("InputEventScreenTouch")
			.constructor<>()
			.base<InputEventFromWindow>()
			.property<static_cast<int32_t (InputEventScreenTouch::*)() const>(&InputEventScreenTouch::get_index), static_cast<void (InputEventScreenTouch::*)(int32_t)>(&InputEventScreenTouch::set_index)>((new std::string("index"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenTouch::*)() const>(&InputEventScreenTouch::get_position), static_cast<void (InputEventScreenTouch::*)(const Vector2 &)>(&InputEventScreenTouch::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<void (InputEventScreenTouch::*)(bool)>(&InputEventScreenTouch::set_canceled)>((new std::string("{'name': 'set_canceled', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'canceled', 'type': 'bool'}]}"))->c_str())
			.property<static_cast<void (InputEventScreenTouch::*)(bool)>(&InputEventScreenTouch::set_pressed)>((new std::string("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}"))->c_str())
			.property<static_cast<bool (InputEventScreenTouch::*)() const>(&InputEventScreenTouch::is_double_tap), static_cast<void (InputEventScreenTouch::*)(bool)>(&InputEventScreenTouch::set_double_tap)>((new std::string("double_tap"))->c_str());
}