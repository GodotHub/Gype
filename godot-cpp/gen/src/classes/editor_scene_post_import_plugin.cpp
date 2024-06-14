/**************************************************************************/
/*  editor_scene_post_import_plugin.cpp                                   */
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

#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {


Variant EditorScenePostImportPlugin::get_option_value(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorScenePostImportPlugin::get_class_static()._native_ptr(), StringName("get_option_value")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name);
}

void EditorScenePostImportPlugin::add_import_option(const String &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorScenePostImportPlugin::get_class_static()._native_ptr(), StringName("add_import_option")._native_ptr(), 402577236);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

void EditorScenePostImportPlugin::add_import_option_advanced(Variant::Type type, const String &name, const Variant &default_value, PropertyHint hint, const String &hint_string, int32_t usage_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorScenePostImportPlugin::get_class_static()._native_ptr(), StringName("add_import_option_advanced")._native_ptr(), 3674075649);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t usage_flags_encoded;
	PtrToArg<int64_t>::encode(usage_flags, &usage_flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &name, &default_value, &hint, &hint_string, &usage_flags_encoded);
}

void EditorScenePostImportPlugin::_get_internal_import_options(int32_t category) {}

Variant EditorScenePostImportPlugin::_get_internal_option_visibility(int32_t category, bool for_animation, const String &option) const {
	return Variant();
}

Variant EditorScenePostImportPlugin::_get_internal_option_update_view_required(int32_t category, const String &option) const {
	return Variant();
}

void EditorScenePostImportPlugin::_internal_process(int32_t category, Node *base_node, Node *node, const Ref<Resource> &resource) {}

void EditorScenePostImportPlugin::_get_import_options(const String &path) {}

Variant EditorScenePostImportPlugin::_get_option_visibility(const String &path, bool for_animation, const String &option) const {
	return Variant();
}

void EditorScenePostImportPlugin::_pre_process(Node *scene) {}

void EditorScenePostImportPlugin::_post_process(Node *scene) {}


} // namespace godot 