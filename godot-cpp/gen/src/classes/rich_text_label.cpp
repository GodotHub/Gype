/**************************************************************************/
/*  rich_text_label.cpp                                                   */
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

#include <godot_cpp/classes/rich_text_label.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/vector2.hpp>

namespace godot {

String RichTextLabel::get_parsed_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_parsed_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void RichTextLabel::add_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("add_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

void RichTextLabel::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

void RichTextLabel::add_image(const Ref<Texture2D> &image, int32_t width, int32_t height, const Color &color, InlineAlignment inline_align, const Rect2 &region, const Variant &key, bool pad, const String &tooltip, bool size_in_percent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("add_image")._native_ptr(), 3017663154);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t pad_encoded;
	PtrToArg<bool>::encode(pad, &pad_encoded);
	int8_t size_in_percent_encoded;
	PtrToArg<bool>::encode(size_in_percent, &size_in_percent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (image != nullptr ? &image->_owner : nullptr), &width_encoded, &height_encoded, &color, &inline_align, &region, &key, &pad_encoded, &tooltip, &size_in_percent_encoded);
}

void RichTextLabel::update_image(const Variant &key, BitField<RichTextLabel::ImageUpdateMask> mask, const Ref<Texture2D> &image, int32_t width, int32_t height, const Color &color, InlineAlignment inline_align, const Rect2 &region, bool pad, const String &tooltip, bool size_in_percent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("update_image")._native_ptr(), 815048486);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t pad_encoded;
	PtrToArg<bool>::encode(pad, &pad_encoded);
	int8_t size_in_percent_encoded;
	PtrToArg<bool>::encode(size_in_percent, &size_in_percent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &key, &mask, (image != nullptr ? &image->_owner : nullptr), &width_encoded, &height_encoded, &color, &inline_align, &region, &pad_encoded, &tooltip, &size_in_percent_encoded);
}

void RichTextLabel::newline() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("newline")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool RichTextLabel::remove_paragraph(int32_t paragraph, bool no_invalidate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("remove_paragraph")._native_ptr(), 3262369265);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t paragraph_encoded;
	PtrToArg<int64_t>::encode(paragraph, &paragraph_encoded);
	int8_t no_invalidate_encoded;
	PtrToArg<bool>::encode(no_invalidate, &no_invalidate_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &paragraph_encoded, &no_invalidate_encoded);
}

bool RichTextLabel::invalidate_paragraph(int32_t paragraph) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("invalidate_paragraph")._native_ptr(), 3067735520);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t paragraph_encoded;
	PtrToArg<int64_t>::encode(paragraph, &paragraph_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &paragraph_encoded);
}

void RichTextLabel::push_font(const Ref<Font> &font, int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_font")._native_ptr(), 2347424842);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &font_size_encoded);
}

void RichTextLabel::push_font_size(int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_font_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_size_encoded);
}

void RichTextLabel::push_normal() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_normal")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_bold() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_bold")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_bold_italics() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_bold_italics")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_italics() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_italics")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_mono() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_mono")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

void RichTextLabel::push_outline_size(int32_t outline_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_outline_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &outline_size_encoded);
}

void RichTextLabel::push_outline_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_outline_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

void RichTextLabel::push_paragraph(HorizontalAlignment alignment, Control::TextDirection base_direction, const String &language, TextServer::StructuredTextParser st_parser, BitField<TextServer::JustificationFlag> justification_flags, const PackedFloat32Array &tab_stops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_paragraph")._native_ptr(), 3089306873);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment, &base_direction, &language, &st_parser, &justification_flags, &tab_stops);
}

void RichTextLabel::push_indent(int32_t level) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_indent")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t level_encoded;
	PtrToArg<int64_t>::encode(level, &level_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &level_encoded);
}

void RichTextLabel::push_list(int32_t level, RichTextLabel::ListType type, bool capitalize, const String &bullet) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_list")._native_ptr(), 3017143144);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t level_encoded;
	PtrToArg<int64_t>::encode(level, &level_encoded);
	int8_t capitalize_encoded;
	PtrToArg<bool>::encode(capitalize, &capitalize_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &level_encoded, &type, &capitalize_encoded, &bullet);
}

void RichTextLabel::push_meta(const Variant &data, RichTextLabel::MetaUnderline underline_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_meta")._native_ptr(), 2206155733);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data, &underline_mode);
}

