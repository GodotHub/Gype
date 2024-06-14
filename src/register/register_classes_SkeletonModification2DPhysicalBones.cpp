
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_physical_bones.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DPhysicalBones() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DPhysicalBones>("SkeletonModification2DPhysicalBones")
			.constructor<>()
			.base<SkeletonModification2D>()
			.property<static_cast<int32_t (SkeletonModification2DPhysicalBones::*)()>(&SkeletonModification2DPhysicalBones::get_physical_bone_chain_length), static_cast<void (SkeletonModification2DPhysicalBones::*)(int32_t)>(&SkeletonModification2DPhysicalBones::set_physical_bone_chain_length)>((new std::string("physical_bone_chain_length"))->c_str())
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)(int32_t, const NodePath &)>(&SkeletonModification2DPhysicalBones::set_physical_bone_node)>((new std::string("set_physical_bone_node"))->c_str())
			.fun<static_cast<NodePath (SkeletonModification2DPhysicalBones::*)(int32_t) const>(&SkeletonModification2DPhysicalBones::get_physical_bone_node)>((new std::string("get_physical_bone_node"))->c_str())
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)()>(&SkeletonModification2DPhysicalBones::fetch_physical_bones)>((new std::string("fetch_physical_bones"))->c_str())
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)(const TypedArray<StringName> &)>(&SkeletonModification2DPhysicalBones::start_simulation)>((new std::string("start_simulation"))->c_str())
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)(const TypedArray<StringName> &)>(&SkeletonModification2DPhysicalBones::stop_simulation)>((new std::string("stop_simulation"))->c_str());
}