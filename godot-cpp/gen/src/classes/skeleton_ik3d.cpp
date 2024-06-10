/**************************************************************************/
/*  skeleton_ik3d.cpp                                                     */
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

#include <godot_cpp/classes/skeleton_ik3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/skeleton3d.hpp>

namespace godot {

void SkeletonIK3D::set_root_bone(const StringName &root_bone) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_root_bone")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &root_bone);
}

StringName SkeletonIK3D::get_root_bone() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_root_bone")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_tip_bone(const StringName &tip_bone) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_tip_bone")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tip_bone);
}

StringName SkeletonIK3D::get_tip_bone() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_tip_bone")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_target_transform(const Transform3D &target) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_target_transform")._native_ptr(), 2952846383);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &target);
}

Transform3D SkeletonIK3D::get_target_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_target_transform")._native_ptr(), 3229777777);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_target_node(const NodePath &node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_target_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &node);
}

NodePath SkeletonIK3D::get_target_node() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_target_node")._native_ptr(), 277076166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_override_tip_basis(bool override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_override_tip_basis")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t override_encoded;
	PtrToArg<bool>::encode(override, &override_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &override_encoded);
}

bool SkeletonIK3D::is_override_tip_basis() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("is_override_tip_basis")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_use_magnet(bool use) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_use_magnet")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_encoded;
	PtrToArg<bool>::encode(use, &use_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_encoded);
}

bool SkeletonIK3D::is_using_magnet() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("is_using_magnet")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_magnet_position(const Vector3 &local_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_magnet_position")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &local_position);
}

Vector3 SkeletonIK3D::get_magnet_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_magnet_position")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Skeleton3D *SkeletonIK3D::get_parent_skeleton() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_parent_skeleton")._native_ptr(), 1488626673);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Skeleton3D>(_gde_method_bind, _owner);
}

bool SkeletonIK3D::is_running() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("is_running")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_min_distance(double min_distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_min_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double min_distance_encoded;
	PtrToArg<double>::encode(min_distance, &min_distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_distance_encoded);
}

double SkeletonIK3D::get_min_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_min_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_max_iterations(int32_t iterations) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_max_iterations")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t iterations_encoded;
	PtrToArg<int64_t>::encode(iterations, &iterations_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &iterations_encoded);
}

int32_t SkeletonIK3D::get_max_iterations() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_max_iterations")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SkeletonIK3D::start(bool one_time) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("start")._native_ptr(), 107499316);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t one_time_encoded;
	PtrToArg<bool>::encode(one_time, &one_time_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &one_time_encoded);
}

void SkeletonIK3D::stop() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("stop")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void SkeletonIK3D::set_interpolation(double interpolation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("set_interpolation")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double interpolation_encoded;
	PtrToArg<double>::encode(interpolation, &interpolation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interpolation_encoded);
}

double SkeletonIK3D::get_interpolation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonIK3D::get_class_static()._native_ptr(), StringName("get_interpolation")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 