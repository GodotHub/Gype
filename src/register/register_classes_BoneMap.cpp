#include <godot_cpp/classes/bone_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BoneMap() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<BoneMap>("BoneMap")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Ref<SkeletonProfile>(BoneMap::*)()const>(&BoneMap::get_profile),static_cast<void(BoneMap::*)(const Ref<SkeletonProfile> &)>(&BoneMap::set_profile)>("profile")
            .fun<static_cast<StringName(BoneMap::*)(const StringName &)const>(&BoneMap::get_skeleton_bone_name)>("get_skeleton_bone_name")
            .fun<static_cast<void(BoneMap::*)(const StringName &,const StringName &)>(&BoneMap::set_skeleton_bone_name)>("set_skeleton_bone_name")
            .fun<static_cast<StringName(BoneMap::*)(const StringName &)const>(&BoneMap::find_profile_bone_name)>("find_profile_bone_name")
;}