/**************************************************************************/
/*  csg_polygon3d.cpp                                                     */
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

#include <godot_cpp/classes/csg_polygon3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/material.hpp>

namespace godot {

void CSGPolygon3D::set_polygon(const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_polygon")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &polygon);
}

PackedVector2Array CSGPolygon3D::get_polygon() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_polygon")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_mode(CSGPolygon3D::Mode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_mode")._native_ptr(), 3158377035);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

CSGPolygon3D::Mode CSGPolygon3D::get_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_mode")._native_ptr(), 1201612222);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CSGPolygon3D::Mode(0));
	return (CSGPolygon3D::Mode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_depth(double depth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_depth")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double depth_encoded;
	PtrToArg<double>::encode(depth, &depth_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &depth_encoded);
}

double CSGPolygon3D::get_depth() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_depth")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_spin_degrees(double degrees) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_spin_degrees")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double degrees_encoded;
	PtrToArg<double>::encode(degrees, &degrees_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &degrees_encoded);
}

double CSGPolygon3D::get_spin_degrees() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_spin_degrees")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_spin_sides(int32_t spin_sides) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_spin_sides")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t spin_sides_encoded;
	PtrToArg<int64_t>::encode(spin_sides, &spin_sides_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &spin_sides_encoded);
}

int32_t CSGPolygon3D::get_spin_sides() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_spin_sides")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_node(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath CSGPolygon3D::get_path_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_path_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_interval_type(CSGPolygon3D::PathIntervalType interval_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_interval_type")._native_ptr(), 3744240707);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interval_type);
}

CSGPolygon3D::PathIntervalType CSGPolygon3D::get_path_interval_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_path_interval_type")._native_ptr(), 3434618397);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CSGPolygon3D::PathIntervalType(0));
	return (CSGPolygon3D::PathIntervalType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_interval(double interval) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_interval")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double interval_encoded;
	PtrToArg<double>::encode(interval, &interval_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interval_encoded);
}

double CSGPolygon3D::get_path_interval() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_path_interval")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_simplify_angle(double degrees) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_simplify_angle")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double degrees_encoded;
	PtrToArg<double>::encode(degrees, &degrees_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &degrees_encoded);
}

double CSGPolygon3D::get_path_simplify_angle() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_path_simplify_angle")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_rotation(CSGPolygon3D::PathRotation path_rotation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_rotation")._native_ptr(), 1412947288);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path_rotation);
}

CSGPolygon3D::PathRotation CSGPolygon3D::get_path_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_path_rotation")._native_ptr(), 647219346);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CSGPolygon3D::PathRotation(0));
	return (CSGPolygon3D::PathRotation)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_local(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_local")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CSGPolygon3D::is_path_local() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("is_path_local")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_continuous_u(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_continuous_u")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CSGPolygon3D::is_path_continuous_u() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("is_path_continuous_u")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_u_distance(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_u_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double CSGPolygon3D::get_path_u_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_path_u_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_path_joined(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_path_joined")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CSGPolygon3D::is_path_joined() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("is_path_joined")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CSGPolygon3D::set_material(const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_material")._native_ptr(), 2757459619);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

Ref<Material> CSGPolygon3D::get_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_material")._native_ptr(), 5934680);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner));
}

void CSGPolygon3D::set_smooth_faces(bool smooth_faces) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("set_smooth_faces")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t smooth_faces_encoded;
	PtrToArg<bool>::encode(smooth_faces, &smooth_faces_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &smooth_faces_encoded);
}

bool CSGPolygon3D::get_smooth_faces() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CSGPolygon3D::get_class_static()._native_ptr(), StringName("get_smooth_faces")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 