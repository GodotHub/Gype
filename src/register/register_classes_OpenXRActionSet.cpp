#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRActionSet() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRActionSet>("OpenXRActionSet")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(OpenXRActionSet::*)()const>(&OpenXRActionSet::get_localized_name),static_cast<void(OpenXRActionSet::*)(const String &)>(&OpenXRActionSet::set_localized_name)>("localized_name")
            .property<static_cast<int32_t(OpenXRActionSet::*)()const>(&OpenXRActionSet::get_priority),static_cast<void(OpenXRActionSet::*)(int32_t)>(&OpenXRActionSet::set_priority)>("priority")
            .property<static_cast<Array(OpenXRActionSet::*)()const>(&OpenXRActionSet::get_actions),static_cast<void(OpenXRActionSet::*)(const Array &)>(&OpenXRActionSet::set_actions)>("actions")
            .fun<static_cast<int32_t(OpenXRActionSet::*)()const>(&OpenXRActionSet::get_action_count)>("get_action_count")
            .fun<static_cast<void(OpenXRActionSet::*)(const Ref<OpenXRAction> &)>(&OpenXRActionSet::add_action)>("add_action")
            .fun<static_cast<void(OpenXRActionSet::*)(const Ref<OpenXRAction> &)>(&OpenXRActionSet::remove_action)>("remove_action")
;}