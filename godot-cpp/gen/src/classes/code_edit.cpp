/**************************************************************************/
/*  code_edit.cpp                                                         */
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

#include <godot_cpp/classes/code_edit.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void CodeEdit::set_indent_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_indent_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t CodeEdit::get_indent_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_indent_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_indent_using_spaces(bool use_spaces) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_indent_using_spaces")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_spaces_encoded;
	PtrToArg<bool>::encode(use_spaces, &use_spaces_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_spaces_encoded);
}

bool CodeEdit::is_indent_using_spaces() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_indent_using_spaces")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_auto_indent_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_auto_indent_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_auto_indent_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_auto_indent_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_auto_indent_prefixes(const TypedArray<String> &prefixes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_auto_indent_prefixes")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &prefixes);
}

TypedArray<String> CodeEdit::get_auto_indent_prefixes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_auto_indent_prefixes")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<String>());
	return internal::_call_native_mb_ret<TypedArray<String>>(_gde_method_bind, _owner);
}

void CodeEdit::do_indent() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("do_indent")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::indent_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("indent_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::unindent_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("unindent_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::convert_indent(int32_t from_line, int32_t to_line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("convert_indent")._native_ptr(), 423910286);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_line_encoded;
	PtrToArg<int64_t>::encode(from_line, &from_line_encoded);
	int64_t to_line_encoded;
	PtrToArg<int64_t>::encode(to_line, &to_line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_line_encoded, &to_line_encoded);
}

void CodeEdit::set_auto_brace_completion_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_auto_brace_completion_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_auto_brace_completion_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_auto_brace_completion_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_highlight_matching_braces_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_highlight_matching_braces_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_highlight_matching_braces_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_highlight_matching_braces_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::add_auto_brace_completion_pair(const String &start_key, const String &end_key) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("add_auto_brace_completion_pair")._native_ptr(), 3186203200);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &start_key, &end_key);
}

void CodeEdit::set_auto_brace_completion_pairs(const Dictionary &pairs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_auto_brace_completion_pairs")._native_ptr(), 4155329257);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pairs);
}

Dictionary CodeEdit::get_auto_brace_completion_pairs() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_auto_brace_completion_pairs")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

bool CodeEdit::has_auto_brace_completion_open_key(const String &open_key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("has_auto_brace_completion_open_key")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &open_key);
}

bool CodeEdit::has_auto_brace_completion_close_key(const String &close_key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("has_auto_brace_completion_close_key")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &close_key);
}

String CodeEdit::get_auto_brace_completion_close_key(const String &open_key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_auto_brace_completion_close_key")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &open_key);
}

void CodeEdit::set_draw_breakpoints_gutter(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_draw_breakpoints_gutter")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_drawing_breakpoints_gutter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_drawing_breakpoints_gutter")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_draw_bookmarks_gutter(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_draw_bookmarks_gutter")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_drawing_bookmarks_gutter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_drawing_bookmarks_gutter")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_draw_executing_lines_gutter(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_draw_executing_lines_gutter")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_drawing_executing_lines_gutter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_drawing_executing_lines_gutter")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_line_as_breakpoint(int32_t line, bool breakpointed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_line_as_breakpoint")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int8_t breakpointed_encoded;
	PtrToArg<bool>::encode(breakpointed, &breakpointed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &breakpointed_encoded);
}

bool CodeEdit::is_line_breakpointed(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_breakpointed")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::clear_breakpointed_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("clear_breakpointed_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

PackedInt32Array CodeEdit::get_breakpointed_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_breakpointed_lines")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void CodeEdit::set_line_as_bookmarked(int32_t line, bool bookmarked) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_line_as_bookmarked")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int8_t bookmarked_encoded;
	PtrToArg<bool>::encode(bookmarked, &bookmarked_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &bookmarked_encoded);
}

bool CodeEdit::is_line_bookmarked(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_bookmarked")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::clear_bookmarked_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("clear_bookmarked_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

PackedInt32Array CodeEdit::get_bookmarked_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_bookmarked_lines")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void CodeEdit::set_line_as_executing(int32_t line, bool executing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_line_as_executing")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int8_t executing_encoded;
	PtrToArg<bool>::encode(executing, &executing_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded, &executing_encoded);
}

