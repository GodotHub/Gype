#include <godot_cpp/classes/skeleton_modification2d_physical_bones.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DPhysicalBones() {
	qjs::Context::Module &_module = _General;
	_module.class_<SkeletonModification2DPhysicalBones>("SkeletonModification2DPhysicalBones")
			.constructor<>()
			.property<&SkeletonModification2DPhysicalBones::get_physical_bone_chain_length, &SkeletonModification2DPhysicalBones::set_physical_bone_chain_length>("physical_bone_chain_length")
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)(int32_t, const NodePath &)>(&SkeletonModification2DPhysicalBones::set_physical_bone_node)>("set_physical_bone_node")
			.fun<static_cast<NodePath (SkeletonModification2DPhysicalBones::*)(int32_t) const>(&SkeletonModification2DPhysicalBones::get_physical_bone_node)>("get_physical_bone_node")
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)()>(&SkeletonModification2DPhysicalBones::fetch_physical_bones)>("fetch_physical_bones")
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)(const TypedArray<StringName> &)>(&SkeletonModification2DPhysicalBones::start_simulation)>("start_simulation")
			.fun<static_cast<void (SkeletonModification2DPhysicalBones::*)(const TypedArray<StringName> &)>(&SkeletonModification2DPhysicalBones::stop_simulation)>("stop_simulation");
}