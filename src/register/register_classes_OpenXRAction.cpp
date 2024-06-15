#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRAction() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRAction>("OpenXRAction")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(OpenXRAction::*)()const>(&OpenXRAction::get_localized_name),static_cast<void(OpenXRAction::*)(const String &)>(&OpenXRAction::set_localized_name)>("localized_name")
            .property<static_cast<OpenXRAction::ActionType(OpenXRAction::*)()const>(&OpenXRAction::get_action_type),static_cast<void(OpenXRAction::*)(OpenXRAction::ActionType)>(&OpenXRAction::set_action_type)>("action_type")
            .property<static_cast<PackedStringArray(OpenXRAction::*)()const>(&OpenXRAction::get_toplevel_paths),static_cast<void(OpenXRAction::*)(const PackedStringArray &)>(&OpenXRAction::set_toplevel_paths)>("toplevel_paths")
;    qjs::Value _ActionType = context->newObject();
    _ActionType["OPENXR_ACTION_BOOL"] = OpenXRAction::ActionType::OPENXR_ACTION_BOOL;
    _ActionType["OPENXR_ACTION_FLOAT"] = OpenXRAction::ActionType::OPENXR_ACTION_FLOAT;
    _ActionType["OPENXR_ACTION_VECTOR2"] = OpenXRAction::ActionType::OPENXR_ACTION_VECTOR2;
    _ActionType["OPENXR_ACTION_POSE"] = OpenXRAction::ActionType::OPENXR_ACTION_POSE;
    _module.add("ActionType", std::move(_ActionType));
}