/**************************************************************************/
/*  editor_file_dialog.cpp                                                */
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

#include <godot_cpp/classes/editor_file_dialog.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/v_box_container.hpp>

namespace godot {

void EditorFileDialog::clear_filters() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("clear_filters")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorFileDialog::add_filter(const String &filter, const String &description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("add_filter")._native_ptr(), 3388804757);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter, &description);
}

void EditorFileDialog::set_filters(const PackedStringArray &filters) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_filters")._native_ptr(), 4015028928);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filters);
}

PackedStringArray EditorFileDialog::get_filters() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_filters")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String EditorFileDialog::get_current_dir() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_current_dir")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String EditorFileDialog::get_current_file() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_current_file")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String EditorFileDialog::get_current_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_current_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void EditorFileDialog::set_current_dir(const String &dir) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_current_dir")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &dir);
}

void EditorFileDialog::set_current_file(const String &file) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_current_file")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &file);
}

void EditorFileDialog::set_current_path(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_current_path")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void EditorFileDialog::set_file_mode(EditorFileDialog::FileMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_file_mode")._native_ptr(), 274150415);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

EditorFileDialog::FileMode EditorFileDialog::get_file_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_file_mode")._native_ptr(), 2681044145);
	CHECK_METHOD_BIND_RET(_gde_method_bind, EditorFileDialog::FileMode(0));
	return (EditorFileDialog::FileMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

VBoxContainer *EditorFileDialog::get_vbox() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_vbox")._native_ptr(), 915758477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<VBoxContainer>(_gde_method_bind, _owner);
}

LineEdit *EditorFileDialog::get_line_edit() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_line_edit")._native_ptr(), 4071694264);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<LineEdit>(_gde_method_bind, _owner);
}

void EditorFileDialog::set_access(EditorFileDialog::Access access) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_access")._native_ptr(), 3882893764);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &access);
}

EditorFileDialog::Access EditorFileDialog::get_access() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_access")._native_ptr(), 778734016);
	CHECK_METHOD_BIND_RET(_gde_method_bind, EditorFileDialog::Access(0));
	return (EditorFileDialog::Access)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void EditorFileDialog::set_show_hidden_files(bool show) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_show_hidden_files")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t show_encoded;
	PtrToArg<bool>::encode(show, &show_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &show_encoded);
}

bool EditorFileDialog::is_showing_hidden_files() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("is_showing_hidden_files")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorFileDialog::set_display_mode(EditorFileDialog::DisplayMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_display_mode")._native_ptr(), 3049004050);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

EditorFileDialog::DisplayMode EditorFileDialog::get_display_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("get_display_mode")._native_ptr(), 3517174669);
	CHECK_METHOD_BIND_RET(_gde_method_bind, EditorFileDialog::DisplayMode(0));
	return (EditorFileDialog::DisplayMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void EditorFileDialog::set_disable_overwrite_warning(bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("set_disable_overwrite_warning")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disable_encoded);
}

bool EditorFileDialog::is_overwrite_warning_disabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("is_overwrite_warning_disabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorFileDialog::add_side_menu(Control *menu, const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("add_side_menu")._native_ptr(), 402368861);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (menu != nullptr ? &menu->_owner : nullptr), &title);
}

void EditorFileDialog::invalidate() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorFileDialog::get_class_static()._native_ptr(), StringName("invalidate")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 