/**************************************************************************/
/*  text_mesh.cpp                                                         */
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

#include <godot_cpp/classes/text_mesh.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>

namespace godot {


void TextMesh::set_horizontal_alignment(HorizontalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_horizontal_alignment")._native_ptr(), 2312603777);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

HorizontalAlignment TextMesh::get_horizontal_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_horizontal_alignment")._native_ptr(), 341400642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_vertical_alignment(VerticalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_vertical_alignment")._native_ptr(), 1796458609);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

VerticalAlignment TextMesh::get_vertical_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_vertical_alignment")._native_ptr(), 3274884059);
	CHECK_METHOD_BIND_RET(_gde_method_bind, VerticalAlignment(0));
	return (VerticalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String TextMesh::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void TextMesh::set_font(const Ref<Font> &font) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_font")._native_ptr(), 1262170328);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr));
}

Ref<Font> TextMesh::get_font() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_font")._native_ptr(), 3229501585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner));
}

void TextMesh::set_font_size(int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_font_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_size_encoded);
}

int32_t TextMesh::get_font_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_font_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_line_spacing(double line_spacing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_line_spacing")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double line_spacing_encoded;
	PtrToArg<double>::encode(line_spacing, &line_spacing_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_spacing_encoded);
}

double TextMesh::get_line_spacing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_line_spacing")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextMesh::set_autowrap_mode(TextServer::AutowrapMode autowrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_autowrap_mode")._native_ptr(), 3289138044);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &autowrap_mode);
}

TextServer::AutowrapMode TextMesh::get_autowrap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_autowrap_mode")._native_ptr(), 1549071663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::AutowrapMode(0));
	return (TextServer::AutowrapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_justification_flags(BitField<TextServer::JustificationFlag> justification_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_justification_flags")._native_ptr(), 2877345813);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &justification_flags);
}

BitField<TextServer::JustificationFlag> TextMesh::get_justification_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_justification_flags")._native_ptr(), 1583363614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::JustificationFlag>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_depth(double depth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_depth")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double depth_encoded;
	PtrToArg<double>::encode(depth, &depth_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &depth_encoded);
}

double TextMesh::get_depth() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_depth")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextMesh::set_width(double width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_width")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

double TextMesh::get_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextMesh::set_pixel_size(double pixel_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_pixel_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pixel_size_encoded;
	PtrToArg<double>::encode(pixel_size, &pixel_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixel_size_encoded);
}

double TextMesh::get_pixel_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_pixel_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextMesh::set_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 TextMesh::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void TextMesh::set_curve_step(double curve_step) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_curve_step")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double curve_step_encoded;
	PtrToArg<double>::encode(curve_step, &curve_step_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &curve_step_encoded);
}

double TextMesh::get_curve_step() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_curve_step")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextMesh::set_text_direction(TextServer::Direction direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 1418190634);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

TextServer::Direction TextMesh::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 2516697328);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String TextMesh::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void TextMesh::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser TextMesh::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextMesh::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array TextMesh::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

void TextMesh::set_uppercase(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("set_uppercase")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextMesh::is_uppercase() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextMesh::get_class_static()._native_ptr(), StringName("is_uppercase")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 