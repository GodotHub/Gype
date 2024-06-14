
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRIPBinding() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRIPBinding>("OpenXRIPBinding")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Ref<OpenXRAction> (OpenXRIPBinding::*)() const>(&OpenXRIPBinding::get_action), static_cast<void (OpenXRIPBinding::*)(const Ref<OpenXRAction> &)>(&OpenXRIPBinding::set_action)>((new std::string("action"))->c_str())
			.property<static_cast<PackedStringArray (OpenXRIPBinding::*)() const>(&OpenXRIPBinding::get_paths), static_cast<void (OpenXRIPBinding::*)(const PackedStringArray &)>(&OpenXRIPBinding::set_paths)>((new std::string("paths"))->c_str())
			.fun<static_cast<int32_t (OpenXRIPBinding::*)() const>(&OpenXRIPBinding::get_path_count)>((new std::string("get_path_count"))->c_str())
			.fun<static_cast<bool (OpenXRIPBinding::*)(const String &) const>(&OpenXRIPBinding::has_path)>((new std::string("has_path"))->c_str())
			.fun<static_cast<void (OpenXRIPBinding::*)(const String &)>(&OpenXRIPBinding::add_path)>((new std::string("add_path"))->c_str())
			.fun<static_cast<void (OpenXRIPBinding::*)(const String &)>(&OpenXRIPBinding::remove_path)>((new std::string("remove_path"))->c_str());
}