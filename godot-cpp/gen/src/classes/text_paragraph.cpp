/**************************************************************************/
/*  text_paragraph.cpp                                                    */
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

#include <godot_cpp/classes/text_paragraph.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>

namespace godot {

void TextParagraph::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextParagraph::set_direction(TextServer::Direction direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_direction")._native_ptr(), 1418190634);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

TextServer::Direction TextParagraph::get_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_direction")._native_ptr(), 2516697328);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_custom_punctuation(const String &custom_punctuation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_custom_punctuation")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &custom_punctuation);
}

String TextParagraph::get_custom_punctuation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_custom_punctuation")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void TextParagraph::set_orientation(TextServer::Orientation orientation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_orientation")._native_ptr(), 42823726);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &orientation);
}

TextServer::Orientation TextParagraph::get_orientation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_orientation")._native_ptr(), 175768116);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Orientation(0));
	return (TextServer::Orientation)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_preserve_invalid(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_preserve_invalid")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextParagraph::get_preserve_invalid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_preserve_invalid")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_preserve_control(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_preserve_control")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextParagraph::get_preserve_control() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_preserve_control")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_bidi_override(const Array &override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_bidi_override")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &override);
}

bool TextParagraph::set_dropcap(const String &text, const Ref<Font> &font, int32_t font_size, const Rect2 &dropcap_margins, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_dropcap")._native_ptr(), 2498990330);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &text, (font != nullptr ? &font->_owner : nullptr), &font_size_encoded, &dropcap_margins, &language);
}

void TextParagraph::clear_dropcap() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("clear_dropcap")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool TextParagraph::add_string(const String &text, const Ref<Font> &font, int32_t font_size, const String &language, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("add_string")._native_ptr(), 621426851);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &text, (font != nullptr ? &font->_owner : nullptr), &font_size_encoded, &language, &meta);
}

bool TextParagraph::add_object(const Variant &key, const Vector2 &size, InlineAlignment inline_align, int32_t length, double baseline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("add_object")._native_ptr(), 1316529304);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	double baseline_encoded;
	PtrToArg<double>::encode(baseline, &baseline_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &key, &size, &inline_align, &length_encoded, &baseline_encoded);
}

bool TextParagraph::resize_object(const Variant &key, const Vector2 &size, InlineAlignment inline_align, double baseline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("resize_object")._native_ptr(), 2095776372);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	double baseline_encoded;
	PtrToArg<double>::encode(baseline, &baseline_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &key, &size, &inline_align, &baseline_encoded);
}

void TextParagraph::set_alignment(HorizontalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_alignment")._native_ptr(), 2312603777);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

HorizontalAlignment TextParagraph::get_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_alignment")._native_ptr(), 341400642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::tab_align(const PackedFloat32Array &tab_stops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("tab_align")._native_ptr(), 2899603908);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_stops);
}

void TextParagraph::set_break_flags(BitField<TextServer::LineBreakFlag> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_break_flags")._native_ptr(), 2809697122);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<TextServer::LineBreakFlag> TextParagraph::get_break_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_break_flags")._native_ptr(), 2340632602);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::LineBreakFlag>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_justification_flags(BitField<TextServer::JustificationFlag> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_justification_flags")._native_ptr(), 2877345813);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<TextServer::JustificationFlag> TextParagraph::get_justification_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_justification_flags")._native_ptr(), 1583363614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::JustificationFlag>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_text_overrun_behavior(TextServer::OverrunBehavior overrun_behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_text_overrun_behavior")._native_ptr(), 1008890932);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &overrun_behavior);
}

TextServer::OverrunBehavior TextParagraph::get_text_overrun_behavior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_text_overrun_behavior")._native_ptr(), 3779142101);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::OverrunBehavior(0));
	return (TextServer::OverrunBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_width(double width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_width")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

double TextParagraph::get_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector2 TextParagraph::get_non_wrapped_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_non_wrapped_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 TextParagraph::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

RID TextParagraph::get_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID TextParagraph::get_line_rid(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_rid")._native_ptr(), 495598643);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &line_encoded);
}

RID TextParagraph::get_dropcap_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_dropcap_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

int32_t TextParagraph::get_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::set_max_lines_visible(int32_t max_lines_visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("set_max_lines_visible")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_lines_visible_encoded;
	PtrToArg<int64_t>::encode(max_lines_visible, &max_lines_visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_lines_visible_encoded);
}

int32_t TextParagraph::get_max_lines_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_max_lines_visible")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Array TextParagraph::get_line_objects(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_objects")._native_ptr(), 663333327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &line_encoded);
}

Rect2 TextParagraph::get_line_object_rect(int32_t line, const Variant &key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_object_rect")._native_ptr(), 204315017);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &line_encoded, &key);
}

Vector2 TextParagraph::get_line_size(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_size")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &line_encoded);
}

Vector2i TextParagraph::get_line_range(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_range")._native_ptr(), 880721226);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &line_encoded);
}

double TextParagraph::get_line_ascent(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_ascent")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded);
}

double TextParagraph::get_line_descent(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_descent")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded);
}

double TextParagraph::get_line_width(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_width")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded);
}

double TextParagraph::get_line_underline_position(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_underline_position")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded);
}

double TextParagraph::get_line_underline_thickness(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_line_underline_thickness")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded);
}

Vector2 TextParagraph::get_dropcap_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_dropcap_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

int32_t TextParagraph::get_dropcap_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("get_dropcap_lines")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextParagraph::draw(const RID &canvas, const Vector2 &pos, const Color &color, const Color &dc_color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("draw")._native_ptr(), 1567802413);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &color, &dc_color);
}

void TextParagraph::draw_outline(const RID &canvas, const Vector2 &pos, int32_t outline_size, const Color &color, const Color &dc_color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("draw_outline")._native_ptr(), 1893131224);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &outline_size_encoded, &color, &dc_color);
}

void TextParagraph::draw_line(const RID &canvas, const Vector2 &pos, int32_t line, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("draw_line")._native_ptr(), 1242169894);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &line_encoded, &color);
}

void TextParagraph::draw_line_outline(const RID &canvas, const Vector2 &pos, int32_t line, int32_t outline_size, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("draw_line_outline")._native_ptr(), 2664926980);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &line_encoded, &outline_size_encoded, &color);
}

void TextParagraph::draw_dropcap(const RID &canvas, const Vector2 &pos, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("draw_dropcap")._native_ptr(), 856975658);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &color);
}

void TextParagraph::draw_dropcap_outline(const RID &canvas, const Vector2 &pos, int32_t outline_size, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("draw_dropcap_outline")._native_ptr(), 1343401456);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &pos, &outline_size_encoded, &color);
}

int32_t TextParagraph::hit_test(const Vector2 &coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextParagraph::get_class_static()._native_ptr(), StringName("hit_test")._native_ptr(), 3820158470);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &coords);
}


} // namespace godot 