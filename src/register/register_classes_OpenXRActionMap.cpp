
#include <godot_cpp/classes/open_xr_action_map.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRActionMap() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRActionMap>("OpenXRActionMap")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Array (OpenXRActionMap::*)() const>(&OpenXRActionMap::get_action_sets), static_cast<void (OpenXRActionMap::*)(const Array &)>(&OpenXRActionMap::set_action_sets)>((new std::string("action_sets"))->c_str())
			.property<static_cast<Array (OpenXRActionMap::*)() const>(&OpenXRActionMap::get_interaction_profiles), static_cast<void (OpenXRActionMap::*)(const Array &)>(&OpenXRActionMap::set_interaction_profiles)>((new std::string("interaction_profiles"))->c_str())
			.fun<static_cast<int32_t (OpenXRActionMap::*)() const>(&OpenXRActionMap::get_action_set_count)>((new std::string("get_action_set_count"))->c_str())
			.fun<static_cast<Ref<OpenXRActionSet> (OpenXRActionMap::*)(const String &) const>(&OpenXRActionMap::find_action_set)>((new std::string("find_action_set"))->c_str())
			.fun<static_cast<Ref<OpenXRActionSet> (OpenXRActionMap::*)(int32_t) const>(&OpenXRActionMap::get_action_set)>((new std::string("get_action_set"))->c_str())
			.fun<static_cast<void (OpenXRActionMap::*)(const Ref<OpenXRActionSet> &)>(&OpenXRActionMap::add_action_set)>((new std::string("add_action_set"))->c_str())
			.fun<static_cast<void (OpenXRActionMap::*)(const Ref<OpenXRActionSet> &)>(&OpenXRActionMap::remove_action_set)>((new std::string("remove_action_set"))->c_str())
			.fun<static_cast<int32_t (OpenXRActionMap::*)() const>(&OpenXRActionMap::get_interaction_profile_count)>((new std::string("get_interaction_profile_count"))->c_str())
			.fun<static_cast<Ref<OpenXRInteractionProfile> (OpenXRActionMap::*)(const String &) const>(&OpenXRActionMap::find_interaction_profile)>((new std::string("find_interaction_profile"))->c_str())
			.fun<static_cast<Ref<OpenXRInteractionProfile> (OpenXRActionMap::*)(int32_t) const>(&OpenXRActionMap::get_interaction_profile)>((new std::string("get_interaction_profile"))->c_str())
			.fun<static_cast<void (OpenXRActionMap::*)(const Ref<OpenXRInteractionProfile> &)>(&OpenXRActionMap::add_interaction_profile)>((new std::string("add_interaction_profile"))->c_str())
			.fun<static_cast<void (OpenXRActionMap::*)(const Ref<OpenXRInteractionProfile> &)>(&OpenXRActionMap::remove_interaction_profile)>((new std::string("remove_interaction_profile"))->c_str())
			.fun<static_cast<void (OpenXRActionMap::*)()>(&OpenXRActionMap::create_default_action_sets)>((new std::string("create_default_action_sets"))->c_str());
}