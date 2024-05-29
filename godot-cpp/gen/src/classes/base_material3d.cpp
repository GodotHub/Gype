/**************************************************************************/
/*  base_material3d.cpp                                                   */
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

#include <godot_cpp/classes/base_material3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void BaseMaterial3D::set_albedo(const Color &albedo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_albedo")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &albedo);
}

Color BaseMaterial3D::get_albedo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_albedo")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_transparency(BaseMaterial3D::Transparency transparency) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_transparency")._native_ptr(), 3435651667);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &transparency);
}

BaseMaterial3D::Transparency BaseMaterial3D::get_transparency() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_transparency")._native_ptr(), 990903061);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::Transparency(0));
	return (BaseMaterial3D::Transparency)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_alpha_antialiasing(BaseMaterial3D::AlphaAntiAliasing alpha_aa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_alpha_antialiasing")._native_ptr(), 3212649852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alpha_aa);
}

BaseMaterial3D::AlphaAntiAliasing BaseMaterial3D::get_alpha_antialiasing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_alpha_antialiasing")._native_ptr(), 2889939400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::AlphaAntiAliasing(0));
	return (BaseMaterial3D::AlphaAntiAliasing)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_alpha_antialiasing_edge(double edge) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_alpha_antialiasing_edge")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double edge_encoded;
	PtrToArg<double>::encode(edge, &edge_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &edge_encoded);
}

double BaseMaterial3D::get_alpha_antialiasing_edge() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_alpha_antialiasing_edge")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_shading_mode(BaseMaterial3D::ShadingMode shading_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_shading_mode")._native_ptr(), 3368750322);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shading_mode);
}

BaseMaterial3D::ShadingMode BaseMaterial3D::get_shading_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_shading_mode")._native_ptr(), 2132070559);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::ShadingMode(0));
	return (BaseMaterial3D::ShadingMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_specular(double specular) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_specular")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double specular_encoded;
	PtrToArg<double>::encode(specular, &specular_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &specular_encoded);
}

double BaseMaterial3D::get_specular() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_specular")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_metallic(double metallic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_metallic")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double metallic_encoded;
	PtrToArg<double>::encode(metallic, &metallic_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &metallic_encoded);
}

double BaseMaterial3D::get_metallic() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_metallic")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_roughness(double roughness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_roughness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double roughness_encoded;
	PtrToArg<double>::encode(roughness, &roughness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &roughness_encoded);
}

double BaseMaterial3D::get_roughness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_roughness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_emission(const Color &emission) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_emission")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emission);
}

Color BaseMaterial3D::get_emission() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_emission")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_emission_energy_multiplier(double emission_energy_multiplier) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_emission_energy_multiplier")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double emission_energy_multiplier_encoded;
	PtrToArg<double>::encode(emission_energy_multiplier, &emission_energy_multiplier_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emission_energy_multiplier_encoded);
}

double BaseMaterial3D::get_emission_energy_multiplier() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_emission_energy_multiplier")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_emission_intensity(double emission_energy_multiplier) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_emission_intensity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double emission_energy_multiplier_encoded;
	PtrToArg<double>::encode(emission_energy_multiplier, &emission_energy_multiplier_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emission_energy_multiplier_encoded);
}

double BaseMaterial3D::get_emission_intensity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_emission_intensity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_normal_scale(double normal_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_normal_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double normal_scale_encoded;
	PtrToArg<double>::encode(normal_scale, &normal_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &normal_scale_encoded);
}

double BaseMaterial3D::get_normal_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_normal_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_rim(double rim) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_rim")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double rim_encoded;
	PtrToArg<double>::encode(rim, &rim_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rim_encoded);
}

double BaseMaterial3D::get_rim() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_rim")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_rim_tint(double rim_tint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_rim_tint")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double rim_tint_encoded;
	PtrToArg<double>::encode(rim_tint, &rim_tint_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rim_tint_encoded);
}

double BaseMaterial3D::get_rim_tint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_rim_tint")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_clearcoat(double clearcoat) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_clearcoat")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double clearcoat_encoded;
	PtrToArg<double>::encode(clearcoat, &clearcoat_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clearcoat_encoded);
}

double BaseMaterial3D::get_clearcoat() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_clearcoat")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_clearcoat_roughness(double clearcoat_roughness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_clearcoat_roughness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double clearcoat_roughness_encoded;
	PtrToArg<double>::encode(clearcoat_roughness, &clearcoat_roughness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clearcoat_roughness_encoded);
}

