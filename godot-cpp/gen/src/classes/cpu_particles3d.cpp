/**************************************************************************/
/*  cpu_particles3d.cpp                                                   */
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

#include <godot_cpp/classes/cpu_particles3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {


void CPUParticles3D::set_emitting(bool emitting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emitting")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t emitting_encoded;
	PtrToArg<bool>::encode(emitting, &emitting_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emitting_encoded);
}

void CPUParticles3D::set_amount(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_amount")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

void CPUParticles3D::set_lifetime(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_lifetime")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void CPUParticles3D::set_one_shot(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_one_shot")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void CPUParticles3D::set_pre_process_time(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_pre_process_time")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void CPUParticles3D::set_explosiveness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_explosiveness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void CPUParticles3D::set_randomness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_randomness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void CPUParticles3D::set_visibility_aabb(const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_visibility_aabb")._native_ptr(), 259215842);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &aabb);
}

void CPUParticles3D::set_lifetime_randomness(double random) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_lifetime_randomness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double random_encoded;
	PtrToArg<double>::encode(random, &random_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &random_encoded);
}

void CPUParticles3D::set_use_local_coordinates(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_use_local_coordinates")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void CPUParticles3D::set_fixed_fps(int32_t fps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_fixed_fps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fps_encoded;
	PtrToArg<int64_t>::encode(fps, &fps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fps_encoded);
}

void CPUParticles3D::set_fractional_delta(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_fractional_delta")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void CPUParticles3D::set_speed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

bool CPUParticles3D::is_emitting() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("is_emitting")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t CPUParticles3D::get_amount() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_amount")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double CPUParticles3D::get_lifetime() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_lifetime")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool CPUParticles3D::get_one_shot() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_one_shot")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double CPUParticles3D::get_pre_process_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_pre_process_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double CPUParticles3D::get_explosiveness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_explosiveness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double CPUParticles3D::get_randomness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_randomness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

AABB CPUParticles3D::get_visibility_aabb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_visibility_aabb")._native_ptr(), 1068685055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner);
}

double CPUParticles3D::get_lifetime_randomness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_lifetime_randomness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool CPUParticles3D::get_use_local_coordinates() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_use_local_coordinates")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t CPUParticles3D::get_fixed_fps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_fixed_fps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool CPUParticles3D::get_fractional_delta() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_fractional_delta")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double CPUParticles3D::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_draw_order(CPUParticles3D::DrawOrder order) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_draw_order")._native_ptr(), 1427401774);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &order);
}

CPUParticles3D::DrawOrder CPUParticles3D::get_draw_order() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_draw_order")._native_ptr(), 1321900776);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CPUParticles3D::DrawOrder(0));
	return (CPUParticles3D::DrawOrder)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_mesh(const Ref<Mesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_mesh")._native_ptr(), 194775623);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr));
}

Ref<Mesh> CPUParticles3D::get_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_mesh")._native_ptr(), 1808005922);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Mesh>());
	return Ref<Mesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Mesh>(_gde_method_bind, _owner));
}

void CPUParticles3D::restart() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("restart")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CPUParticles3D::set_direction(const Vector3 &direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_direction")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Vector3 CPUParticles3D::get_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_direction")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_spread(double degrees) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_spread")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double degrees_encoded;
	PtrToArg<double>::encode(degrees, &degrees_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &degrees_encoded);
}

double CPUParticles3D::get_spread() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_spread")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_flatness(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_flatness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double CPUParticles3D::get_flatness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_flatness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_param_min(CPUParticles3D::Parameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_param_min")._native_ptr(), 557936109);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double CPUParticles3D::get_param_min(CPUParticles3D::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_param_min")._native_ptr(), 597646162);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void CPUParticles3D::set_param_max(CPUParticles3D::Parameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_param_max")._native_ptr(), 557936109);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double CPUParticles3D::get_param_max(CPUParticles3D::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_param_max")._native_ptr(), 597646162);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void CPUParticles3D::set_param_curve(CPUParticles3D::Parameter param, const Ref<Curve> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_param_curve")._native_ptr(), 4044142537);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Curve> CPUParticles3D::get_param_curve(CPUParticles3D::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_param_curve")._native_ptr(), 4132790277);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner, &param));
}

void CPUParticles3D::set_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color CPUParticles3D::get_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_color_ramp(const Ref<Gradient> &ramp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_color_ramp")._native_ptr(), 2756054477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (ramp != nullptr ? &ramp->_owner : nullptr));
}

