/**************************************************************************/
/*  fast_noise_lite.cpp                                                   */
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

#include <godot_cpp/classes/fast_noise_lite.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void FastNoiseLite::set_noise_type(FastNoiseLite::NoiseType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_noise_type")._native_ptr(), 2624461392);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

FastNoiseLite::NoiseType FastNoiseLite::get_noise_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_noise_type")._native_ptr(), 1458108610);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FastNoiseLite::NoiseType(0));
	return (FastNoiseLite::NoiseType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_seed(int32_t seed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_seed")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t seed_encoded;
	PtrToArg<int64_t>::encode(seed, &seed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &seed_encoded);
}

int32_t FastNoiseLite::get_seed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_seed")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_frequency(double freq) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_frequency")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double freq_encoded;
	PtrToArg<double>::encode(freq, &freq_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &freq_encoded);
}

double FastNoiseLite::get_frequency() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_frequency")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_offset(const Vector3 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector3 FastNoiseLite::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_fractal_type(FastNoiseLite::FractalType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_fractal_type")._native_ptr(), 4132731174);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

FastNoiseLite::FractalType FastNoiseLite::get_fractal_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_fractal_type")._native_ptr(), 1036889279);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FastNoiseLite::FractalType(0));
	return (FastNoiseLite::FractalType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_fractal_octaves(int32_t octave_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_fractal_octaves")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t octave_count_encoded;
	PtrToArg<int64_t>::encode(octave_count, &octave_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &octave_count_encoded);
}

int32_t FastNoiseLite::get_fractal_octaves() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_fractal_octaves")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_fractal_lacunarity(double lacunarity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_fractal_lacunarity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double lacunarity_encoded;
	PtrToArg<double>::encode(lacunarity, &lacunarity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lacunarity_encoded);
}

double FastNoiseLite::get_fractal_lacunarity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_fractal_lacunarity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_fractal_gain(double gain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_fractal_gain")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double gain_encoded;
	PtrToArg<double>::encode(gain, &gain_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gain_encoded);
}

double FastNoiseLite::get_fractal_gain() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_fractal_gain")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_fractal_weighted_strength(double weighted_strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_fractal_weighted_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double weighted_strength_encoded;
	PtrToArg<double>::encode(weighted_strength, &weighted_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &weighted_strength_encoded);
}

double FastNoiseLite::get_fractal_weighted_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_fractal_weighted_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_fractal_ping_pong_strength(double ping_pong_strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_fractal_ping_pong_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ping_pong_strength_encoded;
	PtrToArg<double>::encode(ping_pong_strength, &ping_pong_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ping_pong_strength_encoded);
}

double FastNoiseLite::get_fractal_ping_pong_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_fractal_ping_pong_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_cellular_distance_function(FastNoiseLite::CellularDistanceFunction func) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_cellular_distance_function")._native_ptr(), 1006013267);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &func);
}

FastNoiseLite::CellularDistanceFunction FastNoiseLite::get_cellular_distance_function() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_cellular_distance_function")._native_ptr(), 2021274088);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FastNoiseLite::CellularDistanceFunction(0));
	return (FastNoiseLite::CellularDistanceFunction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_cellular_jitter(double jitter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_cellular_jitter")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double jitter_encoded;
	PtrToArg<double>::encode(jitter, &jitter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &jitter_encoded);
}

double FastNoiseLite::get_cellular_jitter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_cellular_jitter")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_cellular_return_type(FastNoiseLite::CellularReturnType ret) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_cellular_return_type")._native_ptr(), 2654169698);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ret);
}

FastNoiseLite::CellularReturnType FastNoiseLite::get_cellular_return_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_cellular_return_type")._native_ptr(), 3699796343);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FastNoiseLite::CellularReturnType(0));
	return (FastNoiseLite::CellularReturnType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_enabled(bool domain_warp_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t domain_warp_enabled_encoded;
	PtrToArg<bool>::encode(domain_warp_enabled, &domain_warp_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_enabled_encoded);
}

bool FastNoiseLite::is_domain_warp_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("is_domain_warp_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_type(FastNoiseLite::DomainWarpType domain_warp_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_type")._native_ptr(), 3629692980);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_type);
}

FastNoiseLite::DomainWarpType FastNoiseLite::get_domain_warp_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_type")._native_ptr(), 2980162020);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FastNoiseLite::DomainWarpType(0));
	return (FastNoiseLite::DomainWarpType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_amplitude(double domain_warp_amplitude) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_amplitude")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double domain_warp_amplitude_encoded;
	PtrToArg<double>::encode(domain_warp_amplitude, &domain_warp_amplitude_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_amplitude_encoded);
}

double FastNoiseLite::get_domain_warp_amplitude() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_amplitude")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_frequency(double domain_warp_frequency) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_frequency")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double domain_warp_frequency_encoded;
	PtrToArg<double>::encode(domain_warp_frequency, &domain_warp_frequency_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_frequency_encoded);
}

double FastNoiseLite::get_domain_warp_frequency() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_frequency")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_fractal_type(FastNoiseLite::DomainWarpFractalType domain_warp_fractal_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_fractal_type")._native_ptr(), 3999408287);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_fractal_type);
}

FastNoiseLite::DomainWarpFractalType FastNoiseLite::get_domain_warp_fractal_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_fractal_type")._native_ptr(), 407716934);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FastNoiseLite::DomainWarpFractalType(0));
	return (FastNoiseLite::DomainWarpFractalType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_fractal_octaves(int32_t domain_warp_octave_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_fractal_octaves")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t domain_warp_octave_count_encoded;
	PtrToArg<int64_t>::encode(domain_warp_octave_count, &domain_warp_octave_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_octave_count_encoded);
}

int32_t FastNoiseLite::get_domain_warp_fractal_octaves() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_fractal_octaves")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_fractal_lacunarity(double domain_warp_lacunarity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_fractal_lacunarity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double domain_warp_lacunarity_encoded;
	PtrToArg<double>::encode(domain_warp_lacunarity, &domain_warp_lacunarity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_lacunarity_encoded);
}

double FastNoiseLite::get_domain_warp_fractal_lacunarity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_fractal_lacunarity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FastNoiseLite::set_domain_warp_fractal_gain(double domain_warp_gain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("set_domain_warp_fractal_gain")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double domain_warp_gain_encoded;
	PtrToArg<double>::encode(domain_warp_gain, &domain_warp_gain_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &domain_warp_gain_encoded);
}

double FastNoiseLite::get_domain_warp_fractal_gain() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FastNoiseLite::get_class_static()._native_ptr(), StringName("get_domain_warp_fractal_gain")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 