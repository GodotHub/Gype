#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ButtonGroup() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ButtonGroup>("ButtonGroup")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (ButtonGroup::*)()>(&ButtonGroup::is_allow_unpress), static_cast<void (ButtonGroup::*)(bool)>(&ButtonGroup::set_allow_unpress)>((new std::string("allow_unpress"))->c_str())
			.fun<static_cast<BaseButton *(ButtonGroup::*)()>(&ButtonGroup::get_pressed_button)>((new std::string("get_pressed_button"))->c_str())
			.fun<static_cast<TypedArray<BaseButton> (ButtonGroup::*)()>(&ButtonGroup::get_buttons)>((new std::string("get_buttons"))->c_str());
}