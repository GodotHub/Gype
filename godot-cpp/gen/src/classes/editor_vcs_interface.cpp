/**************************************************************************/
/*  editor_vcs_interface.cpp                                              */
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

#include <godot_cpp/classes/editor_vcs_interface.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


Dictionary EditorVCSInterface::create_diff_line(int32_t new_line_no, int32_t old_line_no, const String &content, const String &status) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("create_diff_line")._native_ptr(), 2901184053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t new_line_no_encoded;
	PtrToArg<int64_t>::encode(new_line_no, &new_line_no_encoded);
	int64_t old_line_no_encoded;
	PtrToArg<int64_t>::encode(old_line_no, &old_line_no_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &new_line_no_encoded, &old_line_no_encoded, &content, &status);
}

Dictionary EditorVCSInterface::create_diff_hunk(int32_t old_start, int32_t new_start, int32_t old_lines, int32_t new_lines) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("create_diff_hunk")._native_ptr(), 3784842090);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t old_start_encoded;
	PtrToArg<int64_t>::encode(old_start, &old_start_encoded);
	int64_t new_start_encoded;
	PtrToArg<int64_t>::encode(new_start, &new_start_encoded);
	int64_t old_lines_encoded;
	PtrToArg<int64_t>::encode(old_lines, &old_lines_encoded);
	int64_t new_lines_encoded;
	PtrToArg<int64_t>::encode(new_lines, &new_lines_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &old_start_encoded, &new_start_encoded, &old_lines_encoded, &new_lines_encoded);
}

Dictionary EditorVCSInterface::create_diff_file(const String &new_file, const String &old_file) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("create_diff_file")._native_ptr(), 2723227684);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &new_file, &old_file);
}

Dictionary EditorVCSInterface::create_commit(const String &msg, const String &author, const String &id, int64_t unix_timestamp, int64_t offset_minutes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("create_commit")._native_ptr(), 1075983584);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t unix_timestamp_encoded;
	PtrToArg<int64_t>::encode(unix_timestamp, &unix_timestamp_encoded);
	int64_t offset_minutes_encoded;
	PtrToArg<int64_t>::encode(offset_minutes, &offset_minutes_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &msg, &author, &id, &unix_timestamp_encoded, &offset_minutes_encoded);
}

Dictionary EditorVCSInterface::create_status_file(const String &file_path, EditorVCSInterface::ChangeType change_type, EditorVCSInterface::TreeArea area) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("create_status_file")._native_ptr(), 1083471673);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &file_path, &change_type, &area);
}

Dictionary EditorVCSInterface::add_diff_hunks_into_diff_file(const Dictionary &diff_file, const TypedArray<Dictionary> &diff_hunks) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("add_diff_hunks_into_diff_file")._native_ptr(), 4015243225);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &diff_file, &diff_hunks);
}

Dictionary EditorVCSInterface::add_line_diffs_into_diff_hunk(const Dictionary &diff_hunk, const TypedArray<Dictionary> &line_diffs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("add_line_diffs_into_diff_hunk")._native_ptr(), 4015243225);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &diff_hunk, &line_diffs);
}

void EditorVCSInterface::popup_error(const String &msg) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorVCSInterface::get_class_static()._native_ptr(), StringName("popup_error")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msg);
}

bool EditorVCSInterface::_initialize(const String &project_path) {
	return false;
}

void EditorVCSInterface::_set_credentials(const String &username, const String &password, const String &ssh_public_key_path, const String &ssh_private_key_path, const String &ssh_passphrase) {}

TypedArray<Dictionary> EditorVCSInterface::_get_modified_files_data() {
	return TypedArray<Dictionary>();
}

void EditorVCSInterface::_stage_file(const String &file_path) {}

void EditorVCSInterface::_unstage_file(const String &file_path) {}

void EditorVCSInterface::_discard_file(const String &file_path) {}

void EditorVCSInterface::_commit(const String &msg) {}

TypedArray<Dictionary> EditorVCSInterface::_get_diff(const String &identifier, int32_t area) {
	return TypedArray<Dictionary>();
}

bool EditorVCSInterface::_shut_down() {
	return false;
}

String EditorVCSInterface::_get_vcs_name() {
	return String();
}

TypedArray<Dictionary> EditorVCSInterface::_get_previous_commits(int32_t max_commits) {
	return TypedArray<Dictionary>();
}

TypedArray<String> EditorVCSInterface::_get_branch_list() {
	return TypedArray<String>();
}

TypedArray<String> EditorVCSInterface::_get_remotes() {
	return TypedArray<String>();
}

void EditorVCSInterface::_create_branch(const String &branch_name) {}

void EditorVCSInterface::_remove_branch(const String &branch_name) {}

void EditorVCSInterface::_create_remote(const String &remote_name, const String &remote_url) {}

void EditorVCSInterface::_remove_remote(const String &remote_name) {}

String EditorVCSInterface::_get_current_branch_name() {
	return String();
}

bool EditorVCSInterface::_checkout_branch(const String &branch_name) {
	return false;
}

void EditorVCSInterface::_pull(const String &remote) {}

void EditorVCSInterface::_push(const String &remote, bool force) {}

void EditorVCSInterface::_fetch(const String &remote) {}

TypedArray<Dictionary> EditorVCSInterface::_get_line_diff(const String &file_path, const String &text) {
	return TypedArray<Dictionary>();
}


} // namespace godot 