/**************************************************************************/
/*  undo_redo.cpp                                                         */
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

#include <godot_cpp/classes/undo_redo.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

namespace godot {

void UndoRedo::create_action(const String &name, UndoRedo::MergeMode merge_mode, bool backward_undo_ops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("create_action")._native_ptr(), 3171901514);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t backward_undo_ops_encoded;
	PtrToArg<bool>::encode(backward_undo_ops, &backward_undo_ops_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &merge_mode, &backward_undo_ops_encoded);
}

void UndoRedo::commit_action(bool execute) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("commit_action")._native_ptr(), 3216645846);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t execute_encoded;
	PtrToArg<bool>::encode(execute, &execute_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &execute_encoded);
}

bool UndoRedo::is_committing_action() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("is_committing_action")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void UndoRedo::add_do_method(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("add_do_method")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callable);
}

void UndoRedo::add_undo_method(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("add_undo_method")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callable);
}

void UndoRedo::add_do_property(Object *object, const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("add_do_property")._native_ptr(), 1017172818);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property, &value);
}

void UndoRedo::add_undo_property(Object *object, const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("add_undo_property")._native_ptr(), 1017172818);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property, &value);
}

void UndoRedo::add_do_reference(Object *object) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("add_do_reference")._native_ptr(), 3975164845);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr));
}

void UndoRedo::add_undo_reference(Object *object) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("add_undo_reference")._native_ptr(), 3975164845);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr));
}

void UndoRedo::start_force_keep_in_merge_ends() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("start_force_keep_in_merge_ends")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void UndoRedo::end_force_keep_in_merge_ends() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("end_force_keep_in_merge_ends")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

int32_t UndoRedo::get_history_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("get_history_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t UndoRedo::get_current_action() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("get_current_action")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

String UndoRedo::get_action_name(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("get_action_name")._native_ptr(), 990163283);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &id_encoded);
}

void UndoRedo::clear_history(bool increase_version) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("clear_history")._native_ptr(), 3216645846);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t increase_version_encoded;
	PtrToArg<bool>::encode(increase_version, &increase_version_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &increase_version_encoded);
}

String UndoRedo::get_current_action_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("get_current_action_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool UndoRedo::has_undo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("has_undo")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool UndoRedo::has_redo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("has_redo")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

uint64_t UndoRedo::get_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("get_version")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

bool UndoRedo::redo() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("redo")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool UndoRedo::undo() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UndoRedo::get_class_static()._native_ptr(), StringName("undo")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 