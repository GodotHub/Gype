/**************************************************************************/
/*  area3d.cpp                                                            */
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

#include <godot_cpp/classes/area3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>

namespace godot {

void Area3D::set_gravity_space_override_mode(Area3D::SpaceOverride space_override_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_gravity_space_override_mode")._native_ptr(), 2311433571);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space_override_mode);
}

Area3D::SpaceOverride Area3D::get_gravity_space_override_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_gravity_space_override_mode")._native_ptr(), 958191869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Area3D::SpaceOverride(0));
	return (Area3D::SpaceOverride)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Area3D::set_gravity_is_point(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_gravity_is_point")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Area3D::is_gravity_a_point() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("is_gravity_a_point")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Area3D::set_gravity_point_unit_distance(double distance_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_gravity_point_unit_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_scale_encoded;
	PtrToArg<double>::encode(distance_scale, &distance_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_scale_encoded);
}

double Area3D::get_gravity_point_unit_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_gravity_point_unit_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_gravity_point_center(const Vector3 &center) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_gravity_point_center")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &center);
}

Vector3 Area3D::get_gravity_point_center() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_gravity_point_center")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void Area3D::set_gravity_direction(const Vector3 &direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_gravity_direction")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Vector3 Area3D::get_gravity_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_gravity_direction")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void Area3D::set_gravity(double gravity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_gravity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double gravity_encoded;
	PtrToArg<double>::encode(gravity, &gravity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gravity_encoded);
}

double Area3D::get_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_gravity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_linear_damp_space_override_mode(Area3D::SpaceOverride space_override_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_linear_damp_space_override_mode")._native_ptr(), 2311433571);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space_override_mode);
}

Area3D::SpaceOverride Area3D::get_linear_damp_space_override_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_linear_damp_space_override_mode")._native_ptr(), 958191869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Area3D::SpaceOverride(0));
	return (Area3D::SpaceOverride)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Area3D::set_angular_damp_space_override_mode(Area3D::SpaceOverride space_override_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_angular_damp_space_override_mode")._native_ptr(), 2311433571);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space_override_mode);
}

Area3D::SpaceOverride Area3D::get_angular_damp_space_override_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_angular_damp_space_override_mode")._native_ptr(), 958191869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Area3D::SpaceOverride(0));
	return (Area3D::SpaceOverride)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Area3D::set_angular_damp(double angular_damp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_angular_damp")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double angular_damp_encoded;
	PtrToArg<double>::encode(angular_damp, &angular_damp_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &angular_damp_encoded);
}

double Area3D::get_angular_damp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_angular_damp")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_linear_damp(double linear_damp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_linear_damp")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double linear_damp_encoded;
	PtrToArg<double>::encode(linear_damp, &linear_damp_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &linear_damp_encoded);
}

double Area3D::get_linear_damp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_linear_damp")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_priority(int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_priority")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

int32_t Area3D::get_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_priority")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Area3D::set_wind_force_magnitude(double wind_force_magnitude) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_wind_force_magnitude")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double wind_force_magnitude_encoded;
	PtrToArg<double>::encode(wind_force_magnitude, &wind_force_magnitude_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &wind_force_magnitude_encoded);
}

double Area3D::get_wind_force_magnitude() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_wind_force_magnitude")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_wind_attenuation_factor(double wind_attenuation_factor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_wind_attenuation_factor")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double wind_attenuation_factor_encoded;
	PtrToArg<double>::encode(wind_attenuation_factor, &wind_attenuation_factor_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &wind_attenuation_factor_encoded);
}

double Area3D::get_wind_attenuation_factor() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_wind_attenuation_factor")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_wind_source_path(const NodePath &wind_source_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_wind_source_path")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &wind_source_path);
}

NodePath Area3D::get_wind_source_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_wind_source_path")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void Area3D::set_monitorable(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_monitorable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Area3D::is_monitorable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("is_monitorable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Area3D::set_monitoring(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_monitoring")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Area3D::is_monitoring() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("is_monitoring")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

TypedArray<Node3D> Area3D::get_overlapping_bodies() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_overlapping_bodies")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Node3D>());
	return internal::_call_native_mb_ret<TypedArray<Node3D>>(_gde_method_bind, _owner);
}

TypedArray<Area3D> Area3D::get_overlapping_areas() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_overlapping_areas")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Area3D>());
	return internal::_call_native_mb_ret<TypedArray<Area3D>>(_gde_method_bind, _owner);
}

bool Area3D::has_overlapping_bodies() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("has_overlapping_bodies")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Area3D::has_overlapping_areas() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("has_overlapping_areas")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Area3D::overlaps_body(Node *body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("overlaps_body")._native_ptr(), 3093956946);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (body != nullptr ? &body->_owner : nullptr));
}

bool Area3D::overlaps_area(Node *area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("overlaps_area")._native_ptr(), 3093956946);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (area != nullptr ? &area->_owner : nullptr));
}

void Area3D::set_audio_bus_override(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_audio_bus_override")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Area3D::is_overriding_audio_bus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("is_overriding_audio_bus")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Area3D::set_audio_bus_name(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_audio_bus_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

StringName Area3D::get_audio_bus_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_audio_bus_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void Area3D::set_use_reverb_bus(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_use_reverb_bus")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Area3D::is_using_reverb_bus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("is_using_reverb_bus")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Area3D::set_reverb_bus_name(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_reverb_bus_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

StringName Area3D::get_reverb_bus_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_reverb_bus_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void Area3D::set_reverb_amount(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_reverb_amount")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Area3D::get_reverb_amount() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_reverb_amount")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Area3D::set_reverb_uniformity(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("set_reverb_uniformity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Area3D::get_reverb_uniformity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Area3D::get_class_static()._native_ptr(), StringName("get_reverb_uniformity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 