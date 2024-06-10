/**************************************************************************/
/*  skeleton3d.cpp                                                        */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/skeleton3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>

namespace godot {

int32_t Skeleton3D::add_bone(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("add_bone")._native_ptr(), 1597066294);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

int32_t Skeleton3D::find_bone(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("find_bone")._native_ptr(), 1321353865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

String Skeleton3D::get_bone_name(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_bone_name(int32_t bone_idx, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &name);
}

int32_t Skeleton3D::get_bone_parent(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_parent")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_bone_parent(int32_t bone_idx, int32_t parent_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_parent")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	int64_t parent_idx_encoded;
	PtrToArg<int64_t>::encode(parent_idx, &parent_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &parent_idx_encoded);
}

int32_t Skeleton3D::get_bone_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint64_t Skeleton3D::get_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_version")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

void Skeleton3D::unparent_bone_and_rest(int32_t bone_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("unparent_bone_and_rest")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded);
}

PackedInt32Array Skeleton3D::get_bone_children(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_children")._native_ptr(), 1706082319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &bone_idx_encoded);
}

PackedInt32Array Skeleton3D::get_parentless_bones() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_parentless_bones")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

Transform3D Skeleton3D::get_bone_rest(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_rest")._native_ptr(), 1965739696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_bone_rest(int32_t bone_idx, const Transform3D &rest) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_rest")._native_ptr(), 3616898986);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &rest);
}

Transform3D Skeleton3D::get_bone_global_rest(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_global_rest")._native_ptr(), 1965739696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &bone_idx_encoded);
}

Ref<Skin> Skeleton3D::create_skin_from_rest_transforms() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("create_skin_from_rest_transforms")._native_ptr(), 1032037385);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Skin>());
	return Ref<Skin>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Skin>(_gde_method_bind, _owner));
}

Ref<SkinReference> Skeleton3D::register_skin(const Ref<Skin> &skin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("register_skin")._native_ptr(), 3405789568);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<SkinReference>());
	return Ref<SkinReference>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<SkinReference>(_gde_method_bind, _owner, (skin != nullptr ? &skin->_owner : nullptr)));
}

void Skeleton3D::localize_rests() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("localize_rests")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Skeleton3D::clear_bones() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("clear_bones")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Transform3D Skeleton3D::get_bone_pose(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_pose")._native_ptr(), 1965739696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_bone_pose(int32_t bone_idx, const Transform3D &pose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_pose")._native_ptr(), 3616898986);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &pose);
}

void Skeleton3D::set_bone_pose_position(int32_t bone_idx, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_pose_position")._native_ptr(), 1530502735);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &position);
}

void Skeleton3D::set_bone_pose_rotation(int32_t bone_idx, const Quaternion &rotation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_pose_rotation")._native_ptr(), 2823819782);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &rotation);
}

void Skeleton3D::set_bone_pose_scale(int32_t bone_idx, const Vector3 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_pose_scale")._native_ptr(), 1530502735);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &scale);
}

Vector3 Skeleton3D::get_bone_pose_position(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_pose_position")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &bone_idx_encoded);
}

Quaternion Skeleton3D::get_bone_pose_rotation(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_pose_rotation")._native_ptr(), 476865136);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner, &bone_idx_encoded);
}

Vector3 Skeleton3D::get_bone_pose_scale(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_pose_scale")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::reset_bone_pose(int32_t bone_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("reset_bone_pose")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::reset_bone_poses() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("reset_bone_poses")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool Skeleton3D::is_bone_enabled(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("is_bone_enabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_bone_enabled(int32_t bone_idx, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_enabled")._native_ptr(), 972357352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &enabled_encoded);
}

Transform3D Skeleton3D::get_bone_global_pose(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_global_pose")._native_ptr(), 1965739696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_bone_global_pose(int32_t bone_idx, const Transform3D &pose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_global_pose")._native_ptr(), 3616898986);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &pose);
}

void Skeleton3D::force_update_all_bone_transforms() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("force_update_all_bone_transforms")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Skeleton3D::force_update_bone_child_transform(int32_t bone_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("force_update_bone_child_transform")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_motion_scale(double motion_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_motion_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double motion_scale_encoded;
	PtrToArg<double>::encode(motion_scale, &motion_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &motion_scale_encoded);
}

double Skeleton3D::get_motion_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_motion_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Skeleton3D::set_show_rest_only(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_show_rest_only")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Skeleton3D::is_show_rest_only() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("is_show_rest_only")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Skeleton3D::set_modifier_callback_mode_process(Skeleton3D::ModifierCallbackModeProcess mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_modifier_callback_mode_process")._native_ptr(), 3916362634);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Skeleton3D::ModifierCallbackModeProcess Skeleton3D::get_modifier_callback_mode_process() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_modifier_callback_mode_process")._native_ptr(), 997182536);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Skeleton3D::ModifierCallbackModeProcess(0));
	return (Skeleton3D::ModifierCallbackModeProcess)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Skeleton3D::clear_bones_global_pose_override() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("clear_bones_global_pose_override")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Skeleton3D::set_bone_global_pose_override(int32_t bone_idx, const Transform3D &pose, double amount, bool persistent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_bone_global_pose_override")._native_ptr(), 3483398371);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	int8_t persistent_encoded;
	PtrToArg<bool>::encode(persistent, &persistent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded, &pose, &amount_encoded, &persistent_encoded);
}

Transform3D Skeleton3D::get_bone_global_pose_override(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_global_pose_override")._native_ptr(), 1965739696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &bone_idx_encoded);
}

Transform3D Skeleton3D::get_bone_global_pose_no_override(int32_t bone_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_bone_global_pose_no_override")._native_ptr(), 1965739696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &bone_idx_encoded);
}

void Skeleton3D::set_animate_physical_bones(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("set_animate_physical_bones")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Skeleton3D::get_animate_physical_bones() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("get_animate_physical_bones")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Skeleton3D::physical_bones_stop_simulation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("physical_bones_stop_simulation")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Skeleton3D::physical_bones_start_simulation(const TypedArray<StringName> &bones) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("physical_bones_start_simulation")._native_ptr(), 2787316981);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bones);
}

void Skeleton3D::physical_bones_add_collision_exception(const RID &exception) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("physical_bones_add_collision_exception")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exception);
}

void Skeleton3D::physical_bones_remove_collision_exception(const RID &exception) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Skeleton3D::get_class_static()._native_ptr(), StringName("physical_bones_remove_collision_exception")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exception);
}


} // namespace godot 