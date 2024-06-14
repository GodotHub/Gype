#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRAction() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRAction>("OpenXRAction")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (OpenXRAction::*)() const>(&OpenXRAction::get_localized_name), static_cast<void (OpenXRAction::*)(const String &)>(&OpenXRAction::set_localized_name)>((new std::string("localized_name"))->c_str())
			.property<static_cast<OpenXRAction::ActionType (OpenXRAction::*)() const>(&OpenXRAction::get_action_type), static_cast<void (OpenXRAction::*)(OpenXRAction::ActionType)>(&OpenXRAction::set_action_type)>((new std::string("action_type"))->c_str())
			.property<static_cast<PackedStringArray (OpenXRAction::*)() const>(&OpenXRAction::get_toplevel_paths), static_cast<void (OpenXRAction::*)(const PackedStringArray &)>(&OpenXRAction::set_toplevel_paths)>((new std::string("toplevel_paths"))->c_str());
	qjs::Value _ActionType = context->newObject();
	_ActionType[(new std::string("OPENXR_ACTION_BOOL"))->c_str()] = OpenXRAction::ActionType::OPENXR_ACTION_BOOL;
	_ActionType[(new std::string("OPENXR_ACTION_FLOAT"))->c_str()] = OpenXRAction::ActionType::OPENXR_ACTION_FLOAT;
	_ActionType[(new std::string("OPENXR_ACTION_VECTOR2"))->c_str()] = OpenXRAction::ActionType::OPENXR_ACTION_VECTOR2;
	_ActionType[(new std::string("OPENXR_ACTION_POSE"))->c_str()] = OpenXRAction::ActionType::OPENXR_ACTION_POSE;
	_module.add("ActionType", std::move(_ActionType));
}