double BaseMaterial3D::get_clearcoat_roughness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_clearcoat_roughness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_anisotropy(double anisotropy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_anisotropy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double anisotropy_encoded;
	PtrToArg<double>::encode(anisotropy, &anisotropy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anisotropy_encoded);
}

double BaseMaterial3D::get_anisotropy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_anisotropy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_heightmap_scale(double heightmap_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_heightmap_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double heightmap_scale_encoded;
	PtrToArg<double>::encode(heightmap_scale, &heightmap_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &heightmap_scale_encoded);
}

double BaseMaterial3D::get_heightmap_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_heightmap_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_subsurface_scattering_strength(double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_subsurface_scattering_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &strength_encoded);
}

double BaseMaterial3D::get_subsurface_scattering_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_subsurface_scattering_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_transmittance_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_transmittance_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color BaseMaterial3D::get_transmittance_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_transmittance_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_transmittance_depth(double depth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_transmittance_depth")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double depth_encoded;
	PtrToArg<double>::encode(depth, &depth_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &depth_encoded);
}

double BaseMaterial3D::get_transmittance_depth() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_transmittance_depth")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_transmittance_boost(double boost) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_transmittance_boost")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double boost_encoded;
	PtrToArg<double>::encode(boost, &boost_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &boost_encoded);
}

double BaseMaterial3D::get_transmittance_boost() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_transmittance_boost")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_backlight(const Color &backlight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_backlight")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &backlight);
}

Color BaseMaterial3D::get_backlight() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_backlight")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_refraction(double refraction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_refraction")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double refraction_encoded;
	PtrToArg<double>::encode(refraction, &refraction_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &refraction_encoded);
}

double BaseMaterial3D::get_refraction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_refraction")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_point_size(double point_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_point_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double point_size_encoded;
	PtrToArg<double>::encode(point_size, &point_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_size_encoded);
}

double BaseMaterial3D::get_point_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_point_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_detail_uv(BaseMaterial3D::DetailUV detail_uv) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_detail_uv")._native_ptr(), 456801921);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_uv);
}

BaseMaterial3D::DetailUV BaseMaterial3D::get_detail_uv() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_detail_uv")._native_ptr(), 2306920512);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::DetailUV(0));
	return (BaseMaterial3D::DetailUV)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_blend_mode(BaseMaterial3D::BlendMode blend_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_blend_mode")._native_ptr(), 2830186259);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &blend_mode);
}