bool CodeEdit::is_line_executing(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_executing")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::clear_executing_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("clear_executing_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

PackedInt32Array CodeEdit::get_executing_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_executing_lines")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void CodeEdit::set_draw_line_numbers(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_draw_line_numbers")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_draw_line_numbers_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_draw_line_numbers_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_line_numbers_zero_padded(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_line_numbers_zero_padded")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_line_numbers_zero_padded() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_numbers_zero_padded")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_draw_fold_gutter(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_draw_fold_gutter")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_drawing_fold_gutter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_drawing_fold_gutter")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_line_folding_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_line_folding_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool CodeEdit::is_line_folding_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_folding_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool CodeEdit::can_fold_line(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("can_fold_line")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::fold_line(int32_t line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("fold_line")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::unfold_line(int32_t line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("unfold_line")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::fold_all_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("fold_all_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::unfold_all_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("unfold_all_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::toggle_foldable_line(int32_t line) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("toggle_foldable_line")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_encoded);
}

bool CodeEdit::is_line_folded(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_folded")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

TypedArray<int> CodeEdit::get_folded_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_folded_lines")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<int>());
	return internal::_call_native_mb_ret<TypedArray<int>>(_gde_method_bind, _owner);
}

void CodeEdit::create_code_region() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("create_code_region")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

String CodeEdit::get_code_region_start_tag() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_code_region_start_tag")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String CodeEdit::get_code_region_end_tag() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_code_region_end_tag")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void CodeEdit::set_code_region_tags(const String &start, const String &end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_code_region_tags")._native_ptr(), 708800718);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &start, &end);
}

bool CodeEdit::is_line_code_region_start(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_code_region_start")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

bool CodeEdit::is_line_code_region_end(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_line_code_region_end")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &line_encoded);
}

void CodeEdit::add_string_delimiter(const String &start_key, const String &end_key, bool line_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("add_string_delimiter")._native_ptr(), 3146098955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t line_only_encoded;
	PtrToArg<bool>::encode(line_only, &line_only_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &start_key, &end_key, &line_only_encoded);
}

void CodeEdit::remove_string_delimiter(const String &start_key) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("remove_string_delimiter")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &start_key);
}

bool CodeEdit::has_string_delimiter(const String &start_key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("has_string_delimiter")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &start_key);
}

void CodeEdit::set_string_delimiters(const TypedArray<String> &string_delimiters) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_string_delimiters")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &string_delimiters);
}

void CodeEdit::clear_string_delimiters() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("clear_string_delimiters")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

TypedArray<String> CodeEdit::get_string_delimiters() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_string_delimiters")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<String>());
	return internal::_call_native_mb_ret<TypedArray<String>>(_gde_method_bind, _owner);
}

int32_t CodeEdit::is_in_string(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_in_string")._native_ptr(), 688195400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

void CodeEdit::add_comment_delimiter(const String &start_key, const String &end_key, bool line_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("add_comment_delimiter")._native_ptr(), 3146098955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t line_only_encoded;
	PtrToArg<bool>::encode(line_only, &line_only_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &start_key, &end_key, &line_only_encoded);
}

void CodeEdit::remove_comment_delimiter(const String &start_key) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("remove_comment_delimiter")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &start_key);
}

bool CodeEdit::has_comment_delimiter(const String &start_key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("has_comment_delimiter")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &start_key);
}

void CodeEdit::set_comment_delimiters(const TypedArray<String> &comment_delimiters) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_comment_delimiters")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &comment_delimiters);
}

void CodeEdit::clear_comment_delimiters() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("clear_comment_delimiters")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

TypedArray<String> CodeEdit::get_comment_delimiters() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_comment_delimiters")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<String>());
	return internal::_call_native_mb_ret<TypedArray<String>>(_gde_method_bind, _owner);
}

