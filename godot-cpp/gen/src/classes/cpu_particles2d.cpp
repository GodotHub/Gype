/**************************************************************************/
/*  cpu_particles2d.cpp                                                   */
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

#include <godot_cpp/classes/cpu_particles2d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void CPUParticles2D::set_emitting(bool emitting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emitting")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t emitting_encoded;
	PtrToArg<bool>::encode(emitting, &emitting_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emitting_encoded);
}

void CPUParticles2D::set_amount(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_amount")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

void CPUParticles2D::set_lifetime(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_lifetime")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void CPUParticles2D::set_one_shot(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_one_shot")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void CPUParticles2D::set_pre_process_time(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_pre_process_time")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void CPUParticles2D::set_explosiveness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_explosiveness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void CPUParticles2D::set_randomness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_randomness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void CPUParticles2D::set_lifetime_randomness(double random) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_lifetime_randomness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double random_encoded;
	PtrToArg<double>::encode(random, &random_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &random_encoded);
}

void CPUParticles2D::set_use_local_coordinates(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_use_local_coordinates")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void CPUParticles2D::set_fixed_fps(int32_t fps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_fixed_fps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fps_encoded;
	PtrToArg<int64_t>::encode(fps, &fps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fps_encoded);
}

void CPUParticles2D::set_fractional_delta(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_fractional_delta")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void CPUParticles2D::set_speed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

bool CPUParticles2D::is_emitting() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("is_emitting")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t CPUParticles2D::get_amount() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_amount")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double CPUParticles2D::get_lifetime() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_lifetime")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool CPUParticles2D::get_one_shot() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_one_shot")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double CPUParticles2D::get_pre_process_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_pre_process_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double CPUParticles2D::get_explosiveness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_explosiveness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double CPUParticles2D::get_randomness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_randomness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double CPUParticles2D::get_lifetime_randomness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_lifetime_randomness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool CPUParticles2D::get_use_local_coordinates() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_use_local_coordinates")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t CPUParticles2D::get_fixed_fps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_fixed_fps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool CPUParticles2D::get_fractional_delta() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_fractional_delta")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double CPUParticles2D::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_draw_order(CPUParticles2D::DrawOrder order) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_draw_order")._native_ptr(), 4183193490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &order);
}

CPUParticles2D::DrawOrder CPUParticles2D::get_draw_order() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_draw_order")._native_ptr(), 1668655735);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CPUParticles2D::DrawOrder(0));
	return (CPUParticles2D::DrawOrder)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> CPUParticles2D::get_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void CPUParticles2D::restart() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("restart")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CPUParticles2D::set_direction(const Vector2 &direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_direction")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Vector2 CPUParticles2D::get_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_direction")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_spread(double spread) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_spread")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double spread_encoded;
	PtrToArg<double>::encode(spread, &spread_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &spread_encoded);
}

double CPUParticles2D::get_spread() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_spread")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_param_min(CPUParticles2D::Parameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_param_min")._native_ptr(), 3320615296);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double CPUParticles2D::get_param_min(CPUParticles2D::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_param_min")._native_ptr(), 2038050600);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void CPUParticles2D::set_param_max(CPUParticles2D::Parameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_param_max")._native_ptr(), 3320615296);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double CPUParticles2D::get_param_max(CPUParticles2D::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_param_max")._native_ptr(), 2038050600);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void CPUParticles2D::set_param_curve(CPUParticles2D::Parameter param, const Ref<Curve> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_param_curve")._native_ptr(), 2959350143);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Curve> CPUParticles2D::get_param_curve(CPUParticles2D::Parameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_param_curve")._native_ptr(), 2603158474);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner, &param));
}

void CPUParticles2D::set_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color CPUParticles2D::get_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_color_ramp(const Ref<Gradient> &ramp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_color_ramp")._native_ptr(), 2756054477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (ramp != nullptr ? &ramp->_owner : nullptr));
}

Ref<Gradient> CPUParticles2D::get_color_ramp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_color_ramp")._native_ptr(), 132272999);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Gradient>());
	return Ref<Gradient>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Gradient>(_gde_method_bind, _owner));
}

void CPUParticles2D::set_color_initial_ramp(const Ref<Gradient> &ramp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_color_initial_ramp")._native_ptr(), 2756054477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (ramp != nullptr ? &ramp->_owner : nullptr));
}

Ref<Gradient> CPUParticles2D::get_color_initial_ramp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_color_initial_ramp")._native_ptr(), 132272999);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Gradient>());
	return Ref<Gradient>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Gradient>(_gde_method_bind, _owner));
}

void CPUParticles2D::set_particle_flag(CPUParticles2D::ParticleFlags particle_flag, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_particle_flag")._native_ptr(), 4178137949);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particle_flag, &enable_encoded);
}

bool CPUParticles2D::get_particle_flag(CPUParticles2D::ParticleFlags particle_flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_particle_flag")._native_ptr(), 2829976507);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &particle_flag);
}

void CPUParticles2D::set_emission_shape(CPUParticles2D::EmissionShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emission_shape")._native_ptr(), 393763892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

CPUParticles2D::EmissionShape CPUParticles2D::get_emission_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_emission_shape")._native_ptr(), 1740246024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CPUParticles2D::EmissionShape(0));
	return (CPUParticles2D::EmissionShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_emission_sphere_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emission_sphere_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double CPUParticles2D::get_emission_sphere_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_emission_sphere_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_emission_rect_extents(const Vector2 &extents) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emission_rect_extents")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &extents);
}

Vector2 CPUParticles2D::get_emission_rect_extents() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_emission_rect_extents")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_emission_points(const PackedVector2Array &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emission_points")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &array);
}

PackedVector2Array CPUParticles2D::get_emission_points() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_emission_points")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_emission_normals(const PackedVector2Array &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emission_normals")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &array);
}

PackedVector2Array CPUParticles2D::get_emission_normals() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_emission_normals")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_emission_colors(const PackedColorArray &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_emission_colors")._native_ptr(), 3546319833);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &array);
}

PackedColorArray CPUParticles2D::get_emission_colors() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_emission_colors")._native_ptr(), 1392750486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedColorArray());
	return internal::_call_native_mb_ret<PackedColorArray>(_gde_method_bind, _owner);
}

Vector2 CPUParticles2D::get_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_gravity")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_gravity(const Vector2 &accel_vec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_gravity")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &accel_vec);
}

bool CPUParticles2D::get_split_scale() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_split_scale")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CPUParticles2D::set_split_scale(bool split_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_split_scale")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t split_scale_encoded;
	PtrToArg<bool>::encode(split_scale, &split_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &split_scale_encoded);
}

Ref<Curve> CPUParticles2D::get_scale_curve_x() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_scale_curve_x")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}

void CPUParticles2D::set_scale_curve_x(const Ref<Curve> &scale_curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_scale_curve_x")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scale_curve != nullptr ? &scale_curve->_owner : nullptr));
}

Ref<Curve> CPUParticles2D::get_scale_curve_y() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("get_scale_curve_y")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}

void CPUParticles2D::set_scale_curve_y(const Ref<Curve> &scale_curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("set_scale_curve_y")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scale_curve != nullptr ? &scale_curve->_owner : nullptr));
}

void CPUParticles2D::convert_from_particles(Node *particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CPUParticles2D::get_class_static()._native_ptr(), StringName("convert_from_particles")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (particles != nullptr ? &particles->_owner : nullptr));
}


} // namespace godot 