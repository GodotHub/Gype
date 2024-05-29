/**************************************************************************/
/*  font.cpp                                                              */
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

#include <godot_cpp/classes/font.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void Font::set_fallbacks(const TypedArray<Font> &fallbacks) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("set_fallbacks")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fallbacks);
}

TypedArray<Font> Font::get_fallbacks() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_fallbacks")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Font>());
	return internal::_call_native_mb_ret<TypedArray<Font>>(_gde_method_bind, _owner);
}

RID Font::find_variation(const Dictionary &variation_coordinates, int32_t face_index, double strength, const Transform2D &transform, int32_t spacing_top, int32_t spacing_bottom, int32_t spacing_space, int32_t spacing_glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("find_variation")._native_ptr(), 3344325384);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t face_index_encoded;
	PtrToArg<int64_t>::encode(face_index, &face_index_encoded);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	int64_t spacing_top_encoded;
	PtrToArg<int64_t>::encode(spacing_top, &spacing_top_encoded);
	int64_t spacing_bottom_encoded;
	PtrToArg<int64_t>::encode(spacing_bottom, &spacing_bottom_encoded);
	int64_t spacing_space_encoded;
	PtrToArg<int64_t>::encode(spacing_space, &spacing_space_encoded);
	int64_t spacing_glyph_encoded;
	PtrToArg<int64_t>::encode(spacing_glyph, &spacing_glyph_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &variation_coordinates, &face_index_encoded, &strength_encoded, &transform, &spacing_top_encoded, &spacing_bottom_encoded, &spacing_space_encoded, &spacing_glyph_encoded);
}

TypedArray<RID> Font::get_rids() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_rids")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<RID>());
	return internal::_call_native_mb_ret<TypedArray<RID>>(_gde_method_bind, _owner);
}

double Font::get_height(int32_t font_size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_height")._native_ptr(), 378113874);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_size_encoded);
}

double Font::get_ascent(int32_t font_size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_ascent")._native_ptr(), 378113874);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_size_encoded);
}

double Font::get_descent(int32_t font_size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_descent")._native_ptr(), 378113874);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_size_encoded);
}

double Font::get_underline_position(int32_t font_size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_underline_position")._native_ptr(), 378113874);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_size_encoded);
}

double Font::get_underline_thickness(int32_t font_size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_underline_thickness")._native_ptr(), 378113874);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_size_encoded);
}

String Font::get_font_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_font_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String Font::get_font_style_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_font_style_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

Dictionary Font::get_ot_name_strings() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_ot_name_strings")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

BitField<TextServer::FontStyle> Font::get_font_style() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_font_style")._native_ptr(), 2520224254);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::FontStyle>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Font::get_font_weight() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_font_weight")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Font::get_font_stretch() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_font_stretch")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Font::get_spacing(TextServer::SpacingType spacing) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_spacing")._native_ptr(), 1310880908);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &spacing);
}

Dictionary Font::get_opentype_features() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_opentype_features")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

void Font::set_cache_capacity(int32_t single_line, int32_t multi_line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("set_cache_capacity")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t single_line_encoded;
	PtrToArg<int64_t>::encode(single_line, &single_line_encoded);
	int64_t multi_line_encoded;
	PtrToArg<int64_t>::encode(multi_line, &multi_line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &single_line_encoded, &multi_line_encoded);
}

Vector2 Font::get_string_size(const String &text, HorizontalAlignment alignment, double width, int32_t font_size, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_string_size")._native_ptr(), 1868866121);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &text, &alignment, &width_encoded, &font_size_encoded, &justification_flags, &direction, &orientation);
}

Vector2 Font::get_multiline_string_size(const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t max_lines, BitField<TextServer::LineBreakFlag> brk_flags, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_multiline_string_size")._native_ptr(), 519636710);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t max_lines_encoded;
	PtrToArg<int64_t>::encode(max_lines, &max_lines_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &text, &alignment, &width_encoded, &font_size_encoded, &max_lines_encoded, &brk_flags, &justification_flags, &direction, &orientation);
}

void Font::draw_string(const RID &canvas_item, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, const Color &modulate, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("draw_string")._native_ptr(), 1983721962);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_item, &pos, &text, &alignment, &width_encoded, &font_size_encoded, &modulate, &justification_flags, &direction, &orientation);
}

void Font::draw_multiline_string(const RID &canvas_item, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t max_lines, const Color &modulate, BitField<TextServer::LineBreakFlag> brk_flags, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("draw_multiline_string")._native_ptr(), 1171506176);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t max_lines_encoded;
	PtrToArg<int64_t>::encode(max_lines, &max_lines_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_item, &pos, &text, &alignment, &width_encoded, &font_size_encoded, &max_lines_encoded, &modulate, &brk_flags, &justification_flags, &direction, &orientation);
}

void Font::draw_string_outline(const RID &canvas_item, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t size, const Color &modulate, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("draw_string_outline")._native_ptr(), 623754045);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_item, &pos, &text, &alignment, &width_encoded, &font_size_encoded, &size_encoded, &modulate, &justification_flags, &direction, &orientation);
}

void Font::draw_multiline_string_outline(const RID &canvas_item, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t max_lines, int32_t size, const Color &modulate, BitField<TextServer::LineBreakFlag> brk_flags, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("draw_multiline_string_outline")._native_ptr(), 3206388178);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t max_lines_encoded;
	PtrToArg<int64_t>::encode(max_lines, &max_lines_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_item, &pos, &text, &alignment, &width_encoded, &font_size_encoded, &max_lines_encoded, &size_encoded, &modulate, &brk_flags, &justification_flags, &direction, &orientation);
}

Vector2 Font::get_char_size(int64_t _char, int32_t font_size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_char_size")._native_ptr(), 3016396712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &_char_encoded, &font_size_encoded);
}

double Font::draw_char(const RID &canvas_item, const Vector2 &pos, int64_t _char, int32_t font_size, const Color &modulate) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("draw_char")._native_ptr(), 3815617597);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &canvas_item, &pos, &_char_encoded, &font_size_encoded, &modulate);
}

double Font::draw_char_outline(const RID &canvas_item, const Vector2 &pos, int64_t _char, int32_t font_size, int32_t size, const Color &modulate) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("draw_char_outline")._native_ptr(), 209525354);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &canvas_item, &pos, &_char_encoded, &font_size_encoded, &size_encoded, &modulate);
}

bool Font::has_char(int64_t _char) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("has_char")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_char_encoded);
}

String Font::get_supported_chars() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_supported_chars")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool Font::is_language_supported(const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("is_language_supported")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &language);
}

bool Font::is_script_supported(const String &script) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("is_script_supported")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &script);
}

Dictionary Font::get_supported_feature_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_supported_feature_list")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

Dictionary Font::get_supported_variation_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_supported_variation_list")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

int64_t Font::get_face_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Font::get_class_static()._native_ptr(), StringName("get_face_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 