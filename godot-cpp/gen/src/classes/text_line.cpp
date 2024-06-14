/**************************************************************************/
/*  text_line.cpp                                                         */
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

#include <godot_cpp/classes/text_line.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>

namespace godot {


void TextLine::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextLine::set_direction(TextServer::Direction direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_direction")._native_ptr(), 1418190634);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

TextServer::Direction TextLine::get_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_direction")._native_ptr(), 2516697328);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextLine::set_orientation(TextServer::Orientation orientation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_orientation")._native_ptr(), 42823726);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &orientation);
}

TextServer::Orientation TextLine::get_orientation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_orientation")._native_ptr(), 175768116);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Orientation(0));
	return (TextServer::Orientation)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextLine::set_preserve_invalid(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_preserve_invalid")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextLine::get_preserve_invalid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_preserve_invalid")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextLine::set_preserve_control(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_preserve_control")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextLine::get_preserve_control() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_preserve_control")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextLine::set_bidi_override(const Array &override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_bidi_override")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &override);
}

bool TextLine::add_string(const String &text, const Ref<Font> &font, int32_t font_size, const String &language, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("add_string")._native_ptr(), 621426851);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &text, (font != nullptr ? &font->_owner : nullptr), &font_size_encoded, &language, &meta);
}

bool TextLine::add_object(const Variant &key, const Vector2 &size, InlineAlignment inline_align, int32_t length, double baseline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("add_object")._native_ptr(), 1316529304);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	double baseline_encoded;
	PtrToArg<double>::encode(baseline, &baseline_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &key, &size, &inline_align, &length_encoded, &baseline_encoded);
}

bool TextLine::resize_object(const Variant &key, const Vector2 &size, InlineAlignment inline_align, double baseline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("resize_object")._native_ptr(), 2095776372);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	double baseline_encoded;
	PtrToArg<double>::encode(baseline, &baseline_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &key, &size, &inline_align, &baseline_encoded);
}

void TextLine::set_width(double width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_width")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

double TextLine::get_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextLine::set_horizontal_alignment(HorizontalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_horizontal_alignment")._native_ptr(), 2312603777);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

HorizontalAlignment TextLine::get_horizontal_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_horizontal_alignment")._native_ptr(), 341400642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextLine::tab_align(const PackedFloat32Array &tab_stops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("tab_align")._native_ptr(), 2899603908);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_stops);
}

void TextLine::set_flags(BitField<TextServer::JustificationFlag> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_flags")._native_ptr(), 2877345813);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<TextServer::JustificationFlag> TextLine::get_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_flags")._native_ptr(), 1583363614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::JustificationFlag>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextLine::set_text_overrun_behavior(TextServer::OverrunBehavior overrun_behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_text_overrun_behavior")._native_ptr(), 1008890932);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &overrun_behavior);
}

TextServer::OverrunBehavior TextLine::get_text_overrun_behavior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_text_overrun_behavior")._native_ptr(), 3779142101);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::OverrunBehavior(0));
	return (TextServer::OverrunBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextLine::set_ellipsis_char(const String &_char) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("set_ellipsis_char")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &_char);
}

String TextLine::get_ellipsis_char() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_ellipsis_char")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

Array TextLine::get_objects() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_objects")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

Rect2 TextLine::get_object_rect(const Variant &key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_object_rect")._native_ptr(), 1742700391);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &key);
}

Vector2 TextLine::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

RID TextLine::get_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

double TextLine::get_line_ascent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_line_ascent")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double TextLine::get_line_descent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_line_descent")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double TextLine::get_line_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_line_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double TextLine::get_line_underline_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_line_underline_position")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double TextLine::get_line_underline_thickness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("get_line_underline_thickness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextLine::draw(const RID &canvas, const Vector2 &pos, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("draw")._native_ptr(), 856975658);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &color);
}

void TextLine::draw_outline(const RID &canvas, const Vector2 &pos, int32_t outline_size, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("draw_outline")._native_ptr(), 1343401456);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &outline_size_encoded, &color);
}

int32_t TextLine::hit_test(double coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextLine::get_class_static()._native_ptr(), StringName("hit_test")._native_ptr(), 2401831903);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	double coords_encoded;
	PtrToArg<double>::encode(coords, &coords_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &coords_encoded);
}


} // namespace godot 