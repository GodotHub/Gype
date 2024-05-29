/**************************************************************************/
/*  project_settings.cpp                                                  */
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

#include <godot_cpp/classes/project_settings.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string_name.hpp>

namespace godot {

ProjectSettings *ProjectSettings::get_singleton() {
	static ProjectSettings *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(ProjectSettings::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<ProjectSettings *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &ProjectSettings::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

bool ProjectSettings::has_setting(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("has_setting")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

void ProjectSettings::set_setting(const String &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("set_setting")._native_ptr(), 402577236);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

Variant ProjectSettings::get_setting(const String &name, const Variant &default_value) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("get_setting")._native_ptr(), 223050753);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name, &default_value);
}

Variant ProjectSettings::get_setting_with_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("get_setting_with_override")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name);
}

TypedArray<Dictionary> ProjectSettings::get_global_class_list() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("get_global_class_list")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

void ProjectSettings::set_order(const String &name, int32_t position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("set_order")._native_ptr(), 2956805083);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &position_encoded);
}

int32_t ProjectSettings::get_order(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("get_order")._native_ptr(), 1321353865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

void ProjectSettings::set_initial_value(const String &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("set_initial_value")._native_ptr(), 402577236);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

void ProjectSettings::set_as_basic(const String &name, bool basic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("set_as_basic")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t basic_encoded;
	PtrToArg<bool>::encode(basic, &basic_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &basic_encoded);
}

void ProjectSettings::set_as_internal(const String &name, bool internal) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("set_as_internal")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t internal_encoded;
	PtrToArg<bool>::encode(internal, &internal_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &internal_encoded);
}

void ProjectSettings::add_property_info(const Dictionary &hint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("add_property_info")._native_ptr(), 4155329257);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hint);
}

void ProjectSettings::set_restart_if_changed(const String &name, bool restart) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("set_restart_if_changed")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t restart_encoded;
	PtrToArg<bool>::encode(restart, &restart_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &restart_encoded);
}

void ProjectSettings::clear(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

String ProjectSettings::localize_path(const String &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("localize_path")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &path);
}

String ProjectSettings::globalize_path(const String &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("globalize_path")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &path);
}

Error ProjectSettings::save() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("save")._native_ptr(), 166280745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool ProjectSettings::load_resource_pack(const String &pack, bool replace_files, int32_t offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("load_resource_pack")._native_ptr(), 708980503);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t replace_files_encoded;
	PtrToArg<bool>::encode(replace_files, &replace_files_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &pack, &replace_files_encoded, &offset_encoded);
}

Error ProjectSettings::save_custom(const String &file) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ProjectSettings::get_class_static()._native_ptr(), StringName("save_custom")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &file);
}


} // namespace godot 