/**************************************************************************/
/*  editor_property.cpp                                                   */
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

#include <godot_cpp/classes/editor_property.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/variant.hpp>

namespace godot {

void EditorProperty::set_label(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_label")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String EditorProperty::get_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("get_label")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void EditorProperty::set_read_only(bool read_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_read_only")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t read_only_encoded;
	PtrToArg<bool>::encode(read_only, &read_only_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &read_only_encoded);
}

bool EditorProperty::is_read_only() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("is_read_only")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorProperty::set_checkable(bool checkable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_checkable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t checkable_encoded;
	PtrToArg<bool>::encode(checkable, &checkable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &checkable_encoded);
}

bool EditorProperty::is_checkable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("is_checkable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorProperty::set_checked(bool checked) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_checked")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t checked_encoded;
	PtrToArg<bool>::encode(checked, &checked_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &checked_encoded);
}

bool EditorProperty::is_checked() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("is_checked")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorProperty::set_draw_warning(bool draw_warning) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_draw_warning")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t draw_warning_encoded;
	PtrToArg<bool>::encode(draw_warning, &draw_warning_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_warning_encoded);
}

bool EditorProperty::is_draw_warning() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("is_draw_warning")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorProperty::set_keying(bool keying) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_keying")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keying_encoded;
	PtrToArg<bool>::encode(keying, &keying_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &keying_encoded);
}

bool EditorProperty::is_keying() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("is_keying")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorProperty::set_deletable(bool deletable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_deletable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t deletable_encoded;
	PtrToArg<bool>::encode(deletable, &deletable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &deletable_encoded);
}

bool EditorProperty::is_deletable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("is_deletable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

StringName EditorProperty::get_edited_property() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("get_edited_property")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

Object *EditorProperty::get_edited_object() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("get_edited_object")._native_ptr(), 2050059866);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Object>(_gde_method_bind, _owner);
}

void EditorProperty::update_property() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("update_property")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorProperty::add_focusable(Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("add_focusable")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (control != nullptr ? &control->_owner : nullptr));
}

void EditorProperty::set_bottom_editor(Control *editor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("set_bottom_editor")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (editor != nullptr ? &editor->_owner : nullptr));
}

void EditorProperty::emit_changed(const StringName &property, const Variant &value, const StringName &field, bool changing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorProperty::get_class_static()._native_ptr(), StringName("emit_changed")._native_ptr(), 3069422438);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t changing_encoded;
	PtrToArg<bool>::encode(changing, &changing_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property, &value, &field, &changing_encoded);
}

void EditorProperty::_update_property() {}

void EditorProperty::_set_read_only(bool read_only) {}


} // namespace godot 