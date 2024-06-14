/**************************************************************************/
/*  environment.cpp                                                       */
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

#include <godot_cpp/classes/environment.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/texture.hpp>

namespace godot {


void Environment::set_background(Environment::BGMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_background")._native_ptr(), 4071623990);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Environment::BGMode Environment::get_background() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_background")._native_ptr(), 1843210413);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::BGMode(0));
	return (Environment::BGMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_sky(const Ref<Sky> &sky) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sky")._native_ptr(), 3336722921);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (sky != nullptr ? &sky->_owner : nullptr));
}

Ref<Sky> Environment::get_sky() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sky")._native_ptr(), 1177136966);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Sky>());
	return Ref<Sky>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Sky>(_gde_method_bind, _owner));
}

void Environment::set_sky_custom_fov(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sky_custom_fov")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double Environment::get_sky_custom_fov() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sky_custom_fov")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sky_rotation(const Vector3 &euler_radians) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sky_rotation")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &euler_radians);
}

Vector3 Environment::get_sky_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sky_rotation")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void Environment::set_bg_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_bg_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Environment::get_bg_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_bg_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Environment::set_bg_energy_multiplier(double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_bg_energy_multiplier")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &energy_encoded);
}

double Environment::get_bg_energy_multiplier() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_bg_energy_multiplier")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_bg_intensity(double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_bg_intensity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &energy_encoded);
}

double Environment::get_bg_intensity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_bg_intensity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_canvas_max_layer(int32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_canvas_max_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded);
}

int32_t Environment::get_canvas_max_layer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_canvas_max_layer")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_camera_feed_id(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_camera_feed_id")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded);
}

int32_t Environment::get_camera_feed_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_camera_feed_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_ambient_light_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ambient_light_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Environment::get_ambient_light_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ambient_light_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Environment::set_ambient_source(Environment::AmbientSource source) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ambient_source")._native_ptr(), 2607780160);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source);
}

Environment::AmbientSource Environment::get_ambient_source() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ambient_source")._native_ptr(), 67453933);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::AmbientSource(0));
	return (Environment::AmbientSource)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_ambient_light_energy(double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ambient_light_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &energy_encoded);
}

double Environment::get_ambient_light_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ambient_light_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ambient_light_sky_contribution(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ambient_light_sky_contribution")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double Environment::get_ambient_light_sky_contribution() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ambient_light_sky_contribution")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_reflection_source(Environment::ReflectionSource source) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_reflection_source")._native_ptr(), 299673197);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source);
}

Environment::ReflectionSource Environment::get_reflection_source() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_reflection_source")._native_ptr(), 777700713);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::ReflectionSource(0));
	return (Environment::ReflectionSource)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_tonemapper(Environment::ToneMapper mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_tonemapper")._native_ptr(), 1509116664);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Environment::ToneMapper Environment::get_tonemapper() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_tonemapper")._native_ptr(), 2908408137);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::ToneMapper(0));
	return (Environment::ToneMapper)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_tonemap_exposure(double exposure) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_tonemap_exposure")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double exposure_encoded;
	PtrToArg<double>::encode(exposure, &exposure_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exposure_encoded);
}

double Environment::get_tonemap_exposure() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_tonemap_exposure")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_tonemap_white(double white) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_tonemap_white")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double white_encoded;
	PtrToArg<double>::encode(white, &white_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &white_encoded);
}

double Environment::get_tonemap_white() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_tonemap_white")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssr_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssr_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_ssr_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_ssr_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_ssr_max_steps(int32_t max_steps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssr_max_steps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_steps_encoded;
	PtrToArg<int64_t>::encode(max_steps, &max_steps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_steps_encoded);
}

int32_t Environment::get_ssr_max_steps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssr_max_steps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_ssr_fade_in(double fade_in) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssr_fade_in")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fade_in_encoded;
	PtrToArg<double>::encode(fade_in, &fade_in_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fade_in_encoded);
}

double Environment::get_ssr_fade_in() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssr_fade_in")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssr_fade_out(double fade_out) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssr_fade_out")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fade_out_encoded;
	PtrToArg<double>::encode(fade_out, &fade_out_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fade_out_encoded);
}