int32_t CodeEdit::is_in_comment(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_in_comment")._native_ptr(), 688195400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

String CodeEdit::get_delimiter_start_key(int32_t delimiter_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_delimiter_start_key")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t delimiter_index_encoded;
	PtrToArg<int64_t>::encode(delimiter_index, &delimiter_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &delimiter_index_encoded);
}

String CodeEdit::get_delimiter_end_key(int32_t delimiter_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_delimiter_end_key")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t delimiter_index_encoded;
	PtrToArg<int64_t>::encode(delimiter_index, &delimiter_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &delimiter_index_encoded);
}

Vector2 CodeEdit::get_delimiter_start_position(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_delimiter_start_position")._native_ptr(), 3016396712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

Vector2 CodeEdit::get_delimiter_end_position(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_delimiter_end_position")._native_ptr(), 3016396712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

void CodeEdit::set_code_hint(const String &code_hint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_code_hint")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &code_hint);
}

void CodeEdit::set_code_hint_draw_below(bool draw_below) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_code_hint_draw_below")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t draw_below_encoded;
	PtrToArg<bool>::encode(draw_below, &draw_below_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_below_encoded);
}

String CodeEdit::get_text_for_code_completion() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_text_for_code_completion")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void CodeEdit::request_code_completion(bool force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("request_code_completion")._native_ptr(), 107499316);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_encoded;
	PtrToArg<bool>::encode(force, &force_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &force_encoded);
}

void CodeEdit::add_code_completion_option(CodeEdit::CodeCompletionKind type, const String &display_text, const String &insert_text, const Color &text_color, const Ref<Resource> &icon, const Variant &value, int32_t location) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("add_code_completion_option")._native_ptr(), 947964390);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t location_encoded;
	PtrToArg<int64_t>::encode(location, &location_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &display_text, &insert_text, &text_color, (icon != nullptr ? &icon->_owner : nullptr), &value, &location_encoded);
}

void CodeEdit::update_code_completion_options(bool force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("update_code_completion_options")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_encoded;
	PtrToArg<bool>::encode(force, &force_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &force_encoded);
}

TypedArray<Dictionary> CodeEdit::get_code_completion_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_code_completion_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

Dictionary CodeEdit::get_code_completion_option(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_code_completion_option")._native_ptr(), 3485342025);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &index_encoded);
}

int32_t CodeEdit::get_code_completion_selected_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_code_completion_selected_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_code_completion_selected_index(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_code_completion_selected_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void CodeEdit::confirm_code_completion(bool replace) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("confirm_code_completion")._native_ptr(), 107499316);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t replace_encoded;
	PtrToArg<bool>::encode(replace, &replace_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &replace_encoded);
}

void CodeEdit::cancel_code_completion() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("cancel_code_completion")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::set_code_completion_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_code_completion_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_code_completion_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_code_completion_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CodeEdit::set_code_completion_prefixes(const TypedArray<String> &prefixes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_code_completion_prefixes")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &prefixes);
}

TypedArray<String> CodeEdit::get_code_completion_prefixes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_code_completion_prefixes")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<String>());
	return internal::_call_native_mb_ret<TypedArray<String>>(_gde_method_bind, _owner);
}

void CodeEdit::set_line_length_guidelines(const TypedArray<int> &guideline_columns) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_line_length_guidelines")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &guideline_columns);
}

TypedArray<int> CodeEdit::get_line_length_guidelines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_line_length_guidelines")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<int>());
	return internal::_call_native_mb_ret<TypedArray<int>>(_gde_method_bind, _owner);
}

void CodeEdit::set_symbol_lookup_on_click_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_symbol_lookup_on_click_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CodeEdit::is_symbol_lookup_on_click_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("is_symbol_lookup_on_click_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String CodeEdit::get_text_for_symbol_lookup() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_text_for_symbol_lookup")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String CodeEdit::get_text_with_cursor_char(int32_t line, int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("get_text_with_cursor_char")._native_ptr(), 1391810591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &line_encoded, &column_encoded);
}

void CodeEdit::set_symbol_lookup_word_as_valid(bool valid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("set_symbol_lookup_word_as_valid")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t valid_encoded;
	PtrToArg<bool>::encode(valid, &valid_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &valid_encoded);
}

void CodeEdit::duplicate_lines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CodeEdit::get_class_static()._native_ptr(), StringName("duplicate_lines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CodeEdit::_confirm_code_completion(bool replace) {}

void CodeEdit::_request_code_completion(bool force) {}

TypedArray<Dictionary> CodeEdit::_filter_code_completion_candidates(const TypedArray<Dictionary> &candidates) const {
	return TypedArray<Dictionary>();
}


} // namespace godot 