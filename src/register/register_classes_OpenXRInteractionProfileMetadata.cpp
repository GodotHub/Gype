#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/open_xr_interaction_profile_metadata.hpp>

using namespace godot;

void register_classes_OpenXRInteractionProfileMetadata() {
    qjs::Context::Module &_module = _General;
    _module.class_<OpenXRInteractionProfileMetadata>("OpenXRInteractionProfileMetadata")
           .constructor<>()
		    .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &)>(&OpenXRInteractionProfileMetadata::register_profile_rename)>("register_profile_rename")
		    .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &,const String &)>(&OpenXRInteractionProfileMetadata::register_top_level_path)>("register_top_level_path")
		    .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &,const String &)>(&OpenXRInteractionProfileMetadata::register_interaction_profile)>("register_interaction_profile")
		    .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &,const String &,const String &,const String &,OpenXRAction::ActionType)>(&OpenXRInteractionProfileMetadata::register_io_path)>("register_io_path")
;}