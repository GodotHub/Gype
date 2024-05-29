/**************************************************************************/
/*  lightmap_gi.cpp                                                       */
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

#include <godot_cpp/classes/lightmap_gi.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/sky.hpp>

namespace godot {

void LightmapGI::set_light_data(const Ref<LightmapGIData> &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_light_data")._native_ptr(), 1790597277);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (data != nullptr ? &data->_owner : nullptr));
}

Ref<LightmapGIData> LightmapGI::get_light_data() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_light_data")._native_ptr(), 290354153);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<LightmapGIData>());
	return Ref<LightmapGIData>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<LightmapGIData>(_gde_method_bind, _owner));
}

void LightmapGI::set_bake_quality(LightmapGI::BakeQuality bake_quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_bake_quality")._native_ptr(), 1192215803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bake_quality);
}

LightmapGI::BakeQuality LightmapGI::get_bake_quality() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_bake_quality")._native_ptr(), 688832735);
	CHECK_METHOD_BIND_RET(_gde_method_bind, LightmapGI::BakeQuality(0));
	return (LightmapGI::BakeQuality)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_bounces(int32_t bounces) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_bounces")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bounces_encoded;
	PtrToArg<int64_t>::encode(bounces, &bounces_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bounces_encoded);
}

int32_t LightmapGI::get_bounces() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_bounces")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_bounce_indirect_energy(double bounce_indirect_energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_bounce_indirect_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bounce_indirect_energy_encoded;
	PtrToArg<double>::encode(bounce_indirect_energy, &bounce_indirect_energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bounce_indirect_energy_encoded);
}

double LightmapGI::get_bounce_indirect_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_bounce_indirect_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void LightmapGI::set_generate_probes(LightmapGI::GenerateProbes subdivision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_generate_probes")._native_ptr(), 549981046);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &subdivision);
}

LightmapGI::GenerateProbes LightmapGI::get_generate_probes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_generate_probes")._native_ptr(), 3930596226);
	CHECK_METHOD_BIND_RET(_gde_method_bind, LightmapGI::GenerateProbes(0));
	return (LightmapGI::GenerateProbes)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_bias(double bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bias_encoded;
	PtrToArg<double>::encode(bias, &bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bias_encoded);
}

double LightmapGI::get_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void LightmapGI::set_environment_mode(LightmapGI::EnvironmentMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_environment_mode")._native_ptr(), 2282650285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

LightmapGI::EnvironmentMode LightmapGI::get_environment_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_environment_mode")._native_ptr(), 4128646479);
	CHECK_METHOD_BIND_RET(_gde_method_bind, LightmapGI::EnvironmentMode(0));
	return (LightmapGI::EnvironmentMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_environment_custom_sky(const Ref<Sky> &sky) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_environment_custom_sky")._native_ptr(), 3336722921);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (sky != nullptr ? &sky->_owner : nullptr));
}

Ref<Sky> LightmapGI::get_environment_custom_sky() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_environment_custom_sky")._native_ptr(), 1177136966);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Sky>());
	return Ref<Sky>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Sky>(_gde_method_bind, _owner));
}

void LightmapGI::set_environment_custom_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_environment_custom_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color LightmapGI::get_environment_custom_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_environment_custom_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void LightmapGI::set_environment_custom_energy(double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_environment_custom_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &energy_encoded);
}

double LightmapGI::get_environment_custom_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_environment_custom_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void LightmapGI::set_max_texture_size(int32_t max_texture_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_max_texture_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_texture_size_encoded;
	PtrToArg<int64_t>::encode(max_texture_size, &max_texture_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_texture_size_encoded);
}

int32_t LightmapGI::get_max_texture_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_max_texture_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_use_denoiser(bool use_denoiser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_use_denoiser")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_denoiser_encoded;
	PtrToArg<bool>::encode(use_denoiser, &use_denoiser_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_denoiser_encoded);
}

bool LightmapGI::is_using_denoiser() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("is_using_denoiser")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_denoiser_strength(double denoiser_strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_denoiser_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double denoiser_strength_encoded;
	PtrToArg<double>::encode(denoiser_strength, &denoiser_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &denoiser_strength_encoded);
}

double LightmapGI::get_denoiser_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_denoiser_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void LightmapGI::set_interior(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_interior")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LightmapGI::is_interior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("is_interior")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_directional(bool directional) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_directional")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t directional_encoded;
	PtrToArg<bool>::encode(directional, &directional_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &directional_encoded);
}

bool LightmapGI::is_directional() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("is_directional")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_use_texture_for_bounces(bool use_texture_for_bounces) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_use_texture_for_bounces")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_texture_for_bounces_encoded;
	PtrToArg<bool>::encode(use_texture_for_bounces, &use_texture_for_bounces_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_texture_for_bounces_encoded);
}

bool LightmapGI::is_using_texture_for_bounces() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("is_using_texture_for_bounces")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LightmapGI::set_camera_attributes(const Ref<CameraAttributes> &camera_attributes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("set_camera_attributes")._native_ptr(), 2817810567);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (camera_attributes != nullptr ? &camera_attributes->_owner : nullptr));
}

Ref<CameraAttributes> LightmapGI::get_camera_attributes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LightmapGI::get_class_static()._native_ptr(), StringName("get_camera_attributes")._native_ptr(), 3921283215);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<CameraAttributes>());
	return Ref<CameraAttributes>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<CameraAttributes>(_gde_method_bind, _owner));
}


} // namespace godot 