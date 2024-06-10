/**************************************************************************/
/*  label3d.cpp                                                           */
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

#include <godot_cpp/classes/label3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>

namespace godot {

void Label3D::set_horizontal_alignment(HorizontalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_horizontal_alignment")._native_ptr(), 2312603777);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

HorizontalAlignment Label3D::get_horizontal_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_horizontal_alignment")._native_ptr(), 341400642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_vertical_alignment(VerticalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_vertical_alignment")._native_ptr(), 1796458609);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

VerticalAlignment Label3D::get_vertical_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_vertical_alignment")._native_ptr(), 3274884059);
	CHECK_METHOD_BIND_RET(_gde_method_bind, VerticalAlignment(0));
	return (VerticalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_modulate(const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_modulate")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &modulate);
}

Color Label3D::get_modulate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_modulate")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Label3D::set_outline_modulate(const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_outline_modulate")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &modulate);
}

Color Label3D::get_outline_modulate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_outline_modulate")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Label3D::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String Label3D::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Label3D::set_text_direction(TextServer::Direction direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 1418190634);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

TextServer::Direction Label3D::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 2516697328);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String Label3D::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Label3D::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser Label3D::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array Label3D::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

void Label3D::set_uppercase(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_uppercase")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Label3D::is_uppercase() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("is_uppercase")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Label3D::set_render_priority(int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_render_priority")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

int32_t Label3D::get_render_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_render_priority")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_outline_render_priority(int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_outline_render_priority")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

int32_t Label3D::get_outline_render_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_outline_render_priority")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_font(const Ref<Font> &font) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_font")._native_ptr(), 1262170328);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr));
}

Ref<Font> Label3D::get_font() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_font")._native_ptr(), 3229501585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner));
}

void Label3D::set_font_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_font_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t Label3D::get_font_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_font_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_outline_size(int32_t outline_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_outline_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &outline_size_encoded);
}

int32_t Label3D::get_outline_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_outline_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_line_spacing(double line_spacing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_line_spacing")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double line_spacing_encoded;
	PtrToArg<double>::encode(line_spacing, &line_spacing_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_spacing_encoded);
}

double Label3D::get_line_spacing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_line_spacing")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label3D::set_autowrap_mode(TextServer::AutowrapMode autowrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_autowrap_mode")._native_ptr(), 3289138044);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &autowrap_mode);
}

TextServer::AutowrapMode Label3D::get_autowrap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_autowrap_mode")._native_ptr(), 1549071663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::AutowrapMode(0));
	return (TextServer::AutowrapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_justification_flags(BitField<TextServer::JustificationFlag> justification_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_justification_flags")._native_ptr(), 2877345813);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &justification_flags);
}

BitField<TextServer::JustificationFlag> Label3D::get_justification_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_justification_flags")._native_ptr(), 1583363614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::JustificationFlag>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_width(double width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_width")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

double Label3D::get_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label3D::set_pixel_size(double pixel_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_pixel_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pixel_size_encoded;
	PtrToArg<double>::encode(pixel_size, &pixel_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixel_size_encoded);
}

double Label3D::get_pixel_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_pixel_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label3D::set_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 Label3D::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Label3D::set_draw_flag(Label3D::DrawFlags flag, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_draw_flag")._native_ptr(), 1285833066);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flag, &enabled_encoded);
}

bool Label3D::get_draw_flag(Label3D::DrawFlags flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_draw_flag")._native_ptr(), 259226453);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &flag);
}

void Label3D::set_billboard_mode(BaseMaterial3D::BillboardMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_billboard_mode")._native_ptr(), 4202036497);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

BaseMaterial3D::BillboardMode Label3D::get_billboard_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_billboard_mode")._native_ptr(), 1283840139);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::BillboardMode(0));
	return (BaseMaterial3D::BillboardMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_alpha_cut_mode(Label3D::AlphaCutMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_alpha_cut_mode")._native_ptr(), 2549142916);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Label3D::AlphaCutMode Label3D::get_alpha_cut_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_alpha_cut_mode")._native_ptr(), 219468601);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Label3D::AlphaCutMode(0));
	return (Label3D::AlphaCutMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_alpha_scissor_threshold(double threshold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_alpha_scissor_threshold")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double threshold_encoded;
	PtrToArg<double>::encode(threshold, &threshold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &threshold_encoded);
}

double Label3D::get_alpha_scissor_threshold() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_alpha_scissor_threshold")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label3D::set_alpha_hash_scale(double threshold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_alpha_hash_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double threshold_encoded;
	PtrToArg<double>::encode(threshold, &threshold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &threshold_encoded);
}

double Label3D::get_alpha_hash_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_alpha_hash_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label3D::set_alpha_antialiasing(BaseMaterial3D::AlphaAntiAliasing alpha_aa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_alpha_antialiasing")._native_ptr(), 3212649852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alpha_aa);
}

BaseMaterial3D::AlphaAntiAliasing Label3D::get_alpha_antialiasing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_alpha_antialiasing")._native_ptr(), 2889939400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::AlphaAntiAliasing(0));
	return (BaseMaterial3D::AlphaAntiAliasing)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label3D::set_alpha_antialiasing_edge(double edge) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_alpha_antialiasing_edge")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double edge_encoded;
	PtrToArg<double>::encode(edge, &edge_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &edge_encoded);
}

double Label3D::get_alpha_antialiasing_edge() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_alpha_antialiasing_edge")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label3D::set_texture_filter(BaseMaterial3D::TextureFilter mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("set_texture_filter")._native_ptr(), 22904437);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

BaseMaterial3D::TextureFilter Label3D::get_texture_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("get_texture_filter")._native_ptr(), 3289213076);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseMaterial3D::TextureFilter(0));
	return (BaseMaterial3D::TextureFilter)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Ref<TriangleMesh> Label3D::generate_triangle_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label3D::get_class_static()._native_ptr(), StringName("generate_triangle_mesh")._native_ptr(), 3476533166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<TriangleMesh>());
	return Ref<TriangleMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<TriangleMesh>(_gde_method_bind, _owner));
}


} // namespace godot 