/**************************************************************************/
/*  text_edit.cpp                                                         */
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

#include <godot_cpp/classes/text_edit.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>

namespace godot {

bool TextEdit::has_ime_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("has_ime_text")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::cancel_ime() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("cancel_ime")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::apply_ime() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("apply_ime")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::set_editable(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_editable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_editable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_editable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection TextEdit::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String TextEdit::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void TextEdit::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser TextEdit::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array TextEdit::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

void TextEdit::set_tab_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_tab_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t TextEdit::get_tab_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_tab_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_indent_wrapped_lines(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_indent_wrapped_lines")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_indent_wrapped_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_indent_wrapped_lines")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_overtype_mode_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_overtype_mode_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_overtype_mode_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_overtype_mode_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_context_menu_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_context_menu_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_context_menu_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_context_menu_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_shortcut_keys_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_shortcut_keys_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_shortcut_keys_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_shortcut_keys_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_virtual_keyboard_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_virtual_keyboard_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_virtual_keyboard_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_virtual_keyboard_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_middle_mouse_paste_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_middle_mouse_paste_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_middle_mouse_paste_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_middle_mouse_paste_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String TextEdit::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_placeholder(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_placeholder")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String TextEdit::get_placeholder() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_placeholder")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void TextEdit::set_line(int32_t line, const String &new_text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &new_text);
}

String TextEdit::get_line(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &line_encoded);
}

int32_t TextEdit::get_line_width(int32_t line, int32_t wrap_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_width")._native_ptr(), 688195400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &wrap_index_encoded);
}

int32_t TextEdit::get_line_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_height")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_indent_level(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_indent_level")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded);
}

int32_t TextEdit::get_first_non_whitespace_column(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_first_non_whitespace_column")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded);
}

void TextEdit::swap_lines(int32_t from_line, int32_t to_line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("swap_lines")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_line_encoded, &to_line_encoded);
}

void TextEdit::insert_line_at(int32_t line, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("insert_line_at")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &text);
}

void TextEdit::remove_line_at(int32_t line, bool move_carets_down) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("remove_line_at")._native_ptr(), 972357352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int8_t move_carets_down_encoded;
	PtrToArg<bool>::encode(move_carets_down, &move_carets_down_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &move_carets_down_encoded);
}

void TextEdit::insert_text_at_caret(const String &text, int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("insert_text_at_caret")._native_ptr(), 2697778442);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text, &caret_index_encoded);
}

void TextEdit::insert_text(const String &text, int32_t line, int32_t column, bool before_selection_begin, bool before_selection_end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("insert_text")._native_ptr(), 1881564334);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t before_selection_begin_encoded;
	PtrToArg<bool>::encode(before_selection_begin, &before_selection_begin_encoded);
	int8_t before_selection_end_encoded;
	PtrToArg<bool>::encode(before_selection_end, &before_selection_end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text, &line_encoded, &column_encoded, &before_selection_begin_encoded, &before_selection_end_encoded);
}

void TextEdit::remove_text(int32_t from_line, int32_t from_column, int32_t to_line, int32_t to_column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("remove_text")._native_ptr(), 4275841770);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t from_column_encoded;
	PtrToArg<int64_t>::encode(from_column, &from_column_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	int64_t to_column_encoded;
	PtrToArg<int64_t>::encode(to_column, &to_column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_line_encoded, &from_column_encoded, &to_line_encoded, &to_column_encoded);
}

int32_t TextEdit::get_last_unhidden_line() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_last_unhidden_line")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_next_visible_line_offset_from(int32_t line, int32_t visible_amount) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_next_visible_line_offset_from")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t visible_amount_encoded;
	PtrToArg<int64_t>::encode(visible_amount, &visible_amount_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &visible_amount_encoded);
}

Vector2i TextEdit::get_next_visible_line_index_offset_from(int32_t line, int32_t wrap_index, int32_t visible_amount) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_next_visible_line_index_offset_from")._native_ptr(), 3386475622);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	int64_t visible_amount_encoded;
	PtrToArg<int64_t>::encode(visible_amount, &visible_amount_encoded);
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &line_encoded, &wrap_index_encoded, &visible_amount_encoded);
}

