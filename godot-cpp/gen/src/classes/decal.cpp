/**************************************************************************/
/*  decal.cpp                                                             */
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

#include <godot_cpp/classes/decal.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {


void Decal::set_size(const Vector3 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_size")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector3 Decal::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void Decal::set_texture(Decal::DecalTexture type, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 2086764391);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> Decal::get_texture(Decal::DecalTexture type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 3244119503);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &type));
}

void Decal::set_emission_energy(double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_emission_energy")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &energy_encoded);
}

double Decal::get_emission_energy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_emission_energy")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_albedo_mix(double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_albedo_mix")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &energy_encoded);
}

double Decal::get_albedo_mix() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_albedo_mix")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_modulate(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_modulate")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Decal::get_modulate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_modulate")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Decal::set_upper_fade(double fade) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_upper_fade")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fade_encoded;
	PtrToArg<double>::encode(fade, &fade_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fade_encoded);
}

double Decal::get_upper_fade() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_upper_fade")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_lower_fade(double fade) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_lower_fade")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fade_encoded;
	PtrToArg<double>::encode(fade, &fade_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fade_encoded);
}

double Decal::get_lower_fade() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_lower_fade")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_normal_fade(double fade) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_normal_fade")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fade_encoded;
	PtrToArg<double>::encode(fade, &fade_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fade_encoded);
}

double Decal::get_normal_fade() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_normal_fade")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_enable_distance_fade(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_enable_distance_fade")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Decal::is_distance_fade_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("is_distance_fade_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Decal::set_distance_fade_begin(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_distance_fade_begin")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Decal::get_distance_fade_begin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_distance_fade_begin")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_distance_fade_length(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_distance_fade_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Decal::get_distance_fade_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_distance_fade_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Decal::set_cull_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("set_cull_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t Decal::get_cull_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Decal::get_class_static()._native_ptr(), StringName("get_cull_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 