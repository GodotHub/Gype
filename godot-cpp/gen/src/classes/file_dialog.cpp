/**************************************************************************/
/*  file_dialog.cpp                                                       */
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

#include <godot_cpp/classes/file_dialog.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/v_box_container.hpp>

namespace godot {


void FileDialog::clear_filters() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("clear_filters")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void FileDialog::add_filter(const String &filter, const String &description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("add_filter")._native_ptr(), 3388804757);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter, &description);
}

void FileDialog::set_filters(const PackedStringArray &filters) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_filters")._native_ptr(), 4015028928);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filters);
}

PackedStringArray FileDialog::get_filters() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_filters")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String FileDialog::get_option_name(int32_t option) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_option_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &option_encoded);
}

PackedStringArray FileDialog::get_option_values(int32_t option) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_option_values")._native_ptr(), 647634434);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &option_encoded);
}

int32_t FileDialog::get_option_default(int32_t option) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_option_default")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &option_encoded);
}

void FileDialog::set_option_name(int32_t option, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_option_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &option_encoded, &name);
}

void FileDialog::set_option_values(int32_t option, const PackedStringArray &values) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_option_values")._native_ptr(), 3353661094);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &option_encoded, &values);
}

void FileDialog::set_option_default(int32_t option, int32_t default_value_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_option_default")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	int64_t default_value_index_encoded;
	PtrToArg<int64_t>::encode(default_value_index, &default_value_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &option_encoded, &default_value_index_encoded);
}

void FileDialog::set_option_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_option_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t FileDialog::get_option_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_option_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FileDialog::add_option(const String &name, const PackedStringArray &values, int32_t default_value_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("add_option")._native_ptr(), 149592325);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t default_value_index_encoded;
	PtrToArg<int64_t>::encode(default_value_index, &default_value_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &values, &default_value_index_encoded);
}

Dictionary FileDialog::get_selected_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_selected_options")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

String FileDialog::get_current_dir() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_current_dir")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String FileDialog::get_current_file() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_current_file")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String FileDialog::get_current_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_current_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void FileDialog::set_current_dir(const String &dir) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_current_dir")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &dir);
}

void FileDialog::set_current_file(const String &file) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_current_file")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &file);
}

void FileDialog::set_current_path(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_current_path")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void FileDialog::set_mode_overrides_title(bool override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_mode_overrides_title")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t override_encoded;
	PtrToArg<bool>::encode(override, &override_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &override_encoded);
}

bool FileDialog::is_mode_overriding_title() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("is_mode_overriding_title")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FileDialog::set_file_mode(FileDialog::FileMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_file_mode")._native_ptr(), 3654936397);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

FileDialog::FileMode FileDialog::get_file_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_file_mode")._native_ptr(), 4074825319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FileDialog::FileMode(0));
	return (FileDialog::FileMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

VBoxContainer *FileDialog::get_vbox() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_vbox")._native_ptr(), 915758477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<VBoxContainer>(_gde_method_bind, _owner);
}

LineEdit *FileDialog::get_line_edit() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_line_edit")._native_ptr(), 4071694264);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<LineEdit>(_gde_method_bind, _owner);
}

void FileDialog::set_access(FileDialog::Access access) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_access")._native_ptr(), 4104413466);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &access);
}

FileDialog::Access FileDialog::get_access() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_access")._native_ptr(), 3344081076);
	CHECK_METHOD_BIND_RET(_gde_method_bind, FileDialog::Access(0));
	return (FileDialog::Access)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FileDialog::set_root_subfolder(const String &dir) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_root_subfolder")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &dir);
}

String FileDialog::get_root_subfolder() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_root_subfolder")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void FileDialog::set_show_hidden_files(bool show) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_show_hidden_files")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t show_encoded;
	PtrToArg<bool>::encode(show, &show_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &show_encoded);
}

bool FileDialog::is_showing_hidden_files() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("is_showing_hidden_files")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FileDialog::set_use_native_dialog(bool native) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("set_use_native_dialog")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t native_encoded;
	PtrToArg<bool>::encode(native, &native_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &native_encoded);
}

bool FileDialog::get_use_native_dialog() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("get_use_native_dialog")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FileDialog::deselect_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("deselect_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void FileDialog::invalidate() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FileDialog::get_class_static()._native_ptr(), StringName("invalidate")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 