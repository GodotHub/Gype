#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRIPBinding() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRIPBinding>("OpenXRIPBinding")
			.constructor<>()
			.property<&OpenXRIPBinding::get_action, &OpenXRIPBinding::set_action>("action")
			.property<&OpenXRIPBinding::get_paths, &OpenXRIPBinding::set_paths>("paths")
			.fun<static_cast<int32_t (OpenXRIPBinding::*)() const>(&OpenXRIPBinding::get_path_count)>("get_path_count")
			.fun<static_cast<bool (OpenXRIPBinding::*)(const String &) const>(&OpenXRIPBinding::has_path)>("has_path")
			.fun<static_cast<void (OpenXRIPBinding::*)(const String &)>(&OpenXRIPBinding::add_path)>("add_path")
			.fun<static_cast<void (OpenXRIPBinding::*)(const String &)>(&OpenXRIPBinding::remove_path)>("remove_path");
}