double Environment::get_ssr_fade_out() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssr_fade_out")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssr_depth_tolerance(double depth_tolerance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssr_depth_tolerance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double depth_tolerance_encoded;
	PtrToArg<double>::encode(depth_tolerance, &depth_tolerance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &depth_tolerance_encoded);
}

double Environment::get_ssr_depth_tolerance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssr_depth_tolerance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_ssao_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_ssao_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_ssao_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double Environment::get_ssao_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_intensity(double intensity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_intensity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &intensity_encoded);
}

double Environment::get_ssao_intensity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_intensity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_power(double power) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_power")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double power_encoded;
	PtrToArg<double>::encode(power, &power_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &power_encoded);
}

double Environment::get_ssao_power() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_power")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_detail(double detail) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_detail")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double detail_encoded;
	PtrToArg<double>::encode(detail, &detail_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_encoded);
}

double Environment::get_ssao_detail() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_detail")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_horizon(double horizon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_horizon")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double horizon_encoded;
	PtrToArg<double>::encode(horizon, &horizon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &horizon_encoded);
}

double Environment::get_ssao_horizon() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_horizon")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_sharpness(double sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_sharpness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sharpness_encoded;
	PtrToArg<double>::encode(sharpness, &sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sharpness_encoded);
}

double Environment::get_ssao_sharpness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_sharpness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_direct_light_affect(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_direct_light_affect")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Environment::get_ssao_direct_light_affect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_direct_light_affect")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssao_ao_channel_affect(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssao_ao_channel_affect")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Environment::get_ssao_ao_channel_affect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssao_ao_channel_affect")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssil_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssil_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_ssil_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_ssil_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_ssil_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssil_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double Environment::get_ssil_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssil_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssil_intensity(double intensity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssil_intensity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &intensity_encoded);
}

double Environment::get_ssil_intensity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssil_intensity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssil_sharpness(double sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssil_sharpness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sharpness_encoded;
	PtrToArg<double>::encode(sharpness, &sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sharpness_encoded);
}

double Environment::get_ssil_sharpness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssil_sharpness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_ssil_normal_rejection(double normal_rejection) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_ssil_normal_rejection")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double normal_rejection_encoded;
	PtrToArg<double>::encode(normal_rejection, &normal_rejection_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &normal_rejection_encoded);
}

double Environment::get_ssil_normal_rejection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_ssil_normal_rejection")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_sdfgi_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_sdfgi_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_cascades(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_cascades")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t Environment::get_sdfgi_cascades() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_cascades")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_min_cell_size(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_min_cell_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

double Environment::get_sdfgi_min_cell_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_min_cell_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_max_distance(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_max_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Environment::get_sdfgi_max_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_max_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_cascade0_distance(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_cascade0_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Environment::get_sdfgi_cascade0_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_cascade0_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_y_scale(Environment::SDFGIYScale scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_y_scale")._native_ptr(), 3608608372);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale);
}

Environment::SDFGIYScale Environment::get_sdfgi_y_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_y_scale")._native_ptr(), 2568002245);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::SDFGIYScale(0));
	return (Environment::SDFGIYScale)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_use_occlusion(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_use_occlusion")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Environment::is_sdfgi_using_occlusion() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_sdfgi_using_occlusion")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_bounce_feedback(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_bounce_feedback")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Environment::get_sdfgi_bounce_feedback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_bounce_feedback")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_read_sky_light(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_read_sky_light")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Environment::is_sdfgi_reading_sky_light() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_sdfgi_reading_sky_light")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_energy(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Environment::get_sdfgi_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_normal_bias(double bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_normal_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bias_encoded;
	PtrToArg<double>::encode(bias, &bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bias_encoded);
}

double Environment::get_sdfgi_normal_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_normal_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_sdfgi_probe_bias(double bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_sdfgi_probe_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bias_encoded;
	PtrToArg<double>::encode(bias, &bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bias_encoded);
}

double Environment::get_sdfgi_probe_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_sdfgi_probe_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_glow_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_glow_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_glow_level(int32_t idx, double intensity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_level")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &intensity_encoded);
}

double Environment::get_glow_level(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_level")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &idx_encoded);
}

void Environment::set_glow_normalized(bool normalize) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_normalized")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t normalize_encoded;
	PtrToArg<bool>::encode(normalize, &normalize_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &normalize_encoded);
}

bool Environment::is_glow_normalized() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_glow_normalized")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_glow_intensity(double intensity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_intensity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &intensity_encoded);
}

double Environment::get_glow_intensity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_intensity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_strength(double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &strength_encoded);
}