Ref<Gradient> CPUParticles3D::get_color_ramp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_color_ramp")._native_ptr(), 132272999);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Gradient>());
	return Ref<Gradient>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Gradient>(_gde_method_bind, _owner));
}

void CPUParticles3D::set_color_initial_ramp(const Ref<Gradient> &ramp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_color_initial_ramp")._native_ptr(), 2756054477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (ramp != nullptr ? &ramp->_owner : nullptr));
}

Ref<Gradient> CPUParticles3D::get_color_initial_ramp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_color_initial_ramp")._native_ptr(), 132272999);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Gradient>());
	return Ref<Gradient>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Gradient>(_gde_method_bind, _owner));
}

void CPUParticles3D::set_particle_flag(CPUParticles3D::ParticleFlags particle_flag, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_particle_flag")._native_ptr(), 3515406498);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particle_flag, &enable_encoded);
}

bool CPUParticles3D::get_particle_flag(CPUParticles3D::ParticleFlags particle_flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_particle_flag")._native_ptr(), 2845201987);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &particle_flag);
}

void CPUParticles3D::set_emission_shape(CPUParticles3D::EmissionShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_shape")._native_ptr(), 491823814);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

CPUParticles3D::EmissionShape CPUParticles3D::get_emission_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_shape")._native_ptr(), 2961454842);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CPUParticles3D::EmissionShape(0));
	return (CPUParticles3D::EmissionShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_sphere_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_sphere_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double CPUParticles3D::get_emission_sphere_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_sphere_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_box_extents(const Vector3 &extents) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_box_extents")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &extents);
}

Vector3 CPUParticles3D::get_emission_box_extents() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_box_extents")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_points(const PackedVector3Array &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_points")._native_ptr(), 334873810);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &array);
}

PackedVector3Array CPUParticles3D::get_emission_points() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_points")._native_ptr(), 497664490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_normals(const PackedVector3Array &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_normals")._native_ptr(), 334873810);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &array);
}

PackedVector3Array CPUParticles3D::get_emission_normals() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_normals")._native_ptr(), 497664490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_colors(const PackedColorArray &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_colors")._native_ptr(), 3546319833);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &array);
}

PackedColorArray CPUParticles3D::get_emission_colors() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_colors")._native_ptr(), 1392750486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedColorArray());
	return internal::_call_native_mb_ret<PackedColorArray>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_ring_axis(const Vector3 &axis) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_ring_axis")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &axis);
}

Vector3 CPUParticles3D::get_emission_ring_axis() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_ring_axis")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_ring_height(double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_ring_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

double CPUParticles3D::get_emission_ring_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_ring_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_ring_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_ring_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double CPUParticles3D::get_emission_ring_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_ring_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_emission_ring_inner_radius(double inner_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_emission_ring_inner_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double inner_radius_encoded;
	PtrToArg<double>::encode(inner_radius, &inner_radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &inner_radius_encoded);
}

double CPUParticles3D::get_emission_ring_inner_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_emission_ring_inner_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector3 CPUParticles3D::get_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_gravity")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_gravity(const Vector3 &accel_vec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_gravity")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &accel_vec);
}

bool CPUParticles3D::get_split_scale() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_split_scale")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CPUParticles3D::set_split_scale(bool split_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_split_scale")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t split_scale_encoded;
	PtrToArg<bool>::encode(split_scale, &split_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &split_scale_encoded);
}

Ref<Curve> CPUParticles3D::get_scale_curve_x() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_scale_curve_x")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}

void CPUParticles3D::set_scale_curve_x(const Ref<Curve> &scale_curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_scale_curve_x")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scale_curve != nullptr ? &scale_curve->_owner : nullptr));
}

Ref<Curve> CPUParticles3D::get_scale_curve_y() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_scale_curve_y")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}

void CPUParticles3D::set_scale_curve_y(const Ref<Curve> &scale_curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_scale_curve_y")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scale_curve != nullptr ? &scale_curve->_owner : nullptr));
}

Ref<Curve> CPUParticles3D::get_scale_curve_z() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("get_scale_curve_z")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}

void CPUParticles3D::set_scale_curve_z(const Ref<Curve> &scale_curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("set_scale_curve_z")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scale_curve != nullptr ? &scale_curve->_owner : nullptr));
}

void CPUParticles3D::convert_from_particles(Node *particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles3D::get_class_static()._native_ptr(), StringName("convert_from_particles")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (particles != nullptr ? &particles->_owner : nullptr));
}


} // namespace godot 