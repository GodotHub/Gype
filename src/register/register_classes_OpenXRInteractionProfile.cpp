#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRInteractionProfile() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRInteractionProfile>("OpenXRInteractionProfile")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(OpenXRInteractionProfile::*)()const>(&OpenXRInteractionProfile::get_interaction_profile_path),static_cast<void(OpenXRInteractionProfile::*)(const String &)>(&OpenXRInteractionProfile::set_interaction_profile_path)>("interaction_profile_path")
            .property<static_cast<Array(OpenXRInteractionProfile::*)()const>(&OpenXRInteractionProfile::get_bindings),static_cast<void(OpenXRInteractionProfile::*)(const Array &)>(&OpenXRInteractionProfile::set_bindings)>("bindings")
            .fun<static_cast<int32_t(OpenXRInteractionProfile::*)()const>(&OpenXRInteractionProfile::get_binding_count)>("get_binding_count")
            .fun<static_cast<Ref<OpenXRIPBinding>(OpenXRInteractionProfile::*)(int32_t)const>(&OpenXRInteractionProfile::get_binding)>("get_binding")
;}