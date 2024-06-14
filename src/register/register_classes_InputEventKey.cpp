
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventKey() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventKey>("InputEventKey")
			.constructor<>()
			.base<InputEventWithModifiers>()
			.property<static_cast<void (InputEventKey::*)(bool)>(&InputEventKey::set_pressed)>((new std::string("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}"))->c_str())
			.property<static_cast<Key (InputEventKey::*)() const>(&InputEventKey::get_keycode), static_cast<void (InputEventKey::*)(Key)>(&InputEventKey::set_keycode)>((new std::string("keycode"))->c_str())
			.property<static_cast<Key (InputEventKey::*)() const>(&InputEventKey::get_physical_keycode), static_cast<void (InputEventKey::*)(Key)>(&InputEventKey::set_physical_keycode)>((new std::string("physical_keycode"))->c_str())
			.property<static_cast<Key (InputEventKey::*)() const>(&InputEventKey::get_key_label), static_cast<void (InputEventKey::*)(Key)>(&InputEventKey::set_key_label)>((new std::string("key_label"))->c_str())
			.property<static_cast<int64_t (InputEventKey::*)() const>(&InputEventKey::get_unicode), static_cast<void (InputEventKey::*)(int64_t)>(&InputEventKey::set_unicode)>((new std::string("unicode"))->c_str())
			.property<static_cast<KeyLocation (InputEventKey::*)() const>(&InputEventKey::get_location), static_cast<void (InputEventKey::*)(KeyLocation)>(&InputEventKey::set_location)>((new std::string("location"))->c_str())
			.property<static_cast<void (InputEventKey::*)(bool)>(&InputEventKey::set_echo)>((new std::string("{'name': 'set_echo', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'echo', 'type': 'bool'}]}"))->c_str())
			.fun<static_cast<Key (InputEventKey::*)() const>(&InputEventKey::get_keycode_with_modifiers)>((new std::string("get_keycode_with_modifiers"))->c_str())
			.fun<static_cast<Key (InputEventKey::*)() const>(&InputEventKey::get_physical_keycode_with_modifiers)>((new std::string("get_physical_keycode_with_modifiers"))->c_str())
			.fun<static_cast<Key (InputEventKey::*)() const>(&InputEventKey::get_key_label_with_modifiers)>((new std::string("get_key_label_with_modifiers"))->c_str())
			.fun<static_cast<String (InputEventKey::*)() const>(&InputEventKey::as_text_keycode)>((new std::string("as_text_keycode"))->c_str())
			.fun<static_cast<String (InputEventKey::*)() const>(&InputEventKey::as_text_physical_keycode)>((new std::string("as_text_physical_keycode"))->c_str())
			.fun<static_cast<String (InputEventKey::*)() const>(&InputEventKey::as_text_key_label)>((new std::string("as_text_key_label"))->c_str())
			.fun<static_cast<String (InputEventKey::*)() const>(&InputEventKey::as_text_location)>((new std::string("as_text_location"))->c_str());
}