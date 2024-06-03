#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_OpenXRInteractionProfileMetadata() {
    qjs::Context::Module &_module = _System;
    _module.class_<OpenXRInteractionProfileMetadata>("OpenXRInteractionProfileMetadata")
           .constructor<>()
		   .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &)>(&OpenXRInteractionProfileMetadata::register_profile_rename)>("register_profile_rename")
		   .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &,const String &)>(&OpenXRInteractionProfileMetadata::register_top_level_path)>("register_top_level_path")
		   .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &,const String &)>(&OpenXRInteractionProfileMetadata::register_interaction_profile)>("register_interaction_profile")
		   .fun<static_cast<void(OpenXRInteractionProfileMetadata::*)(const String &,const String &,const String &,const String &,const String &,OpenXRAction::ActionType)>(&OpenXRInteractionProfileMetadata::register_io_path)>("register_io_path")
;}