void TextEdit::backspace(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("backspace")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::cut(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("cut")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::copy(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("copy")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::paste(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("paste")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::paste_primary_clipboard(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("paste_primary_clipboard")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::start_action(TextEdit::EditAction action) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("start_action")._native_ptr(), 2834827583);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &action);
}

void TextEdit::end_action() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("end_action")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::begin_complex_operation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("begin_complex_operation")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::end_complex_operation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("end_complex_operation")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool TextEdit::has_undo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("has_undo")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool TextEdit::has_redo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("has_redo")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::undo() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("undo")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::redo() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("redo")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::clear_undo_history() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("clear_undo_history")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::tag_saved_version() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("tag_saved_version")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

uint32_t TextEdit::get_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_version")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint32_t TextEdit::get_saved_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_saved_version")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_search_text(const String &search_text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_search_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &search_text);
}

void TextEdit::set_search_flags(uint32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_search_flags")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags_encoded);
}

Vector2i TextEdit::search(const String &text, uint32_t flags, int32_t from_line, int32_t from_column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("search")._native_ptr(), 1203739136);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t from_column_encoded;
	PtrToArg<int64_t>::encode(from_column, &from_column_encoded);
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &text, &flags_encoded, &from_line_encoded, &from_column_encoded);
}

void TextEdit::set_tooltip_request_func(const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_tooltip_request_func")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callback);
}

Vector2 TextEdit::get_local_mouse_pos() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_local_mouse_pos")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

String TextEdit::get_word_at_pos(const Vector2 &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_word_at_pos")._native_ptr(), 3674420000);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &position);
}

Vector2i TextEdit::get_line_column_at_pos(const Vector2i &position, bool allow_out_of_bounds) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_column_at_pos")._native_ptr(), 239517838);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	int8_t allow_out_of_bounds_encoded;
	PtrToArg<bool>::encode(allow_out_of_bounds, &allow_out_of_bounds_encoded);
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &position, &allow_out_of_bounds_encoded);
}

Vector2i TextEdit::get_pos_at_line_column(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_pos_at_line_column")._native_ptr(), 410388347);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

Rect2i TextEdit::get_rect_at_line_column(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_rect_at_line_column")._native_ptr(), 3256618057);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2i());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Rect2i>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

int32_t TextEdit::get_minimap_line_at_pos(const Vector2i &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_minimap_line_at_pos")._native_ptr(), 2485466453);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

bool TextEdit::is_dragging_cursor() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_dragging_cursor")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool TextEdit::is_mouse_over_selection(bool edges, int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_mouse_over_selection")._native_ptr(), 1840282309);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t edges_encoded;
	PtrToArg<bool>::encode(edges, &edges_encoded);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &edges_encoded, &caret_index_encoded);
}

void TextEdit::set_caret_type(TextEdit::CaretType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_caret_type")._native_ptr(), 1211596914);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

TextEdit::CaretType TextEdit::get_caret_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_type")._native_ptr(), 2830252959);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextEdit::CaretType(0));
	return (TextEdit::CaretType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_caret_blink_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_caret_blink_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_caret_blink_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_caret_blink_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_caret_blink_interval(double interval) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_caret_blink_interval")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double interval_encoded;
	PtrToArg<double>::encode(interval, &interval_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interval_encoded);
}

double TextEdit::get_caret_blink_interval() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_blink_interval")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextEdit::set_draw_caret_when_editable_disabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_draw_caret_when_editable_disabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_drawing_caret_when_editable_disabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_drawing_caret_when_editable_disabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_move_caret_on_right_click_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_move_caret_on_right_click_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_move_caret_on_right_click_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_move_caret_on_right_click_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_caret_mid_grapheme_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_caret_mid_grapheme_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_caret_mid_grapheme_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_caret_mid_grapheme_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_multiple_carets_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_multiple_carets_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_multiple_carets_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_multiple_carets_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::add_caret(int32_t line, int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("add_caret")._native_ptr(), 50157827);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

void TextEdit::remove_caret(int32_t caret) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("remove_caret")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_encoded;
	PtrToArg<int64_t>::encode(caret, &caret_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_encoded);
}

void TextEdit::remove_secondary_carets() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("remove_secondary_carets")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

int32_t TextEdit::get_caret_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::add_caret_at_carets(bool below) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("add_caret_at_carets")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t below_encoded;
	PtrToArg<bool>::encode(below, &below_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &below_encoded);
}

PackedInt32Array TextEdit::get_sorted_carets(bool include_ignored_carets) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_sorted_carets")._native_ptr(), 2131714034);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int8_t include_ignored_carets_encoded;
	PtrToArg<bool>::encode(include_ignored_carets, &include_ignored_carets_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &include_ignored_carets_encoded);
}

