/**************************************************************************/
/*  particle_process_material.cpp                                         */
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

#include <godot_cpp/classes/particle_process_material.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void ParticleProcessMaterial::set_direction(const Vector3 &degrees) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_direction")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &degrees);
}

Vector3 ParticleProcessMaterial::get_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_direction")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_inherit_velocity_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_inherit_velocity_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double ParticleProcessMaterial::get_inherit_velocity_ratio() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_inherit_velocity_ratio")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_spread(double degrees) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_spread")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double degrees_encoded;
	PtrToArg<double>::encode(degrees, &degrees_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &degrees_encoded);
}

double ParticleProcessMaterial::get_spread() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_spread")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_flatness(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_flatness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double ParticleProcessMaterial::get_flatness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_flatness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_param(ParticleProcessMaterial::Parameter param, const Vector2 &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_param")._native_ptr(), 676779352);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value);
}

Vector2 ParticleProcessMaterial::get_param(ParticleProcessMaterial::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_param")._native_ptr(), 2623708480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &param);
}

void ParticleProcessMaterial::set_param_min(ParticleProcessMaterial::Parameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_param_min")._native_ptr(), 2295964248);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double ParticleProcessMaterial::get_param_min(ParticleProcessMaterial::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_param_min")._native_ptr(), 3903786503);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void ParticleProcessMaterial::set_param_max(ParticleProcessMaterial::Parameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_param_max")._native_ptr(), 2295964248);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double ParticleProcessMaterial::get_param_max(ParticleProcessMaterial::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_param_max")._native_ptr(), 3903786503);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void ParticleProcessMaterial::set_param_texture(ParticleProcessMaterial::Parameter param, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_param_texture")._native_ptr(), 526976089);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_param_texture(ParticleProcessMaterial::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_param_texture")._native_ptr(), 3489372978);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &param));
}

void ParticleProcessMaterial::set_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color ParticleProcessMaterial::get_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_color_ramp(const Ref<Texture2D> &ramp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_color_ramp")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (ramp != nullptr ? &ramp->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_color_ramp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_color_ramp")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_alpha_curve(const Ref<Texture2D> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_alpha_curve")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_alpha_curve() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_alpha_curve")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_emission_curve(const Ref<Texture2D> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_curve")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_emission_curve() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_curve")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_color_initial_ramp(const Ref<Texture2D> &ramp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_color_initial_ramp")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (ramp != nullptr ? &ramp->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_color_initial_ramp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_color_initial_ramp")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_velocity_limit_curve(const Ref<Texture2D> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_velocity_limit_curve")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_velocity_limit_curve() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_velocity_limit_curve")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_particle_flag(ParticleProcessMaterial::ParticleFlags particle_flag, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_particle_flag")._native_ptr(), 1711815571);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particle_flag, &enable_encoded);
}

bool ParticleProcessMaterial::get_particle_flag(ParticleProcessMaterial::ParticleFlags particle_flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_particle_flag")._native_ptr(), 3895316907);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &particle_flag);
}

void ParticleProcessMaterial::set_velocity_pivot(const Vector3 &pivot) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_velocity_pivot")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pivot);
}

Vector3 ParticleProcessMaterial::get_velocity_pivot() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_velocity_pivot")._native_ptr(), 3783033775);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_shape(ParticleProcessMaterial::EmissionShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_shape")._native_ptr(), 461501442);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

ParticleProcessMaterial::EmissionShape ParticleProcessMaterial::get_emission_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_shape")._native_ptr(), 3719733018);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ParticleProcessMaterial::EmissionShape(0));
	return (ParticleProcessMaterial::EmissionShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_sphere_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_sphere_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double ParticleProcessMaterial::get_emission_sphere_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_sphere_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_box_extents(const Vector3 &extents) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_box_extents")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &extents);
}

Vector3 ParticleProcessMaterial::get_emission_box_extents() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_box_extents")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_point_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_point_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_emission_point_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_point_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_emission_normal_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_normal_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_emission_normal_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_normal_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_emission_color_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_color_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> ParticleProcessMaterial::get_emission_color_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_color_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void ParticleProcessMaterial::set_emission_point_count(int32_t point_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_point_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_count_encoded;
	PtrToArg<int64_t>::encode(point_count, &point_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_count_encoded);
}

int32_t ParticleProcessMaterial::get_emission_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_ring_axis(const Vector3 &axis) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_ring_axis")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &axis);
}

Vector3 ParticleProcessMaterial::get_emission_ring_axis() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_ring_axis")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_ring_height(double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_ring_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

double ParticleProcessMaterial::get_emission_ring_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_ring_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_ring_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_ring_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double ParticleProcessMaterial::get_emission_ring_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_ring_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_ring_inner_radius(double inner_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_ring_inner_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double inner_radius_encoded;
	PtrToArg<double>::encode(inner_radius, &inner_radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &inner_radius_encoded);
}

double ParticleProcessMaterial::get_emission_ring_inner_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_ring_inner_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_shape_offset(const Vector3 &emission_shape_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_shape_offset")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emission_shape_offset);
}

