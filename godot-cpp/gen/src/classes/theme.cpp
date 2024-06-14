/**************************************************************************/
/*  theme.cpp                                                             */
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

#include <godot_cpp/classes/theme.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {


void Theme::set_icon(const StringName &name, const StringName &theme_type, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_icon")._native_ptr(), 2188371082);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> Theme::get_icon(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_icon")._native_ptr(), 934555193);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &name, &theme_type));
}

bool Theme::has_icon(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_icon")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

void Theme::rename_icon(const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_icon")._native_ptr(), 642128662);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &name, &theme_type);
}

void Theme::clear_icon(const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_icon")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type);
}

PackedStringArray Theme::get_icon_list(const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_icon_list")._native_ptr(), 4291131558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_icon_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_icon_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::set_stylebox(const StringName &name, const StringName &theme_type, const Ref<StyleBox> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_stylebox")._native_ptr(), 2075907568);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<StyleBox> Theme::get_stylebox(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_stylebox")._native_ptr(), 3405608165);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<StyleBox>());
	return Ref<StyleBox>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<StyleBox>(_gde_method_bind, _owner, &name, &theme_type));
}

bool Theme::has_stylebox(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_stylebox")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

void Theme::rename_stylebox(const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_stylebox")._native_ptr(), 642128662);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &name, &theme_type);
}

void Theme::clear_stylebox(const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_stylebox")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type);
}

PackedStringArray Theme::get_stylebox_list(const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_stylebox_list")._native_ptr(), 4291131558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_stylebox_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_stylebox_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::set_font(const StringName &name, const StringName &theme_type, const Ref<Font> &font) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_font")._native_ptr(), 177292320);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type, (font != nullptr ? &font->_owner : nullptr));
}

Ref<Font> Theme::get_font(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_font")._native_ptr(), 3445063586);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner, &name, &theme_type));
}

bool Theme::has_font(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_font")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

void Theme::rename_font(const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_font")._native_ptr(), 642128662);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &name, &theme_type);
}

void Theme::clear_font(const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_font")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type);
}

PackedStringArray Theme::get_font_list(const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_font_list")._native_ptr(), 4291131558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_font_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_font_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::set_font_size(const StringName &name, const StringName &theme_type, int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_font_size")._native_ptr(), 281601298);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type, &font_size_encoded);
}

int32_t Theme::get_font_size(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_font_size")._native_ptr(), 2419549490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Theme::has_font_size(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_font_size")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

void Theme::rename_font_size(const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_font_size")._native_ptr(), 642128662);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &name, &theme_type);
}

void Theme::clear_font_size(const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_font_size")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type);
}

PackedStringArray Theme::get_font_size_list(const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_font_size_list")._native_ptr(), 4291131558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_font_size_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_font_size_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::set_color(const StringName &name, const StringName &theme_type, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_color")._native_ptr(), 4111215154);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type, &color);
}

Color Theme::get_color(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_color")._native_ptr(), 2015923404);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Theme::has_color(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_color")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

void Theme::rename_color(const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_color")._native_ptr(), 642128662);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &name, &theme_type);
}

void Theme::clear_color(const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_color")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type);
}

PackedStringArray Theme::get_color_list(const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_color_list")._native_ptr(), 4291131558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_color_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_color_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::set_constant(const StringName &name, const StringName &theme_type, int32_t constant) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_constant")._native_ptr(), 281601298);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t constant_encoded;
	PtrToArg<int64_t>::encode(constant, &constant_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type, &constant_encoded);
}

int32_t Theme::get_constant(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_constant")._native_ptr(), 2419549490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Theme::has_constant(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_constant")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

void Theme::rename_constant(const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_constant")._native_ptr(), 642128662);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &name, &theme_type);
}

void Theme::clear_constant(const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_constant")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &theme_type);
}

PackedStringArray Theme::get_constant_list(const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_constant_list")._native_ptr(), 4291131558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_constant_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_constant_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::set_default_base_scale(double base_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_default_base_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double base_scale_encoded;
	PtrToArg<double>::encode(base_scale, &base_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &base_scale_encoded);
}

double Theme::get_default_base_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_default_base_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool Theme::has_default_base_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_default_base_scale")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Theme::set_default_font(const Ref<Font> &font) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_default_font")._native_ptr(), 1262170328);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr));
}

Ref<Font> Theme::get_default_font() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_default_font")._native_ptr(), 3229501585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner));
}

bool Theme::has_default_font() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_default_font")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Theme::set_default_font_size(int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_default_font_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_size_encoded);
}

int32_t Theme::get_default_font_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_default_font_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Theme::has_default_font_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_default_font_size")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Theme::set_theme_item(Theme::DataType data_type, const StringName &name, const StringName &theme_type, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_theme_item")._native_ptr(), 2492983623);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data_type, &name, &theme_type, &value);
}

Variant Theme::get_theme_item(Theme::DataType data_type, const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_theme_item")._native_ptr(), 2191024021);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &data_type, &name, &theme_type);
}

bool Theme::has_theme_item(Theme::DataType data_type, const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("has_theme_item")._native_ptr(), 1739311056);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &data_type, &name, &theme_type);
}

void Theme::rename_theme_item(Theme::DataType data_type, const StringName &old_name, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("rename_theme_item")._native_ptr(), 3900867553);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data_type, &old_name, &name, &theme_type);
}

void Theme::clear_theme_item(Theme::DataType data_type, const StringName &name, const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_theme_item")._native_ptr(), 2965505587);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data_type, &name, &theme_type);
}

PackedStringArray Theme::get_theme_item_list(Theme::DataType data_type, const String &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_theme_item_list")._native_ptr(), 3726716710);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &data_type, &theme_type);
}

PackedStringArray Theme::get_theme_item_type_list(Theme::DataType data_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_theme_item_type_list")._native_ptr(), 1316004935);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &data_type);
}

void Theme::set_type_variation(const StringName &theme_type, const StringName &base_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("set_type_variation")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &theme_type, &base_type);
}

bool Theme::is_type_variation(const StringName &theme_type, const StringName &base_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("is_type_variation")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &theme_type, &base_type);
}

void Theme::clear_type_variation(const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear_type_variation")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &theme_type);
}

StringName Theme::get_type_variation_base(const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_type_variation_base")._native_ptr(), 1965194235);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_type_variation_list(const StringName &base_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_type_variation_list")._native_ptr(), 1761182771);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &base_type);
}

void Theme::add_type(const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("add_type")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &theme_type);
}

void Theme::remove_type(const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("remove_type")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &theme_type);
}

PackedStringArray Theme::get_type_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("get_type_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void Theme::merge_with(const Ref<Theme> &other) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("merge_with")._native_ptr(), 2326690814);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (other != nullptr ? &other->_owner : nullptr));
}

void Theme::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Theme::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 