void TextEdit::collapse_carets(int32_t from_line, int32_t from_column, int32_t to_line, int32_t to_column, bool inclusive) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("collapse_carets")._native_ptr(), 228654177);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t from_column_encoded;
	PtrToArg<int64_t>::encode(from_column, &from_column_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	int64_t to_column_encoded;
	PtrToArg<int64_t>::encode(to_column, &to_column_encoded);
	int8_t inclusive_encoded;
	PtrToArg<bool>::encode(inclusive, &inclusive_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_line_encoded, &from_column_encoded, &to_line_encoded, &to_column_encoded, &inclusive_encoded);
}

void TextEdit::merge_overlapping_carets() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("merge_overlapping_carets")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::begin_multicaret_edit() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("begin_multicaret_edit")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::end_multicaret_edit() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("end_multicaret_edit")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool TextEdit::is_in_mulitcaret_edit() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_in_mulitcaret_edit")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool TextEdit::multicaret_edit_ignore_caret(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("multicaret_edit_ignore_caret")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

bool TextEdit::is_caret_visible(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_caret_visible")._native_ptr(), 1051549951);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

Vector2 TextEdit::get_caret_draw_pos(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_draw_pos")._native_ptr(), 478253731);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::set_caret_line(int32_t line, bool adjust_viewport, bool can_be_hidden, int32_t wrap_index, int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_caret_line")._native_ptr(), 1302582944);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int8_t adjust_viewport_encoded;
	PtrToArg<bool>::encode(adjust_viewport, &adjust_viewport_encoded);
	int8_t can_be_hidden_encoded;
	PtrToArg<bool>::encode(can_be_hidden, &can_be_hidden_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &adjust_viewport_encoded, &can_be_hidden_encoded, &wrap_index_encoded, &caret_index_encoded);
}

int32_t TextEdit::get_caret_line(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_line")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::set_caret_column(int32_t column, bool adjust_viewport, int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_caret_column")._native_ptr(), 3796796178);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t adjust_viewport_encoded;
	PtrToArg<bool>::encode(adjust_viewport, &adjust_viewport_encoded);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &adjust_viewport_encoded, &caret_index_encoded);
}

int32_t TextEdit::get_caret_column(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_column")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_caret_wrap_index(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_wrap_index")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

String TextEdit::get_word_under_caret(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_word_under_caret")._native_ptr(), 3929349208);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::set_selecting_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_selecting_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_selecting_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_selecting_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_deselect_on_focus_loss_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_deselect_on_focus_loss_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_deselect_on_focus_loss_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_deselect_on_focus_loss_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_drag_and_drop_selection_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_drag_and_drop_selection_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_drag_and_drop_selection_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_drag_and_drop_selection_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_selection_mode(TextEdit::SelectionMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_selection_mode")._native_ptr(), 1658801786);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

TextEdit::SelectionMode TextEdit::get_selection_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_mode")._native_ptr(), 3750106938);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextEdit::SelectionMode(0));
	return (TextEdit::SelectionMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::select_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("select_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::select_word_under_caret(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("select_word_under_caret")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::add_selection_for_next_occurrence() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("add_selection_for_next_occurrence")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::skip_selection_for_next_occurrence() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("skip_selection_for_next_occurrence")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TextEdit::select(int32_t origin_line, int32_t origin_column, int32_t caret_line, int32_t caret_column, int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("select")._native_ptr(), 2560984452);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t origin_line_encoded;
	PtrToArg<int64_t>::encode(origin_line, &origin_line_encoded);
	int64_t origin_column_encoded;
	PtrToArg<int64_t>::encode(origin_column, &origin_column_encoded);
	int64_t caret_line_encoded;
	PtrToArg<int64_t>::encode(caret_line, &caret_line_encoded);
	int64_t caret_column_encoded;
	PtrToArg<int64_t>::encode(caret_column, &caret_column_encoded);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &origin_line_encoded, &origin_column_encoded, &caret_line_encoded, &caret_column_encoded, &caret_index_encoded);
}

bool TextEdit::has_selection(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("has_selection")._native_ptr(), 2824505868);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

String TextEdit::get_selected_text(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selected_text")._native_ptr(), 2309358862);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_selection_at_line_column(int32_t line, int32_t column, bool include_edges, bool only_selections) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_at_line_column")._native_ptr(), 1810224333);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t include_edges_encoded;
	PtrToArg<bool>::encode(include_edges, &include_edges_encoded);
	int8_t only_selections_encoded;
	PtrToArg<bool>::encode(only_selections, &only_selections_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &column_encoded, &include_edges_encoded, &only_selections_encoded);
}