void RichTextLabel::push_hint(const String &description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_hint")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &description);
}

void RichTextLabel::push_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

void RichTextLabel::push_underline() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_underline")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_strikethrough() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_strikethrough")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_table(int32_t columns, InlineAlignment inline_align, int32_t align_to_row) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_table")._native_ptr(), 2623499273);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t columns_encoded;
	PtrToArg<int64_t>::encode(columns, &columns_encoded);
	int64_t align_to_row_encoded;
	PtrToArg<int64_t>::encode(align_to_row, &align_to_row_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &columns_encoded, &inline_align, &align_to_row_encoded);
}

void RichTextLabel::push_dropcap(const String &string, const Ref<Font> &font, int32_t size, const Rect2 &dropcap_margins, const Color &color, int32_t outline_size, const Color &outline_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_dropcap")._native_ptr(), 4061635501);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &string, (font != nullptr ? &font->_owner : nullptr), &size_encoded, &dropcap_margins, &color, &outline_size_encoded, &outline_color);
}

void RichTextLabel::set_table_column_expand(int32_t column, bool expand, int32_t ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_table_column_expand")._native_ptr(), 2185176273);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t expand_encoded;
	PtrToArg<bool>::encode(expand, &expand_encoded);
	int64_t ratio_encoded;
	PtrToArg<int64_t>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &expand_encoded, &ratio_encoded);
}

void RichTextLabel::set_cell_row_background_color(const Color &odd_row_bg, const Color &even_row_bg) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_cell_row_background_color")._native_ptr(), 3465483165);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &odd_row_bg, &even_row_bg);
}

void RichTextLabel::set_cell_border_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_cell_border_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

void RichTextLabel::set_cell_size_override(const Vector2 &min_size, const Vector2 &max_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_cell_size_override")._native_ptr(), 3108078480);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_size, &max_size);
}

void RichTextLabel::set_cell_padding(const Rect2 &padding) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_cell_padding")._native_ptr(), 2046264180);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &padding);
}

void RichTextLabel::push_cell() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_cell")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::push_fgcolor(const Color &fgcolor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_fgcolor")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fgcolor);
}

void RichTextLabel::push_bgcolor(const Color &bgcolor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_bgcolor")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bgcolor);
}

void RichTextLabel::push_customfx(const Ref<RichTextEffect> &effect, const Dictionary &env) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_customfx")._native_ptr(), 2337942958);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (effect != nullptr ? &effect->_owner : nullptr), &env);
}

void RichTextLabel::push_context() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("push_context")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::pop_context() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("pop_context")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::pop() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("pop")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::pop_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("pop_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser RichTextLabel::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array RichTextLabel::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

void RichTextLabel::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection RichTextLabel::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String RichTextLabel::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void RichTextLabel::set_autowrap_mode(TextServer::AutowrapMode autowrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_autowrap_mode")._native_ptr(), 3289138044);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &autowrap_mode);
}

TextServer::AutowrapMode RichTextLabel::get_autowrap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_autowrap_mode")._native_ptr(), 1549071663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::AutowrapMode(0));
	return (TextServer::AutowrapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_meta_underline(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_meta_underline")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool RichTextLabel::is_meta_underlined() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_meta_underlined")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_hint_underline(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_hint_underline")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool RichTextLabel::is_hint_underlined() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_hint_underlined")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_scroll_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_scroll_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

bool RichTextLabel::is_scroll_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_scroll_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_scroll_follow(bool follow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_scroll_follow")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t follow_encoded;
	PtrToArg<bool>::encode(follow, &follow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &follow_encoded);
}

bool RichTextLabel::is_scroll_following() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_scroll_following")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

VScrollBar *RichTextLabel::get_v_scroll_bar() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_v_scroll_bar")._native_ptr(), 2630340773);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<VScrollBar>(_gde_method_bind, _owner);
}

void RichTextLabel::scroll_to_line(int32_t line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("scroll_to_line")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded);
}

void RichTextLabel::scroll_to_paragraph(int32_t paragraph) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("scroll_to_paragraph")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t paragraph_encoded;
	PtrToArg<int64_t>::encode(paragraph, &paragraph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &paragraph_encoded);
}

void RichTextLabel::scroll_to_selection() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("scroll_to_selection")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::set_tab_size(int32_t spaces) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_tab_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t spaces_encoded;
	PtrToArg<int64_t>::encode(spaces, &spaces_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &spaces_encoded);
}

