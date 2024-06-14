/**************************************************************************/
/*  line_edit.cpp                                                         */
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

#include <godot_cpp/classes/line_edit.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {


void LineEdit::set_horizontal_alignment(HorizontalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_horizontal_alignment")._native_ptr(), 2312603777);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

HorizontalAlignment LineEdit::get_horizontal_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_horizontal_alignment")._native_ptr(), 341400642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LineEdit::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void LineEdit::select(int32_t from, int32_t to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("select")._native_ptr(), 1328111411);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	int64_t to_encoded;
	PtrToArg<int64_t>::encode(to, &to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_encoded, &to_encoded);
}

void LineEdit::select_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("select_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void LineEdit::deselect() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("deselect")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool LineEdit::has_selection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("has_selection")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String LineEdit::get_selected_text() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_selected_text")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t LineEdit::get_selection_from_column() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_selection_from_column")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t LineEdit::get_selection_to_column() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_selection_to_column")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LineEdit::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String LineEdit::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool LineEdit::get_draw_control_chars() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_draw_control_chars")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_draw_control_chars(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_draw_control_chars")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void LineEdit::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection LineEdit::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LineEdit::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String LineEdit::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void LineEdit::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser LineEdit::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LineEdit::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array LineEdit::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

void LineEdit::set_placeholder(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_placeholder")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String LineEdit::get_placeholder() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_placeholder")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void LineEdit::set_caret_column(int32_t position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_caret_column")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position_encoded);
}

int32_t LineEdit::get_caret_column() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_caret_column")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double LineEdit::get_scroll_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_scroll_offset")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void LineEdit::set_expand_to_text_length_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_expand_to_text_length_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_expand_to_text_length_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_expand_to_text_length_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_caret_blink_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_caret_blink_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_caret_blink_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_caret_blink_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_caret_mid_grapheme_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_caret_mid_grapheme_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_caret_mid_grapheme_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_caret_mid_grapheme_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_caret_force_displayed(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_caret_force_displayed")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_caret_force_displayed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_caret_force_displayed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_caret_blink_interval(double interval) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_caret_blink_interval")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double interval_encoded;
	PtrToArg<double>::encode(interval, &interval_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interval_encoded);
}

double LineEdit::get_caret_blink_interval() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_caret_blink_interval")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void LineEdit::set_max_length(int32_t chars) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_max_length")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t chars_encoded;
	PtrToArg<int64_t>::encode(chars, &chars_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &chars_encoded);
}

int32_t LineEdit::get_max_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_max_length")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LineEdit::insert_text_at_caret(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("insert_text_at_caret")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

void LineEdit::delete_char_at_caret() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("delete_char_at_caret")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void LineEdit::delete_text(int32_t from_column, int32_t to_column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("delete_text")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_column_encoded;
	PtrToArg<int64_t>::encode(from_column, &from_column_encoded);
	int64_t to_column_encoded;
	PtrToArg<int64_t>::encode(to_column, &to_column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_column_encoded, &to_column_encoded);
}

void LineEdit::set_editable(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_editable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_editable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_editable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_secret(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_secret")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_secret() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_secret")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_secret_character(const String &character) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_secret_character")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &character);
}

String LineEdit::get_secret_character() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_secret_character")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void LineEdit::menu_option(int32_t option) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("menu_option")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &option_encoded);
}

PopupMenu *LineEdit::get_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_menu")._native_ptr(), 229722558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner);
}

bool LineEdit::is_menu_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_menu_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_context_menu_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_context_menu_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_context_menu_enabled() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_context_menu_enabled")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_virtual_keyboard_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_virtual_keyboard_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_virtual_keyboard_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_virtual_keyboard_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_virtual_keyboard_type(LineEdit::VirtualKeyboardType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_virtual_keyboard_type")._native_ptr(), 2696893573);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

LineEdit::VirtualKeyboardType LineEdit::get_virtual_keyboard_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_virtual_keyboard_type")._native_ptr(), 1928699316);
	CHECK_METHOD_BIND_RET(_gde_method_bind, LineEdit::VirtualKeyboardType(0));
	return (LineEdit::VirtualKeyboardType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LineEdit::set_clear_button_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_clear_button_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_clear_button_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_clear_button_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_shortcut_keys_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_shortcut_keys_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_shortcut_keys_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_shortcut_keys_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_middle_mouse_paste_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_middle_mouse_paste_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_middle_mouse_paste_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_middle_mouse_paste_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_selecting_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_selecting_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_selecting_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_selecting_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_deselect_on_focus_loss_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_deselect_on_focus_loss_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_deselect_on_focus_loss_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_deselect_on_focus_loss_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_drag_and_drop_selection_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_drag_and_drop_selection_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool LineEdit::is_drag_and_drop_selection_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_drag_and_drop_selection_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_right_icon(const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_right_icon")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (icon != nullptr ? &icon->_owner : nullptr));
}

Ref<Texture2D> LineEdit::get_right_icon() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("get_right_icon")._native_ptr(), 255860311);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void LineEdit::set_flat(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_flat")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_flat() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_flat")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void LineEdit::set_select_all_on_focus(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("set_select_all_on_focus")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool LineEdit::is_select_all_on_focus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LineEdit::get_class_static()._native_ptr(), StringName("is_select_all_on_focus")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 