TypedArray<Vector2i> TextEdit::get_line_ranges_from_carets(bool only_selections, bool merge_adjacent) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_ranges_from_carets")._native_ptr(), 2393089247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector2i>());
	int8_t only_selections_encoded;
	PtrToArg<bool>::encode(only_selections, &only_selections_encoded);
	int8_t merge_adjacent_encoded;
	PtrToArg<bool>::encode(merge_adjacent, &merge_adjacent_encoded);
	return internal::_call_native_mb_ret<TypedArray<Vector2i>>(_gde_method_bind, _owner, &only_selections_encoded, &merge_adjacent_encoded);
}

int32_t TextEdit::get_selection_origin_line(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_origin_line")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_selection_origin_column(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_origin_column")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::set_selection_origin_line(int32_t line, bool can_be_hidden, int32_t wrap_index, int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_selection_origin_line")._native_ptr(), 195434140);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int8_t can_be_hidden_encoded;
	PtrToArg<bool>::encode(can_be_hidden, &can_be_hidden_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &can_be_hidden_encoded, &wrap_index_encoded, &caret_index_encoded);
}

void TextEdit::set_selection_origin_column(int32_t column, int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_selection_origin_column")._native_ptr(), 2230941749);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &caret_index_encoded);
}

int32_t TextEdit::get_selection_from_line(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_from_line")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_selection_from_column(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_from_column")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_selection_to_line(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_to_line")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_selection_to_column(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_to_column")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

bool TextEdit::is_caret_after_selection_origin(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_caret_after_selection_origin")._native_ptr(), 1051549951);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::deselect(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("deselect")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::delete_selection(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("delete_selection")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::set_line_wrapping_mode(TextEdit::LineWrappingMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_wrapping_mode")._native_ptr(), 2525115309);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

TextEdit::LineWrappingMode TextEdit::get_line_wrapping_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_wrapping_mode")._native_ptr(), 3562716114);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextEdit::LineWrappingMode(0));
	return (TextEdit::LineWrappingMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_autowrap_mode(TextServer::AutowrapMode autowrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_autowrap_mode")._native_ptr(), 3289138044);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &autowrap_mode);
}

TextServer::AutowrapMode TextEdit::get_autowrap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_autowrap_mode")._native_ptr(), 1549071663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::AutowrapMode(0));
	return (TextServer::AutowrapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool TextEdit::is_line_wrapped(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_line_wrapped")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

int32_t TextEdit::get_line_wrap_count(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_wrap_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded);
}

int32_t TextEdit::get_line_wrap_index_at_column(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_wrap_index_at_column")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

PackedStringArray TextEdit::get_line_wrapped_text(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_wrapped_text")._native_ptr(), 647634434);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &line_encoded);
}

void TextEdit::set_smooth_scroll_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_smooth_scroll_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_smooth_scroll_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_smooth_scroll_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

VScrollBar *TextEdit::get_v_scroll_bar() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_v_scroll_bar")._native_ptr(), 3226026593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<VScrollBar>(_gde_method_bind, _owner);
}

HScrollBar *TextEdit::get_h_scroll_bar() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_h_scroll_bar")._native_ptr(), 3774687988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<HScrollBar>(_gde_method_bind, _owner);
}

void TextEdit::set_v_scroll(double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_v_scroll")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

double TextEdit::get_v_scroll() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_v_scroll")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextEdit::set_h_scroll(int32_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_h_scroll")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

int32_t TextEdit::get_h_scroll() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_h_scroll")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_scroll_past_end_of_file_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_scroll_past_end_of_file_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TextEdit::is_scroll_past_end_of_file_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_scroll_past_end_of_file_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_v_scroll_speed(double speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_v_scroll_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &speed_encoded);
}

double TextEdit::get_v_scroll_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_v_scroll_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextEdit::set_fit_content_height_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_fit_content_height_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_fit_content_height_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_fit_content_height_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double TextEdit::get_scroll_pos_for_line(int32_t line, int32_t wrap_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_scroll_pos_for_line")._native_ptr(), 3929084198);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &line_encoded, &wrap_index_encoded);
}

void TextEdit::set_line_as_first_visible(int32_t line, int32_t wrap_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_as_first_visible")._native_ptr(), 2230941749);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &wrap_index_encoded);
}