int32_t RichTextLabel::get_tab_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_tab_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_fit_content(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_fit_content")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool RichTextLabel::is_fit_content_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_fit_content_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_selection_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_selection_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool RichTextLabel::is_selection_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_selection_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_context_menu_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_context_menu_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool RichTextLabel::is_context_menu_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_context_menu_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_shortcut_keys_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_shortcut_keys_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool RichTextLabel::is_shortcut_keys_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_shortcut_keys_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_deselect_on_focus_loss_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_deselect_on_focus_loss_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool RichTextLabel::is_deselect_on_focus_loss_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_deselect_on_focus_loss_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_drag_and_drop_selection_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_drag_and_drop_selection_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool RichTextLabel::is_drag_and_drop_selection_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_drag_and_drop_selection_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_selection_from() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_selection_from")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_selection_to() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_selection_to")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::select_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("select_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

String RichTextLabel::get_selected_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_selected_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void RichTextLabel::deselect() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("deselect")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RichTextLabel::parse_bbcode(const String &bbcode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("parse_bbcode")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bbcode);
}

void RichTextLabel::append_text(const String &bbcode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("append_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bbcode);
}

String RichTextLabel::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool RichTextLabel::is_ready() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_ready")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_threaded(bool threaded) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_threaded")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t threaded_encoded;
	PtrToArg<bool>::encode(threaded, &threaded_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &threaded_encoded);
}

bool RichTextLabel::is_threaded() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_threaded")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_progress_bar_delay(int32_t delay_ms) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_progress_bar_delay")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t delay_ms_encoded;
	PtrToArg<int64_t>::encode(delay_ms, &delay_ms_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &delay_ms_encoded);
}

int32_t RichTextLabel::get_progress_bar_delay() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_progress_bar_delay")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_visible_characters(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_visible_characters")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t RichTextLabel::get_visible_characters() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_visible_characters")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TextServer::VisibleCharactersBehavior RichTextLabel::get_visible_characters_behavior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_visible_characters_behavior")._native_ptr(), 258789322);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::VisibleCharactersBehavior(0));
	return (TextServer::VisibleCharactersBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_visible_characters_behavior(TextServer::VisibleCharactersBehavior behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_visible_characters_behavior")._native_ptr(), 3383839701);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &behavior);
}

void RichTextLabel::set_visible_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_visible_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double RichTextLabel::get_visible_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_visible_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_character_line(int32_t character) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_character_line")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t character_encoded;
	PtrToArg<int64_t>::encode(character, &character_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &character_encoded);
}

int32_t RichTextLabel::get_character_paragraph(int32_t character) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_character_paragraph")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t character_encoded;
	PtrToArg<int64_t>::encode(character, &character_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &character_encoded);
}

int32_t RichTextLabel::get_total_character_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_total_character_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RichTextLabel::set_use_bbcode(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_use_bbcode")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool RichTextLabel::is_using_bbcode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_using_bbcode")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_visible_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_visible_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_paragraph_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_paragraph_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_visible_paragraph_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_visible_paragraph_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_content_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_content_height")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t RichTextLabel::get_content_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_content_width")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double RichTextLabel::get_line_offset(int32_t line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_line_offset")._native_ptr(), 4025615559);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded);
}

double RichTextLabel::get_paragraph_offset(int32_t paragraph) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_paragraph_offset")._native_ptr(), 4025615559);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t paragraph_encoded;
	PtrToArg<int64_t>::encode(paragraph, &paragraph_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &paragraph_encoded);
}

Dictionary RichTextLabel::parse_expressions_for_values(const PackedStringArray &expressions) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("parse_expressions_for_values")._native_ptr(), 1522900837);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &expressions);
}

void RichTextLabel::set_effects(const Array &effects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("set_effects")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &effects);
}

Array RichTextLabel::get_effects() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_effects")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

void RichTextLabel::install_effect(const Variant &effect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("install_effect")._native_ptr(), 1114965689);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &effect);
}

PopupMenu *RichTextLabel::get_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("get_menu")._native_ptr(), 229722558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner);
}

bool RichTextLabel::is_menu_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("is_menu_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RichTextLabel::menu_option(int32_t option) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RichTextLabel::get_class_static()._native_ptr(), StringName("menu_option")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &option_encoded);
}


} // namespace godot 