Vector3 ParticleProcessMaterial::get_emission_shape_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_shape_offset")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_emission_shape_scale(const Vector3 &emission_shape_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_emission_shape_scale")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emission_shape_scale);
}

Vector3 ParticleProcessMaterial::get_emission_shape_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_emission_shape_scale")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

bool ParticleProcessMaterial::get_turbulence_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_turbulence_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_turbulence_enabled(bool turbulence_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_turbulence_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t turbulence_enabled_encoded;
	PtrToArg<bool>::encode(turbulence_enabled, &turbulence_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &turbulence_enabled_encoded);
}

double ParticleProcessMaterial::get_turbulence_noise_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_turbulence_noise_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_turbulence_noise_strength(double turbulence_noise_strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_turbulence_noise_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double turbulence_noise_strength_encoded;
	PtrToArg<double>::encode(turbulence_noise_strength, &turbulence_noise_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &turbulence_noise_strength_encoded);
}

double ParticleProcessMaterial::get_turbulence_noise_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_turbulence_noise_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_turbulence_noise_scale(double turbulence_noise_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_turbulence_noise_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double turbulence_noise_scale_encoded;
	PtrToArg<double>::encode(turbulence_noise_scale, &turbulence_noise_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &turbulence_noise_scale_encoded);
}

double ParticleProcessMaterial::get_turbulence_noise_speed_random() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_turbulence_noise_speed_random")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_turbulence_noise_speed_random(double turbulence_noise_speed_random) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_turbulence_noise_speed_random")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double turbulence_noise_speed_random_encoded;
	PtrToArg<double>::encode(turbulence_noise_speed_random, &turbulence_noise_speed_random_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &turbulence_noise_speed_random_encoded);
}

Vector3 ParticleProcessMaterial::get_turbulence_noise_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_turbulence_noise_speed")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_turbulence_noise_speed(const Vector3 &turbulence_noise_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_turbulence_noise_speed")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &turbulence_noise_speed);
}

Vector3 ParticleProcessMaterial::get_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_gravity")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_gravity(const Vector3 &accel_vec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_gravity")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &accel_vec);
}

void ParticleProcessMaterial::set_lifetime_randomness(double randomness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_lifetime_randomness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double randomness_encoded;
	PtrToArg<double>::encode(randomness, &randomness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &randomness_encoded);
}

double ParticleProcessMaterial::get_lifetime_randomness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_lifetime_randomness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

ParticleProcessMaterial::SubEmitterMode ParticleProcessMaterial::get_sub_emitter_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_sub_emitter_mode")._native_ptr(), 2399052877);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ParticleProcessMaterial::SubEmitterMode(0));
	return (ParticleProcessMaterial::SubEmitterMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_sub_emitter_mode(ParticleProcessMaterial::SubEmitterMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_sub_emitter_mode")._native_ptr(), 2161806672);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

double ParticleProcessMaterial::get_sub_emitter_frequency() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_sub_emitter_frequency")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_sub_emitter_frequency(double hz) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_sub_emitter_frequency")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double hz_encoded;
	PtrToArg<double>::encode(hz, &hz_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hz_encoded);
}

int32_t ParticleProcessMaterial::get_sub_emitter_amount_at_end() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_sub_emitter_amount_at_end")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_sub_emitter_amount_at_end(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_sub_emitter_amount_at_end")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t ParticleProcessMaterial::get_sub_emitter_amount_at_collision() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_sub_emitter_amount_at_collision")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_sub_emitter_amount_at_collision(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_sub_emitter_amount_at_collision")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

bool ParticleProcessMaterial::get_sub_emitter_keep_velocity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_sub_emitter_keep_velocity")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_sub_emitter_keep_velocity(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_sub_emitter_keep_velocity")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void ParticleProcessMaterial::set_attractor_interaction_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_attractor_interaction_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool ParticleProcessMaterial::is_attractor_interaction_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("is_attractor_interaction_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_collision_mode(ParticleProcessMaterial::CollisionMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_collision_mode")._native_ptr(), 653804659);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

ParticleProcessMaterial::CollisionMode ParticleProcessMaterial::get_collision_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_collision_mode")._native_ptr(), 139371864);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ParticleProcessMaterial::CollisionMode(0));
	return (ParticleProcessMaterial::CollisionMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_collision_use_scale(bool radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_collision_use_scale")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t radius_encoded;
	PtrToArg<bool>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

bool ParticleProcessMaterial::is_collision_using_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("is_collision_using_scale")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_collision_friction(double friction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_collision_friction")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double friction_encoded;
	PtrToArg<double>::encode(friction, &friction_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &friction_encoded);
}

double ParticleProcessMaterial::get_collision_friction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_collision_friction")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ParticleProcessMaterial::set_collision_bounce(double bounce) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("set_collision_bounce")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bounce_encoded;
	PtrToArg<double>::encode(bounce, &bounce_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bounce_encoded);
}

double ParticleProcessMaterial::get_collision_bounce() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ParticleProcessMaterial::get_class_static()._native_ptr(), StringName("get_collision_bounce")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 