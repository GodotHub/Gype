
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRInteractionProfile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRInteractionProfile>("OpenXRInteractionProfile")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (OpenXRInteractionProfile::*)() const>(&OpenXRInteractionProfile::get_interaction_profile_path), static_cast<void (OpenXRInteractionProfile::*)(const String &)>(&OpenXRInteractionProfile::set_interaction_profile_path)>((new std::string("interaction_profile_path"))->c_str())
			.property<static_cast<Array (OpenXRInteractionProfile::*)() const>(&OpenXRInteractionProfile::get_bindings), static_cast<void (OpenXRInteractionProfile::*)(const Array &)>(&OpenXRInteractionProfile::set_bindings)>((new std::string("bindings"))->c_str())
			.fun<static_cast<int32_t (OpenXRInteractionProfile::*)() const>(&OpenXRInteractionProfile::get_binding_count)>((new std::string("get_binding_count"))->c_str())
			.fun<static_cast<Ref<OpenXRIPBinding> (OpenXRInteractionProfile::*)(int32_t) const>(&OpenXRInteractionProfile::get_binding)>((new std::string("get_binding"))->c_str());
}