int32_t TextEdit::get_first_visible_line() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_first_visible_line")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_line_as_center_visible(int32_t line, int32_t wrap_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_as_center_visible")._native_ptr(), 2230941749);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &wrap_index_encoded);
}

void TextEdit::set_line_as_last_visible(int32_t line, int32_t wrap_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_as_last_visible")._native_ptr(), 2230941749);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t wrap_index_encoded;
	PtrToArg<int64_t>::encode(wrap_index, &wrap_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &wrap_index_encoded);
}

int32_t TextEdit::get_last_full_visible_line() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_last_full_visible_line")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_last_full_visible_line_wrap_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_last_full_visible_line_wrap_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_visible_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_visible_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_visible_line_count_in_range(int32_t from_line, int32_t to_line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_visible_line_count_in_range")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_line_encoded, &to_line_encoded);
}

int32_t TextEdit::get_total_visible_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_total_visible_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::adjust_viewport_to_caret(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("adjust_viewport_to_caret")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::center_viewport_to_caret(int32_t caret_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("center_viewport_to_caret")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::set_draw_minimap(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_draw_minimap")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_drawing_minimap() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_drawing_minimap")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_minimap_width(int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_minimap_width")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

int32_t TextEdit::get_minimap_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_minimap_width")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_minimap_visible_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_minimap_visible_lines")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::add_gutter(int32_t at) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("add_gutter")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t at_encoded;
	PtrToArg<int64_t>::encode(at, &at_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &at_encoded);
}

void TextEdit::remove_gutter(int32_t gutter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("remove_gutter")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded);
}

int32_t TextEdit::get_gutter_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_gutter_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_gutter_name(int32_t gutter, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded, &name);
}

String TextEdit::get_gutter_name(int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_gutter_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &gutter_encoded);
}

void TextEdit::set_gutter_type(int32_t gutter, TextEdit::GutterType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_type")._native_ptr(), 1088959071);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded, &type);
}

TextEdit::GutterType TextEdit::get_gutter_type(int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_gutter_type")._native_ptr(), 1159699127);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextEdit::GutterType(0));
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return (TextEdit::GutterType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &gutter_encoded);
}

void TextEdit::set_gutter_width(int32_t gutter, int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_width")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded, &width_encoded);
}

int32_t TextEdit::get_gutter_width(int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_gutter_width")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &gutter_encoded);
}

void TextEdit::set_gutter_draw(int32_t gutter, bool draw) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_draw")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	int8_t draw_encoded;
	PtrToArg<bool>::encode(draw, &draw_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded, &draw_encoded);
}

bool TextEdit::is_gutter_drawn(int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_gutter_drawn")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &gutter_encoded);
}

void TextEdit::set_gutter_clickable(int32_t gutter, bool clickable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_clickable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	int8_t clickable_encoded;
	PtrToArg<bool>::encode(clickable, &clickable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded, &clickable_encoded);
}

bool TextEdit::is_gutter_clickable(int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_gutter_clickable")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &gutter_encoded);
}

void TextEdit::set_gutter_overwritable(int32_t gutter, bool overwritable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_overwritable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	int8_t overwritable_encoded;
	PtrToArg<bool>::encode(overwritable, &overwritable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gutter_encoded, &overwritable_encoded);
}

bool TextEdit::is_gutter_overwritable(int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_gutter_overwritable")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &gutter_encoded);
}

void TextEdit::merge_gutters(int32_t from_line, int32_t to_line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("merge_gutters")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_line_encoded, &to_line_encoded);
}

void TextEdit::set_gutter_custom_draw(int32_t column, const Callable &draw_callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_gutter_custom_draw")._native_ptr(), 957362965);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &draw_callback);
}

int32_t TextEdit::get_total_gutter_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_total_gutter_width")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TextEdit::set_line_gutter_metadata(int32_t line, int32_t gutter, const Variant &metadata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_gutter_metadata")._native_ptr(), 2060538656);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &gutter_encoded, &metadata);
}

Variant TextEdit::get_line_gutter_metadata(int32_t line, int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_gutter_metadata")._native_ptr(), 678354945);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &line_encoded, &gutter_encoded);
}

void TextEdit::set_line_gutter_text(int32_t line, int32_t gutter, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_gutter_text")._native_ptr(), 2285447957);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &gutter_encoded, &text);
}

String TextEdit::get_line_gutter_text(int32_t line, int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_gutter_text")._native_ptr(), 1391810591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &line_encoded, &gutter_encoded);
}

