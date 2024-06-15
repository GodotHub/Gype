#include <godot_cpp/classes/open_xr_action_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRActionMap() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRActionMap>("OpenXRActionMap")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Array(OpenXRActionMap::*)()const>(&OpenXRActionMap::get_action_sets),static_cast<void(OpenXRActionMap::*)(const Array &)>(&OpenXRActionMap::set_action_sets)>("action_sets")
            .property<static_cast<Array(OpenXRActionMap::*)()const>(&OpenXRActionMap::get_interaction_profiles),static_cast<void(OpenXRActionMap::*)(const Array &)>(&OpenXRActionMap::set_interaction_profiles)>("interaction_profiles")
            .fun<static_cast<int32_t(OpenXRActionMap::*)()const>(&OpenXRActionMap::get_action_set_count)>("get_action_set_count")
            .fun<static_cast<Ref<OpenXRActionSet>(OpenXRActionMap::*)(const String &)const>(&OpenXRActionMap::find_action_set)>("find_action_set")
            .fun<static_cast<Ref<OpenXRActionSet>(OpenXRActionMap::*)(int32_t)const>(&OpenXRActionMap::get_action_set)>("get_action_set")
            .fun<static_cast<void(OpenXRActionMap::*)(const Ref<OpenXRActionSet> &)>(&OpenXRActionMap::add_action_set)>("add_action_set")
            .fun<static_cast<void(OpenXRActionMap::*)(const Ref<OpenXRActionSet> &)>(&OpenXRActionMap::remove_action_set)>("remove_action_set")
            .fun<static_cast<int32_t(OpenXRActionMap::*)()const>(&OpenXRActionMap::get_interaction_profile_count)>("get_interaction_profile_count")
            .fun<static_cast<Ref<OpenXRInteractionProfile>(OpenXRActionMap::*)(const String &)const>(&OpenXRActionMap::find_interaction_profile)>("find_interaction_profile")
            .fun<static_cast<Ref<OpenXRInteractionProfile>(OpenXRActionMap::*)(int32_t)const>(&OpenXRActionMap::get_interaction_profile)>("get_interaction_profile")
            .fun<static_cast<void(OpenXRActionMap::*)(const Ref<OpenXRInteractionProfile> &)>(&OpenXRActionMap::add_interaction_profile)>("add_interaction_profile")
            .fun<static_cast<void(OpenXRActionMap::*)(const Ref<OpenXRInteractionProfile> &)>(&OpenXRActionMap::remove_interaction_profile)>("remove_interaction_profile")
            .fun<static_cast<void(OpenXRActionMap::*)()>(&OpenXRActionMap::create_default_action_sets)>("create_default_action_sets")
;}