double Environment::get_glow_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_mix(double mix) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_mix")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double mix_encoded;
	PtrToArg<double>::encode(mix, &mix_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mix_encoded);
}

double Environment::get_glow_mix() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_mix")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_bloom(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_bloom")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Environment::get_glow_bloom() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_bloom")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_blend_mode(Environment::GlowBlendMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_blend_mode")._native_ptr(), 2561587761);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Environment::GlowBlendMode Environment::get_glow_blend_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_blend_mode")._native_ptr(), 1529667332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::GlowBlendMode(0));
	return (Environment::GlowBlendMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_glow_hdr_bleed_threshold(double threshold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_hdr_bleed_threshold")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double threshold_encoded;
	PtrToArg<double>::encode(threshold, &threshold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &threshold_encoded);
}

double Environment::get_glow_hdr_bleed_threshold() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_hdr_bleed_threshold")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_hdr_bleed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_hdr_bleed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double Environment::get_glow_hdr_bleed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_hdr_bleed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_hdr_luminance_cap(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_hdr_luminance_cap")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double Environment::get_glow_hdr_luminance_cap() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_hdr_luminance_cap")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_map_strength(double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_map_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &strength_encoded);
}

double Environment::get_glow_map_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_map_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_glow_map(const Ref<Texture> &mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_glow_map")._native_ptr(), 1790811099);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mode != nullptr ? &mode->_owner : nullptr));
}

Ref<Texture> Environment::get_glow_map() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_glow_map")._native_ptr(), 4037048985);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture>());
	return Ref<Texture>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture>(_gde_method_bind, _owner));
}

void Environment::set_fog_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_fog_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_fog_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_fog_mode(Environment::FogMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_mode")._native_ptr(), 3059806579);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Environment::FogMode Environment::get_fog_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_mode")._native_ptr(), 2456062483);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Environment::FogMode(0));
	return (Environment::FogMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Environment::set_fog_light_color(const Color &light_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_light_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light_color);
}

Color Environment::get_fog_light_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_light_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Environment::set_fog_light_energy(double light_energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_light_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double light_energy_encoded;
	PtrToArg<double>::encode(light_energy, &light_energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light_energy_encoded);
}

double Environment::get_fog_light_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_light_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_sun_scatter(double sun_scatter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_sun_scatter")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sun_scatter_encoded;
	PtrToArg<double>::encode(sun_scatter, &sun_scatter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sun_scatter_encoded);
}

double Environment::get_fog_sun_scatter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_sun_scatter")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_density(double density) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_density")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double density_encoded;
	PtrToArg<double>::encode(density, &density_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &density_encoded);
}

double Environment::get_fog_density() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_density")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_height(double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

double Environment::get_fog_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_height_density(double height_density) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_height_density")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_density_encoded;
	PtrToArg<double>::encode(height_density, &height_density_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_density_encoded);
}

double Environment::get_fog_height_density() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_height_density")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_aerial_perspective(double aerial_perspective) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_aerial_perspective")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double aerial_perspective_encoded;
	PtrToArg<double>::encode(aerial_perspective, &aerial_perspective_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &aerial_perspective_encoded);
}

double Environment::get_fog_aerial_perspective() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_aerial_perspective")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_sky_affect(double sky_affect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_sky_affect")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sky_affect_encoded;
	PtrToArg<double>::encode(sky_affect, &sky_affect_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sky_affect_encoded);
}

double Environment::get_fog_sky_affect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_sky_affect")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_depth_curve(double curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_depth_curve")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double curve_encoded;
	PtrToArg<double>::encode(curve, &curve_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &curve_encoded);
}

double Environment::get_fog_depth_curve() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_depth_curve")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_depth_begin(double begin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_depth_begin")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double begin_encoded;
	PtrToArg<double>::encode(begin, &begin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &begin_encoded);
}

