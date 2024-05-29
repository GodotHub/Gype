/**************************************************************************/
/*  style_box_flat.cpp                                                    */
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

#include <godot_cpp/classes/style_box_flat.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void StyleBoxFlat::set_bg_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_bg_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color StyleBoxFlat::get_bg_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_bg_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_border_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_border_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color StyleBoxFlat::get_border_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_border_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_border_width_all(int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_border_width_all")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

int32_t StyleBoxFlat::get_border_width_min() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_border_width_min")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_border_width(Side margin, int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_border_width")._native_ptr(), 437707142);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin, &width_encoded);
}

int32_t StyleBoxFlat::get_border_width(Side margin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_border_width")._native_ptr(), 1983885014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &margin);
}

void StyleBoxFlat::set_border_blend(bool blend) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_border_blend")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t blend_encoded;
	PtrToArg<bool>::encode(blend, &blend_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &blend_encoded);
}

bool StyleBoxFlat::get_border_blend() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_border_blend")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_corner_radius_all(int32_t radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_corner_radius_all")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t radius_encoded;
	PtrToArg<int64_t>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

void StyleBoxFlat::set_corner_radius(Corner corner, int32_t radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_corner_radius")._native_ptr(), 2696158768);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t radius_encoded;
	PtrToArg<int64_t>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &corner, &radius_encoded);
}

int32_t StyleBoxFlat::get_corner_radius(Corner corner) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_corner_radius")._native_ptr(), 3982397690);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &corner);
}

void StyleBoxFlat::set_expand_margin(Side margin, double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_expand_margin")._native_ptr(), 4290182280);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin, &size_encoded);
}

void StyleBoxFlat::set_expand_margin_all(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_expand_margin_all")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

double StyleBoxFlat::get_expand_margin(Side margin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_expand_margin")._native_ptr(), 2869120046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &margin);
}

void StyleBoxFlat::set_draw_center(bool draw_center) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_draw_center")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t draw_center_encoded;
	PtrToArg<bool>::encode(draw_center, &draw_center_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_center_encoded);
}

bool StyleBoxFlat::is_draw_center_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("is_draw_center_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_skew(const Vector2 &skew) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_skew")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skew);
}

Vector2 StyleBoxFlat::get_skew() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_skew")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_shadow_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_shadow_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color StyleBoxFlat::get_shadow_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_shadow_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_shadow_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_shadow_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t StyleBoxFlat::get_shadow_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_shadow_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_shadow_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_shadow_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 StyleBoxFlat::get_shadow_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_shadow_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_anti_aliased(bool anti_aliased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_anti_aliased")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t anti_aliased_encoded;
	PtrToArg<bool>::encode(anti_aliased, &anti_aliased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anti_aliased_encoded);
}

bool StyleBoxFlat::is_anti_aliased() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("is_anti_aliased")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_aa_size(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_aa_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

double StyleBoxFlat::get_aa_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_aa_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void StyleBoxFlat::set_corner_detail(int32_t detail) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("set_corner_detail")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t detail_encoded;
	PtrToArg<int64_t>::encode(detail, &detail_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_encoded);
}

int32_t StyleBoxFlat::get_corner_detail() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBoxFlat::get_class_static()._native_ptr(), StringName("get_corner_detail")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 