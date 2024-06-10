#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonProfile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonProfile>("SkeletonProfile")
			.constructor<>()
			.property<&SkeletonProfile::get_root_bone, &SkeletonProfile::set_root_bone>("root_bone")
			.property<&SkeletonProfile::get_scale_base_bone, &SkeletonProfile::set_scale_base_bone>("scale_base_bone")
			.property<&SkeletonProfile::get_group_size, &SkeletonProfile::set_group_size>("group_size")
			.property<&SkeletonProfile::get_bone_size, &SkeletonProfile::set_bone_size>("bone_size")
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_group_name)>("get_group_name")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_group_name)>("set_group_name")
			.fun<static_cast<Ref<Texture2D> (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_texture)>("get_texture")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const Ref<Texture2D> &)>(&SkeletonProfile::set_texture)>("set_texture")
			.fun<static_cast<int32_t (SkeletonProfile::*)(const StringName &) const>(&SkeletonProfile::find_bone)>("find_bone")
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_bone_name)>("get_bone_name")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_bone_name)>("set_bone_name")
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_bone_parent)>("get_bone_parent")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_bone_parent)>("set_bone_parent")
			.fun<static_cast<SkeletonProfile::TailDirection (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_tail_direction)>("get_tail_direction")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, SkeletonProfile::TailDirection)>(&SkeletonProfile::set_tail_direction)>("set_tail_direction")
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_bone_tail)>("get_bone_tail")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_bone_tail)>("set_bone_tail")
			.fun<static_cast<Transform3D (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_reference_pose)>("get_reference_pose")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const Transform3D &)>(&SkeletonProfile::set_reference_pose)>("set_reference_pose")
			.fun<static_cast<Vector2 (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_handle_offset)>("get_handle_offset")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const Vector2 &)>(&SkeletonProfile::set_handle_offset)>("set_handle_offset")
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_group)>("get_group")
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_group)>("set_group");
}