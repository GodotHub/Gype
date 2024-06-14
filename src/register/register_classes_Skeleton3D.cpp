
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Skeleton3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Skeleton3D>("Skeleton3D")
			.constructor<>()
			.base<Node3D>()
			.static_fun<&Skeleton3D::NOTIFICATION_UPDATE_SKELETON>((new std::string("NOTIFICATION_UPDATE_SKELETON"))->c_str())
			.property<static_cast<double (Skeleton3D::*)() const>(&Skeleton3D::get_motion_scale), static_cast<void (Skeleton3D::*)(double)>(&Skeleton3D::set_motion_scale)>((new std::string("motion_scale"))->c_str())
			.property<static_cast<bool (Skeleton3D::*)() const>(&Skeleton3D::is_show_rest_only), static_cast<void (Skeleton3D::*)(bool)>(&Skeleton3D::set_show_rest_only)>((new std::string("show_rest_only"))->c_str())
			.property<static_cast<Skeleton3D::ModifierCallbackModeProcess (Skeleton3D::*)() const>(&Skeleton3D::get_modifier_callback_mode_process), static_cast<void (Skeleton3D::*)(Skeleton3D::ModifierCallbackModeProcess)>(&Skeleton3D::set_modifier_callback_mode_process)>((new std::string("modifier_callback_mode_process"))->c_str())
			.fun<static_cast<int32_t (Skeleton3D::*)(const String &)>(&Skeleton3D::add_bone)>((new std::string("add_bone"))->c_str())
			.fun<static_cast<int32_t (Skeleton3D::*)(const String &) const>(&Skeleton3D::find_bone)>((new std::string("find_bone"))->c_str())
			.fun<static_cast<String (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_name)>((new std::string("get_bone_name"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const String &)>(&Skeleton3D::set_bone_name)>((new std::string("set_bone_name"))->c_str())
			.fun<static_cast<int32_t (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_parent)>((new std::string("get_bone_parent"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, int32_t)>(&Skeleton3D::set_bone_parent)>((new std::string("set_bone_parent"))->c_str())
			.fun<static_cast<int32_t (Skeleton3D::*)() const>(&Skeleton3D::get_bone_count)>((new std::string("get_bone_count"))->c_str())
			.fun<static_cast<uint64_t (Skeleton3D::*)() const>(&Skeleton3D::get_version)>((new std::string("get_version"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t)>(&Skeleton3D::unparent_bone_and_rest)>((new std::string("unparent_bone_and_rest"))->c_str())
			.fun<static_cast<PackedInt32Array (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_children)>((new std::string("get_bone_children"))->c_str())
			.fun<static_cast<PackedInt32Array (Skeleton3D::*)() const>(&Skeleton3D::get_parentless_bones)>((new std::string("get_parentless_bones"))->c_str())
			.fun<static_cast<Transform3D (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_rest)>((new std::string("get_bone_rest"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Transform3D &)>(&Skeleton3D::set_bone_rest)>((new std::string("set_bone_rest"))->c_str())
			.fun<static_cast<Transform3D (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_global_rest)>((new std::string("get_bone_global_rest"))->c_str())
			.fun<static_cast<Ref<Skin> (Skeleton3D::*)()>(&Skeleton3D::create_skin_from_rest_transforms)>((new std::string("create_skin_from_rest_transforms"))->c_str())
			.fun<static_cast<Ref<SkinReference> (Skeleton3D::*)(const Ref<Skin> &)>(&Skeleton3D::register_skin)>((new std::string("register_skin"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)()>(&Skeleton3D::localize_rests)>((new std::string("localize_rests"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)()>(&Skeleton3D::clear_bones)>((new std::string("clear_bones"))->c_str())
			.fun<static_cast<Transform3D (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_pose)>((new std::string("get_bone_pose"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Transform3D &)>(&Skeleton3D::set_bone_pose)>((new std::string("set_bone_pose"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Vector3 &)>(&Skeleton3D::set_bone_pose_position)>((new std::string("set_bone_pose_position"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Quaternion &)>(&Skeleton3D::set_bone_pose_rotation)>((new std::string("set_bone_pose_rotation"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Vector3 &)>(&Skeleton3D::set_bone_pose_scale)>((new std::string("set_bone_pose_scale"))->c_str())
			.fun<static_cast<Vector3 (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_pose_position)>((new std::string("get_bone_pose_position"))->c_str())
			.fun<static_cast<Quaternion (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_pose_rotation)>((new std::string("get_bone_pose_rotation"))->c_str())
			.fun<static_cast<Vector3 (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_pose_scale)>((new std::string("get_bone_pose_scale"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t)>(&Skeleton3D::reset_bone_pose)>((new std::string("reset_bone_pose"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)()>(&Skeleton3D::reset_bone_poses)>((new std::string("reset_bone_poses"))->c_str())
			.fun<static_cast<bool (Skeleton3D::*)(int32_t) const>(&Skeleton3D::is_bone_enabled)>((new std::string("is_bone_enabled"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, bool)>(&Skeleton3D::set_bone_enabled)>((new std::string("set_bone_enabled"))->c_str())
			.fun<static_cast<Transform3D (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_global_pose)>((new std::string("get_bone_global_pose"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Transform3D &)>(&Skeleton3D::set_bone_global_pose)>((new std::string("set_bone_global_pose"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)()>(&Skeleton3D::force_update_all_bone_transforms)>((new std::string("force_update_all_bone_transforms"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t)>(&Skeleton3D::force_update_bone_child_transform)>((new std::string("force_update_bone_child_transform"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)()>(&Skeleton3D::clear_bones_global_pose_override)>((new std::string("clear_bones_global_pose_override"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(int32_t, const Transform3D &, double, bool)>(&Skeleton3D::set_bone_global_pose_override)>((new std::string("set_bone_global_pose_override"))->c_str())
			.fun<static_cast<Transform3D (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_global_pose_override)>((new std::string("get_bone_global_pose_override"))->c_str())
			.fun<static_cast<Transform3D (Skeleton3D::*)(int32_t) const>(&Skeleton3D::get_bone_global_pose_no_override)>((new std::string("get_bone_global_pose_no_override"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(bool)>(&Skeleton3D::set_animate_physical_bones)>((new std::string("set_animate_physical_bones"))->c_str())
			.fun<static_cast<bool (Skeleton3D::*)() const>(&Skeleton3D::get_animate_physical_bones)>((new std::string("get_animate_physical_bones"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)()>(&Skeleton3D::physical_bones_stop_simulation)>((new std::string("physical_bones_stop_simulation"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(const TypedArray<StringName> &)>(&Skeleton3D::physical_bones_start_simulation)>((new std::string("physical_bones_start_simulation"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(const RID &)>(&Skeleton3D::physical_bones_add_collision_exception)>((new std::string("physical_bones_add_collision_exception"))->c_str())
			.fun<static_cast<void (Skeleton3D::*)(const RID &)>(&Skeleton3D::physical_bones_remove_collision_exception)>((new std::string("physical_bones_remove_collision_exception"))->c_str());
	qjs::Value _ModifierCallbackModeProcess = context->newObject();
	_ModifierCallbackModeProcess[(new std::string("MODIFIER_CALLBACK_MODE_PROCESS_PHYSICS"))->c_str()] = Skeleton3D::ModifierCallbackModeProcess::MODIFIER_CALLBACK_MODE_PROCESS_PHYSICS;
	_ModifierCallbackModeProcess[(new std::string("MODIFIER_CALLBACK_MODE_PROCESS_IDLE"))->c_str()] = Skeleton3D::ModifierCallbackModeProcess::MODIFIER_CALLBACK_MODE_PROCESS_IDLE;
	_module.add("ModifierCallbackModeProcess", std::move(_ModifierCallbackModeProcess));
}