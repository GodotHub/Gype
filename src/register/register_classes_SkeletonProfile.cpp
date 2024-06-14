
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonProfile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonProfile>("SkeletonProfile")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<StringName (SkeletonProfile::*)()>(&SkeletonProfile::get_root_bone), static_cast<void (SkeletonProfile::*)(const StringName &)>(&SkeletonProfile::set_root_bone)>((new std::string("root_bone"))->c_str())
			.property<static_cast<StringName (SkeletonProfile::*)()>(&SkeletonProfile::get_scale_base_bone), static_cast<void (SkeletonProfile::*)(const StringName &)>(&SkeletonProfile::set_scale_base_bone)>((new std::string("scale_base_bone"))->c_str())
			.property<static_cast<int32_t (SkeletonProfile::*)()>(&SkeletonProfile::get_group_size), static_cast<void (SkeletonProfile::*)(int32_t)>(&SkeletonProfile::set_group_size)>((new std::string("group_size"))->c_str())
			.property<static_cast<int32_t (SkeletonProfile::*)()>(&SkeletonProfile::get_bone_size), static_cast<void (SkeletonProfile::*)(int32_t)>(&SkeletonProfile::set_bone_size)>((new std::string("bone_size"))->c_str())
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_group_name)>((new std::string("get_group_name"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_group_name)>((new std::string("set_group_name"))->c_str())
			.fun<static_cast<Ref<Texture2D> (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_texture)>((new std::string("get_texture"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const Ref<Texture2D> &)>(&SkeletonProfile::set_texture)>((new std::string("set_texture"))->c_str())
			.fun<static_cast<int32_t (SkeletonProfile::*)(const StringName &) const>(&SkeletonProfile::find_bone)>((new std::string("find_bone"))->c_str())
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_bone_name)>((new std::string("get_bone_name"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_bone_name)>((new std::string("set_bone_name"))->c_str())
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_bone_parent)>((new std::string("get_bone_parent"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_bone_parent)>((new std::string("set_bone_parent"))->c_str())
			.fun<static_cast<SkeletonProfile::TailDirection (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_tail_direction)>((new std::string("get_tail_direction"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, SkeletonProfile::TailDirection)>(&SkeletonProfile::set_tail_direction)>((new std::string("set_tail_direction"))->c_str())
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_bone_tail)>((new std::string("get_bone_tail"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_bone_tail)>((new std::string("set_bone_tail"))->c_str())
			.fun<static_cast<Transform3D (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_reference_pose)>((new std::string("get_reference_pose"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const Transform3D &)>(&SkeletonProfile::set_reference_pose)>((new std::string("set_reference_pose"))->c_str())
			.fun<static_cast<Vector2 (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_handle_offset)>((new std::string("get_handle_offset"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const Vector2 &)>(&SkeletonProfile::set_handle_offset)>((new std::string("set_handle_offset"))->c_str())
			.fun<static_cast<StringName (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::get_group)>((new std::string("get_group"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, const StringName &)>(&SkeletonProfile::set_group)>((new std::string("set_group"))->c_str())
			.fun<static_cast<bool (SkeletonProfile::*)(int32_t) const>(&SkeletonProfile::is_required)>((new std::string("is_required"))->c_str())
			.fun<static_cast<void (SkeletonProfile::*)(int32_t, bool)>(&SkeletonProfile::set_required)>((new std::string("set_required"))->c_str());
	qjs::Value _TailDirection = context->newObject();
	_TailDirection[(new std::string("TAIL_DIRECTION_AVERAGE_CHILDREN"))->c_str()] = SkeletonProfile::TailDirection::TAIL_DIRECTION_AVERAGE_CHILDREN;
	_TailDirection[(new std::string("TAIL_DIRECTION_SPECIFIC_CHILD"))->c_str()] = SkeletonProfile::TailDirection::TAIL_DIRECTION_SPECIFIC_CHILD;
	_TailDirection[(new std::string("TAIL_DIRECTION_END"))->c_str()] = SkeletonProfile::TailDirection::TAIL_DIRECTION_END;
	_module.add("TailDirection", std::move(_TailDirection));
}