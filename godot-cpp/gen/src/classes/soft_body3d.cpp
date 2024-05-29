/**************************************************************************/
/*  soft_body3d.cpp                                                       */
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

#include <godot_cpp/classes/soft_body3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>

namespace godot {

RID SoftBody3D::get_physics_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_physics_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void SoftBody3D::set_collision_mask(uint32_t collision_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_collision_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t collision_mask_encoded;
	PtrToArg<int64_t>::encode(collision_mask, &collision_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &collision_mask_encoded);
}

uint32_t SoftBody3D::get_collision_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_collision_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SoftBody3D::set_collision_layer(uint32_t collision_layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_collision_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t collision_layer_encoded;
	PtrToArg<int64_t>::encode(collision_layer, &collision_layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &collision_layer_encoded);
}

uint32_t SoftBody3D::get_collision_layer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_collision_layer")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SoftBody3D::set_collision_mask_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_collision_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool SoftBody3D::get_collision_mask_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_collision_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void SoftBody3D::set_collision_layer_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_collision_layer_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool SoftBody3D::get_collision_layer_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_collision_layer_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void SoftBody3D::set_parent_collision_ignore(const NodePath &parent_collision_ignore) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_parent_collision_ignore")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parent_collision_ignore);
}

NodePath SoftBody3D::get_parent_collision_ignore() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_parent_collision_ignore")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void SoftBody3D::set_disable_mode(SoftBody3D::DisableMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_disable_mode")._native_ptr(), 1104158384);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

SoftBody3D::DisableMode SoftBody3D::get_disable_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_disable_mode")._native_ptr(), 4135042476);
	CHECK_METHOD_BIND_RET(_gde_method_bind, SoftBody3D::DisableMode(0));
	return (SoftBody3D::DisableMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TypedArray<PhysicsBody3D> SoftBody3D::get_collision_exceptions() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_collision_exceptions")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PhysicsBody3D>());
	return internal::_call_native_mb_ret<TypedArray<PhysicsBody3D>>(_gde_method_bind, _owner);
}

void SoftBody3D::add_collision_exception_with(Node *body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("add_collision_exception_with")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (body != nullptr ? &body->_owner : nullptr));
}

void SoftBody3D::remove_collision_exception_with(Node *body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("remove_collision_exception_with")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (body != nullptr ? &body->_owner : nullptr));
}

void SoftBody3D::set_simulation_precision(int32_t simulation_precision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_simulation_precision")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t simulation_precision_encoded;
	PtrToArg<int64_t>::encode(simulation_precision, &simulation_precision_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &simulation_precision_encoded);
}

int32_t SoftBody3D::get_simulation_precision() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_simulation_precision")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SoftBody3D::set_total_mass(double mass) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_total_mass")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double mass_encoded;
	PtrToArg<double>::encode(mass, &mass_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mass_encoded);
}

double SoftBody3D::get_total_mass() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_total_mass")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SoftBody3D::set_linear_stiffness(double linear_stiffness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_linear_stiffness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double linear_stiffness_encoded;
	PtrToArg<double>::encode(linear_stiffness, &linear_stiffness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &linear_stiffness_encoded);
}

double SoftBody3D::get_linear_stiffness() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_linear_stiffness")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SoftBody3D::set_pressure_coefficient(double pressure_coefficient) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_pressure_coefficient")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pressure_coefficient_encoded;
	PtrToArg<double>::encode(pressure_coefficient, &pressure_coefficient_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pressure_coefficient_encoded);
}

double SoftBody3D::get_pressure_coefficient() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_pressure_coefficient")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SoftBody3D::set_damping_coefficient(double damping_coefficient) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_damping_coefficient")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double damping_coefficient_encoded;
	PtrToArg<double>::encode(damping_coefficient, &damping_coefficient_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &damping_coefficient_encoded);
}

double SoftBody3D::get_damping_coefficient() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_damping_coefficient")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SoftBody3D::set_drag_coefficient(double drag_coefficient) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_drag_coefficient")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double drag_coefficient_encoded;
	PtrToArg<double>::encode(drag_coefficient, &drag_coefficient_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &drag_coefficient_encoded);
}

double SoftBody3D::get_drag_coefficient() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_drag_coefficient")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector3 SoftBody3D::get_point_transform(int32_t point_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("get_point_transform")._native_ptr(), 871989493);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &point_index_encoded);
}

void SoftBody3D::set_point_pinned(int32_t point_index, bool pinned, const NodePath &attachment_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_point_pinned")._native_ptr(), 3814935226);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	int8_t pinned_encoded;
	PtrToArg<bool>::encode(pinned, &pinned_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_index_encoded, &pinned_encoded, &attachment_path);
}

bool SoftBody3D::is_point_pinned(int32_t point_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("is_point_pinned")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &point_index_encoded);
}

void SoftBody3D::set_ray_pickable(bool ray_pickable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("set_ray_pickable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t ray_pickable_encoded;
	PtrToArg<bool>::encode(ray_pickable, &ray_pickable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ray_pickable_encoded);
}

bool SoftBody3D::is_ray_pickable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SoftBody3D::get_class_static()._native_ptr(), StringName("is_ray_pickable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 