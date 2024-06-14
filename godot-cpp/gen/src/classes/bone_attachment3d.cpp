/**************************************************************************/
/*  bone_attachment3d.cpp                                                 */
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

#include <godot_cpp/classes/bone_attachment3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void BoneAttachment3D::set_bone_name(const String &bone_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("set_bone_name")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_name);
}

String BoneAttachment3D::get_bone_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("get_bone_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void BoneAttachment3D::set_bone_idx(int32_t bone_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("set_bone_idx")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded);
}

int32_t BoneAttachment3D::get_bone_idx() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("get_bone_idx")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BoneAttachment3D::on_skeleton_update() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("on_skeleton_update")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void BoneAttachment3D::set_override_pose(bool override_pose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("set_override_pose")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t override_pose_encoded;
	PtrToArg<bool>::encode(override_pose, &override_pose_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &override_pose_encoded);
}

bool BoneAttachment3D::get_override_pose() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("get_override_pose")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BoneAttachment3D::set_use_external_skeleton(bool use_external_skeleton) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("set_use_external_skeleton")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_external_skeleton_encoded;
	PtrToArg<bool>::encode(use_external_skeleton, &use_external_skeleton_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_external_skeleton_encoded);
}

bool BoneAttachment3D::get_use_external_skeleton() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("get_use_external_skeleton")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BoneAttachment3D::set_external_skeleton(const NodePath &external_skeleton) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("set_external_skeleton")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &external_skeleton);
}

NodePath BoneAttachment3D::get_external_skeleton() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BoneAttachment3D::get_class_static()._native_ptr(), StringName("get_external_skeleton")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}


} // namespace godot 