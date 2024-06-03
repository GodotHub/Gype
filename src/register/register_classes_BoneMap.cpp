#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/bone_map.hpp>

using namespace godot;

void register_classes_BoneMap() {
    qjs::Context::Module &_module = _General;
    _module.class_<BoneMap>("BoneMap")
           .constructor<>()
           .property<BoneMap::get_profile, BoneMap::set_profile>("profile")
		    .fun<static_cast<StringName(BoneMap::*)(const StringName &)const>(&BoneMap::get_skeleton_bone_name)>("get_skeleton_bone_name")
		    .fun<static_cast<void(BoneMap::*)(const StringName &,const StringName &)>(&BoneMap::set_skeleton_bone_name)>("set_skeleton_bone_name")
		    .fun<static_cast<StringName(BoneMap::*)(const StringName &)const>(&BoneMap::find_profile_bone_name)>("find_profile_bone_name")
;}