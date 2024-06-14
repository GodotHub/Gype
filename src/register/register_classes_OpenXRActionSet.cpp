
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRActionSet() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRActionSet>("OpenXRActionSet")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (OpenXRActionSet::*)() const>(&OpenXRActionSet::get_localized_name), static_cast<void (OpenXRActionSet::*)(const String &)>(&OpenXRActionSet::set_localized_name)>((new std::string("localized_name"))->c_str())
			.property<static_cast<int32_t (OpenXRActionSet::*)() const>(&OpenXRActionSet::get_priority), static_cast<void (OpenXRActionSet::*)(int32_t)>(&OpenXRActionSet::set_priority)>((new std::string("priority"))->c_str())
			.property<static_cast<Array (OpenXRActionSet::*)() const>(&OpenXRActionSet::get_actions), static_cast<void (OpenXRActionSet::*)(const Array &)>(&OpenXRActionSet::set_actions)>((new std::string("actions"))->c_str())
			.fun<static_cast<int32_t (OpenXRActionSet::*)() const>(&OpenXRActionSet::get_action_count)>((new std::string("get_action_count"))->c_str())
			.fun<static_cast<void (OpenXRActionSet::*)(const Ref<OpenXRAction> &)>(&OpenXRActionSet::add_action)>((new std::string("add_action"))->c_str())
			.fun<static_cast<void (OpenXRActionSet::*)(const Ref<OpenXRAction> &)>(&OpenXRActionSet::remove_action)>((new std::string("remove_action"))->c_str());
}