void TextEdit::set_line_gutter_icon(int32_t line, int32_t gutter, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_gutter_icon")._native_ptr(), 176101966);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &gutter_encoded, (icon != nullptr ? &icon->_owner : nullptr));
}

Ref<Texture2D> TextEdit::get_line_gutter_icon(int32_t line, int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_gutter_icon")._native_ptr(), 2584904275);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &line_encoded, &gutter_encoded));
}

void TextEdit::set_line_gutter_item_color(int32_t line, int32_t gutter, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_gutter_item_color")._native_ptr(), 3733378741);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &gutter_encoded, &color);
}

Color TextEdit::get_line_gutter_item_color(int32_t line, int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_gutter_item_color")._native_ptr(), 2165839948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &line_encoded, &gutter_encoded);
}

void TextEdit::set_line_gutter_clickable(int32_t line, int32_t gutter, bool clickable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_gutter_clickable")._native_ptr(), 1383440665);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	int8_t clickable_encoded;
	PtrToArg<bool>::encode(clickable, &clickable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &gutter_encoded, &clickable_encoded);
}

bool TextEdit::is_line_gutter_clickable(int32_t line, int32_t gutter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_line_gutter_clickable")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t gutter_encoded;
	PtrToArg<int64_t>::encode(gutter, &gutter_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded, &gutter_encoded);
}

void TextEdit::set_line_background_color(int32_t line, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_line_background_color")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &color);
}

Color TextEdit::get_line_background_color(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_line_background_color")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &line_encoded);
}

void TextEdit::set_syntax_highlighter(const Ref<SyntaxHighlighter> &syntax_highlighter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_syntax_highlighter")._native_ptr(), 2765644541);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (syntax_highlighter != nullptr ? &syntax_highlighter->_owner : nullptr));
}

Ref<SyntaxHighlighter> TextEdit::get_syntax_highlighter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_syntax_highlighter")._native_ptr(), 2721131626);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<SyntaxHighlighter>());
	return Ref<SyntaxHighlighter>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<SyntaxHighlighter>(_gde_method_bind, _owner));
}

void TextEdit::set_highlight_current_line(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_highlight_current_line")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_highlight_current_line_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_highlight_current_line_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_highlight_all_occurrences(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_highlight_all_occurrences")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_highlight_all_occurrences_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_highlight_all_occurrences_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool TextEdit::get_draw_control_chars() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_draw_control_chars")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_draw_control_chars(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_draw_control_chars")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

void TextEdit::set_draw_tabs(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_draw_tabs")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_drawing_tabs() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_drawing_tabs")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::set_draw_spaces(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("set_draw_spaces")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TextEdit::is_drawing_spaces() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_drawing_spaces")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

PopupMenu *TextEdit::get_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_menu")._native_ptr(), 229722558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner);
}

bool TextEdit::is_menu_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("is_menu_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TextEdit::menu_option(int32_t option) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("menu_option")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &option_encoded);
}

void TextEdit::adjust_carets_after_edit(int32_t caret, int32_t from_line, int32_t from_col, int32_t to_line, int32_t to_col) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("adjust_carets_after_edit")._native_ptr(), 1770277138);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t caret_encoded;
	PtrToArg<int64_t>::encode(caret, &caret_encoded);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t from_col_encoded;
	PtrToArg<int64_t>::encode(from_col, &from_col_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	int64_t to_col_encoded;
	PtrToArg<int64_t>::encode(to_col, &to_col_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &caret_encoded, &from_line_encoded, &from_col_encoded, &to_line_encoded, &to_col_encoded);
}

PackedInt32Array TextEdit::get_caret_index_edit_order() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_caret_index_edit_order")._native_ptr(), 969006518);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

int32_t TextEdit::get_selection_line(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_line")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

int32_t TextEdit::get_selection_column(int32_t caret_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextEdit::get_class_static()._native_ptr(), StringName("get_selection_column")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t caret_index_encoded;
	PtrToArg<int64_t>::encode(caret_index, &caret_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &caret_index_encoded);
}

void TextEdit::_handle_unicode_input(int32_t unicode_char, int32_t caret_index) {}

void TextEdit::_backspace(int32_t caret_index) {}

void TextEdit::_cut(int32_t caret_index) {}

void TextEdit::_copy(int32_t caret_index) {}

void TextEdit::_paste(int32_t caret_index) {}

void TextEdit::_paste_primary_clipboard(int32_t caret_index) {}


} // namespace godot 