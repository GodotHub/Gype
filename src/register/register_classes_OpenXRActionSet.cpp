#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/ref.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRActionSet() {
	qjs::Context::Module &_module = _General;
	_module.class_<OpenXRActionSet>("OpenXRActionSet")
			.constructor<>()
			.property<&OpenXRActionSet::get_localized_name, &OpenXRActionSet::set_localized_name>("localized_name")
			.property<&OpenXRActionSet::get_priority, &OpenXRActionSet::set_priority>("priority")
			.property<&OpenXRActionSet::get_actions, &OpenXRActionSet::set_actions>("actions")
			.fun<static_cast<int32_t (OpenXRActionSet::*)() const>(&OpenXRActionSet::get_action_count)>("get_action_count")
			.fun<static_cast<void (OpenXRActionSet::*)(const Ref<OpenXRAction> &)>(&OpenXRActionSet::add_action)>("add_action")
			.fun<static_cast<void (OpenXRActionSet::*)(const Ref<OpenXRAction> &)>(&OpenXRActionSet::remove_action)>("remove_action");
}