BaseMaterial3D::BlendMode BaseMaterial3D::get_blend_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_blend_mode")._native_ptr(), 4022690962);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::BlendMode(0));
	return (BaseMaterial3D::BlendMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_depth_draw_mode(BaseMaterial3D::DepthDrawMode depth_draw_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_depth_draw_mode")._native_ptr(), 1456584748);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &depth_draw_mode);
}

BaseMaterial3D::DepthDrawMode BaseMaterial3D::get_depth_draw_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_depth_draw_mode")._native_ptr(), 2578197639);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::DepthDrawMode(0));
	return (BaseMaterial3D::DepthDrawMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_cull_mode(BaseMaterial3D::CullMode cull_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_cull_mode")._native_ptr(), 2338909218);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cull_mode);
}

BaseMaterial3D::CullMode BaseMaterial3D::get_cull_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_cull_mode")._native_ptr(), 1941499586);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::CullMode(0));
	return (BaseMaterial3D::CullMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_diffuse_mode(BaseMaterial3D::DiffuseMode diffuse_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_diffuse_mode")._native_ptr(), 1045299638);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &diffuse_mode);
}

BaseMaterial3D::DiffuseMode BaseMaterial3D::get_diffuse_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_diffuse_mode")._native_ptr(), 3973617136);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::DiffuseMode(0));
	return (BaseMaterial3D::DiffuseMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_specular_mode(BaseMaterial3D::SpecularMode specular_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_specular_mode")._native_ptr(), 584737147);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &specular_mode);
}

BaseMaterial3D::SpecularMode BaseMaterial3D::get_specular_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_specular_mode")._native_ptr(), 2569953298);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::SpecularMode(0));
	return (BaseMaterial3D::SpecularMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_flag(BaseMaterial3D::Flags flag, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_flag")._native_ptr(), 3070159527);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flag, &enable_encoded);
}

bool BaseMaterial3D::get_flag(BaseMaterial3D::Flags flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_flag")._native_ptr(), 1286410065);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &flag);
}

void BaseMaterial3D::set_texture_filter(BaseMaterial3D::TextureFilter mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_texture_filter")._native_ptr(), 22904437);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

BaseMaterial3D::TextureFilter BaseMaterial3D::get_texture_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_texture_filter")._native_ptr(), 3289213076);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::TextureFilter(0));
	return (BaseMaterial3D::TextureFilter)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_feature(BaseMaterial3D::Feature feature, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_feature")._native_ptr(), 2819288693);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &feature, &enable_encoded);
}

bool BaseMaterial3D::get_feature(BaseMaterial3D::Feature feature) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_feature")._native_ptr(), 1965241794);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &feature);
}

void BaseMaterial3D::set_texture(BaseMaterial3D::TextureParam param, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 464208135);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> BaseMaterial3D::get_texture(BaseMaterial3D::TextureParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 329605813);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &param));
}

void BaseMaterial3D::set_detail_blend_mode(BaseMaterial3D::BlendMode detail_blend_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_detail_blend_mode")._native_ptr(), 2830186259);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_blend_mode);
}

BaseMaterial3D::BlendMode BaseMaterial3D::get_detail_blend_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_detail_blend_mode")._native_ptr(), 4022690962);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::BlendMode(0));
	return (BaseMaterial3D::BlendMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_uv1_scale(const Vector3 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_uv1_scale")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale);
}

Vector3 BaseMaterial3D::get_uv1_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_uv1_scale")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_uv1_offset(const Vector3 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_uv1_offset")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector3 BaseMaterial3D::get_uv1_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_uv1_offset")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_uv1_triplanar_blend_sharpness(double sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_uv1_triplanar_blend_sharpness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sharpness_encoded;
	PtrToArg<double>::encode(sharpness, &sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sharpness_encoded);
}

double BaseMaterial3D::get_uv1_triplanar_blend_sharpness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_uv1_triplanar_blend_sharpness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_uv2_scale(const Vector3 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_uv2_scale")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale);
}

Vector3 BaseMaterial3D::get_uv2_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_uv2_scale")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_uv2_offset(const Vector3 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_uv2_offset")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector3 BaseMaterial3D::get_uv2_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_uv2_offset")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_uv2_triplanar_blend_sharpness(double sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_uv2_triplanar_blend_sharpness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sharpness_encoded;
	PtrToArg<double>::encode(sharpness, &sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sharpness_encoded);
}

double BaseMaterial3D::get_uv2_triplanar_blend_sharpness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_uv2_triplanar_blend_sharpness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_billboard_mode(BaseMaterial3D::BillboardMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_billboard_mode")._native_ptr(), 4202036497);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

BaseMaterial3D::BillboardMode BaseMaterial3D::get_billboard_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_billboard_mode")._native_ptr(), 1283840139);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::BillboardMode(0));
	return (BaseMaterial3D::BillboardMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_particles_anim_h_frames(int32_t frames) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_particles_anim_h_frames")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frames_encoded;
	PtrToArg<int64_t>::encode(frames, &frames_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frames_encoded);
}

int32_t BaseMaterial3D::get_particles_anim_h_frames() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_particles_anim_h_frames")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_particles_anim_v_frames(int32_t frames) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_particles_anim_v_frames")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frames_encoded;
	PtrToArg<int64_t>::encode(frames, &frames_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frames_encoded);
}

int32_t BaseMaterial3D::get_particles_anim_v_frames() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_particles_anim_v_frames")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_particles_anim_loop(bool loop) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_particles_anim_loop")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t loop_encoded;
	PtrToArg<bool>::encode(loop, &loop_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &loop_encoded);
}

bool BaseMaterial3D::get_particles_anim_loop() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_particles_anim_loop")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_heightmap_deep_parallax(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_heightmap_deep_parallax")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool BaseMaterial3D::is_heightmap_deep_parallax_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("is_heightmap_deep_parallax_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_heightmap_deep_parallax_min_layers(int32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_heightmap_deep_parallax_min_layers")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded);
}

int32_t BaseMaterial3D::get_heightmap_deep_parallax_min_layers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_heightmap_deep_parallax_min_layers")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_heightmap_deep_parallax_max_layers(int32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_heightmap_deep_parallax_max_layers")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded);
}

int32_t BaseMaterial3D::get_heightmap_deep_parallax_max_layers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_heightmap_deep_parallax_max_layers")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_heightmap_deep_parallax_flip_tangent(bool flip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_heightmap_deep_parallax_flip_tangent")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_encoded;
	PtrToArg<bool>::encode(flip, &flip_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_encoded);
}

