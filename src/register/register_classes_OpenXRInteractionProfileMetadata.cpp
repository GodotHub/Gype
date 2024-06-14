#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile_metadata.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRInteractionProfileMetadata() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRInteractionProfileMetadata>("OpenXRInteractionProfileMetadata")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<void (OpenXRInteractionProfileMetadata::*)(const String &, const String &)>(&OpenXRInteractionProfileMetadata::register_profile_rename)>((new std::string("register_profile_rename"))->c_str())
			.fun<static_cast<void (OpenXRInteractionProfileMetadata::*)(const String &, const String &, const String &)>(&OpenXRInteractionProfileMetadata::register_top_level_path)>((new std::string("register_top_level_path"))->c_str())
			.fun<static_cast<void (OpenXRInteractionProfileMetadata::*)(const String &, const String &, const String &)>(&OpenXRInteractionProfileMetadata::register_interaction_profile)>((new std::string("register_interaction_profile"))->c_str())
			.fun<static_cast<void (OpenXRInteractionProfileMetadata::*)(const String &, const String &, const String &, const String &, const String &, OpenXRAction::ActionType)>(&OpenXRInteractionProfileMetadata::register_io_path)>((new std::string("register_io_path"))->c_str());
}