double Environment::get_fog_depth_begin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_depth_begin")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_fog_depth_end(double end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_fog_depth_end")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double end_encoded;
	PtrToArg<double>::encode(end, &end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &end_encoded);
}

double Environment::get_fog_depth_end() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_fog_depth_end")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_volumetric_fog_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_volumetric_fog_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_emission(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_emission")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Environment::get_volumetric_fog_emission() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_emission")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_albedo(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_albedo")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Environment::get_volumetric_fog_albedo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_albedo")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_density(double density) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_density")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double density_encoded;
	PtrToArg<double>::encode(density, &density_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &density_encoded);
}

double Environment::get_volumetric_fog_density() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_density")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_emission_energy(double begin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_emission_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double begin_encoded;
	PtrToArg<double>::encode(begin, &begin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &begin_encoded);
}

double Environment::get_volumetric_fog_emission_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_emission_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_anisotropy(double anisotropy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_anisotropy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double anisotropy_encoded;
	PtrToArg<double>::encode(anisotropy, &anisotropy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anisotropy_encoded);
}

double Environment::get_volumetric_fog_anisotropy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_anisotropy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_length(double length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double length_encoded;
	PtrToArg<double>::encode(length, &length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &length_encoded);
}

double Environment::get_volumetric_fog_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_detail_spread(double detail_spread) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_detail_spread")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double detail_spread_encoded;
	PtrToArg<double>::encode(detail_spread, &detail_spread_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_spread_encoded);
}

double Environment::get_volumetric_fog_detail_spread() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_detail_spread")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_gi_inject(double gi_inject) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_gi_inject")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double gi_inject_encoded;
	PtrToArg<double>::encode(gi_inject, &gi_inject_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gi_inject_encoded);
}

double Environment::get_volumetric_fog_gi_inject() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_gi_inject")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_ambient_inject(double enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_ambient_inject")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double enabled_encoded;
	PtrToArg<double>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

double Environment::get_volumetric_fog_ambient_inject() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_ambient_inject")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_sky_affect(double sky_affect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_sky_affect")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sky_affect_encoded;
	PtrToArg<double>::encode(sky_affect, &sky_affect_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sky_affect_encoded);
}

double Environment::get_volumetric_fog_sky_affect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_sky_affect")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_temporal_reprojection_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_temporal_reprojection_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_volumetric_fog_temporal_reprojection_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_volumetric_fog_temporal_reprojection_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_volumetric_fog_temporal_reprojection_amount(double temporal_reprojection_amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_volumetric_fog_temporal_reprojection_amount")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double temporal_reprojection_amount_encoded;
	PtrToArg<double>::encode(temporal_reprojection_amount, &temporal_reprojection_amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &temporal_reprojection_amount_encoded);
}

double Environment::get_volumetric_fog_temporal_reprojection_amount() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_volumetric_fog_temporal_reprojection_amount")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_adjustment_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_adjustment_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Environment::is_adjustment_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("is_adjustment_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Environment::set_adjustment_brightness(double brightness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_adjustment_brightness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double brightness_encoded;
	PtrToArg<double>::encode(brightness, &brightness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &brightness_encoded);
}

double Environment::get_adjustment_brightness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_adjustment_brightness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_adjustment_contrast(double contrast) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_adjustment_contrast")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double contrast_encoded;
	PtrToArg<double>::encode(contrast, &contrast_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &contrast_encoded);
}

double Environment::get_adjustment_contrast() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_adjustment_contrast")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_adjustment_saturation(double saturation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_adjustment_saturation")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double saturation_encoded;
	PtrToArg<double>::encode(saturation, &saturation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &saturation_encoded);
}

double Environment::get_adjustment_saturation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_adjustment_saturation")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Environment::set_adjustment_color_correction(const Ref<Texture> &color_correction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("set_adjustment_color_correction")._native_ptr(), 1790811099);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (color_correction != nullptr ? &color_correction->_owner : nullptr));
}

Ref<Texture> Environment::get_adjustment_color_correction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Environment::get_class_static()._native_ptr(), StringName("get_adjustment_color_correction")._native_ptr(), 4037048985);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture>());
	return Ref<Texture>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture>(_gde_method_bind, _owner));
}


} // namespace godot 