bool BaseMaterial3D::get_heightmap_deep_parallax_flip_tangent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_heightmap_deep_parallax_flip_tangent")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_heightmap_deep_parallax_flip_binormal(bool flip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_heightmap_deep_parallax_flip_binormal")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_encoded;
	PtrToArg<bool>::encode(flip, &flip_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_encoded);
}

bool BaseMaterial3D::get_heightmap_deep_parallax_flip_binormal() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_heightmap_deep_parallax_flip_binormal")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_grow(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_grow")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double BaseMaterial3D::get_grow() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_grow")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_emission_operator(BaseMaterial3D::EmissionOperator _operator) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_emission_operator")._native_ptr(), 3825128922);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &_operator);
}

BaseMaterial3D::EmissionOperator BaseMaterial3D::get_emission_operator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_emission_operator")._native_ptr(), 974205018);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::EmissionOperator(0));
	return (BaseMaterial3D::EmissionOperator)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_ao_light_affect(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_ao_light_affect")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double BaseMaterial3D::get_ao_light_affect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_ao_light_affect")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_alpha_scissor_threshold(double threshold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_alpha_scissor_threshold")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double threshold_encoded;
	PtrToArg<double>::encode(threshold, &threshold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &threshold_encoded);
}

double BaseMaterial3D::get_alpha_scissor_threshold() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_alpha_scissor_threshold")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_alpha_hash_scale(double threshold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_alpha_hash_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double threshold_encoded;
	PtrToArg<double>::encode(threshold, &threshold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &threshold_encoded);
}

double BaseMaterial3D::get_alpha_hash_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_alpha_hash_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_grow_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_grow_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool BaseMaterial3D::is_grow_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("is_grow_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_metallic_texture_channel(BaseMaterial3D::TextureChannel channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_metallic_texture_channel")._native_ptr(), 744167988);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &channel);
}

BaseMaterial3D::TextureChannel BaseMaterial3D::get_metallic_texture_channel() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_metallic_texture_channel")._native_ptr(), 568133867);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::TextureChannel(0));
	return (BaseMaterial3D::TextureChannel)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_roughness_texture_channel(BaseMaterial3D::TextureChannel channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_roughness_texture_channel")._native_ptr(), 744167988);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &channel);
}

BaseMaterial3D::TextureChannel BaseMaterial3D::get_roughness_texture_channel() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_roughness_texture_channel")._native_ptr(), 568133867);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::TextureChannel(0));
	return (BaseMaterial3D::TextureChannel)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_ao_texture_channel(BaseMaterial3D::TextureChannel channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_ao_texture_channel")._native_ptr(), 744167988);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &channel);
}

BaseMaterial3D::TextureChannel BaseMaterial3D::get_ao_texture_channel() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_ao_texture_channel")._native_ptr(), 568133867);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::TextureChannel(0));
	return (BaseMaterial3D::TextureChannel)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_refraction_texture_channel(BaseMaterial3D::TextureChannel channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_refraction_texture_channel")._native_ptr(), 744167988);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &channel);
}

BaseMaterial3D::TextureChannel BaseMaterial3D::get_refraction_texture_channel() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_refraction_texture_channel")._native_ptr(), 568133867);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::TextureChannel(0));
	return (BaseMaterial3D::TextureChannel)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_proximity_fade_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_proximity_fade_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool BaseMaterial3D::is_proximity_fade_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("is_proximity_fade_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_proximity_fade_distance(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_proximity_fade_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double BaseMaterial3D::get_proximity_fade_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_proximity_fade_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_msdf_pixel_range(double range) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_msdf_pixel_range")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double range_encoded;
	PtrToArg<double>::encode(range, &range_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &range_encoded);
}

double BaseMaterial3D::get_msdf_pixel_range() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_msdf_pixel_range")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_msdf_outline_size(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_msdf_outline_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

double BaseMaterial3D::get_msdf_outline_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_msdf_outline_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_distance_fade(BaseMaterial3D::DistanceFadeMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_distance_fade")._native_ptr(), 1379478617);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

BaseMaterial3D::DistanceFadeMode BaseMaterial3D::get_distance_fade() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_distance_fade")._native_ptr(), 2694575734);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::DistanceFadeMode(0));
	return (BaseMaterial3D::DistanceFadeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_distance_fade_max_distance(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_distance_fade_max_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double BaseMaterial3D::get_distance_fade_max_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_distance_fade_max_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BaseMaterial3D::set_distance_fade_min_distance(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("set_distance_fade_min_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double BaseMaterial3D::get_distance_fade_min_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseMaterial3D::get_class_static()._native_ptr(), StringName("get_distance_fade_min_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 