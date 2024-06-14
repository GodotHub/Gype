/**************************************************************************/
/*  light3d.cpp                                                           */
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

#include <godot_cpp/classes/light3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {


void Light3D::set_editor_only(bool editor_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_editor_only")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t editor_only_encoded;
	PtrToArg<bool>::encode(editor_only, &editor_only_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &editor_only_encoded);
}

bool Light3D::is_editor_only() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("is_editor_only")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Light3D::set_param(Light3D::Param param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_param")._native_ptr(), 1722734213);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double Light3D::get_param(Light3D::Param param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_param")._native_ptr(), 1844084987);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void Light3D::set_shadow(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_shadow")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Light3D::has_shadow() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("has_shadow")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Light3D::set_negative(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_negative")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Light3D::is_negative() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("is_negative")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Light3D::set_cull_mask(uint32_t cull_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_cull_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cull_mask_encoded;
	PtrToArg<int64_t>::encode(cull_mask, &cull_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cull_mask_encoded);
}

uint32_t Light3D::get_cull_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_cull_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Light3D::set_enable_distance_fade(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_enable_distance_fade")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Light3D::is_distance_fade_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("is_distance_fade_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Light3D::set_distance_fade_begin(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_distance_fade_begin")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Light3D::get_distance_fade_begin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_distance_fade_begin")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Light3D::set_distance_fade_shadow(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_distance_fade_shadow")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Light3D::get_distance_fade_shadow() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_distance_fade_shadow")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Light3D::set_distance_fade_length(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_distance_fade_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Light3D::get_distance_fade_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_distance_fade_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Light3D::set_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Light3D::get_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Light3D::set_shadow_reverse_cull_face(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_shadow_reverse_cull_face")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Light3D::get_shadow_reverse_cull_face() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_shadow_reverse_cull_face")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Light3D::set_bake_mode(Light3D::BakeMode bake_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_bake_mode")._native_ptr(), 37739303);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bake_mode);
}

Light3D::BakeMode Light3D::get_bake_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_bake_mode")._native_ptr(), 371737608);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Light3D::BakeMode(0));
	return (Light3D::BakeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Light3D::set_projector(const Ref<Texture2D> &projector) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_projector")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (projector != nullptr ? &projector->_owner : nullptr));
}

Ref<Texture2D> Light3D::get_projector() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_projector")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void Light3D::set_temperature(double temperature) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("set_temperature")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double temperature_encoded;
	PtrToArg<double>::encode(temperature, &temperature_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &temperature_encoded);
}

double Light3D::get_temperature() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_temperature")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Color Light3D::get_correlated_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Light3D::get_class_static()._native_ptr(), StringName("get_correlated_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}


} // namespace godot 