/**************************************************************************/
/*  editor_export_plugin.cpp                                              */
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

#include <godot_cpp/classes/editor_export_plugin.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

void EditorExportPlugin::add_shared_object(const String &path, const PackedStringArray &tags, const String &target) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_shared_object")._native_ptr(), 3098291045);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path, &tags, &target);
}

void EditorExportPlugin::add_ios_project_static_lib(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_project_static_lib")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void EditorExportPlugin::add_file(const String &path, const PackedByteArray &file, bool remap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_file")._native_ptr(), 527928637);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t remap_encoded;
	PtrToArg<bool>::encode(remap, &remap_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path, &file, &remap_encoded);
}

void EditorExportPlugin::add_ios_framework(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_framework")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void EditorExportPlugin::add_ios_embedded_framework(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_embedded_framework")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void EditorExportPlugin::add_ios_plist_content(const String &plist_content) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_plist_content")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &plist_content);
}

void EditorExportPlugin::add_ios_linker_flags(const String &flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_linker_flags")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

void EditorExportPlugin::add_ios_bundle_file(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_bundle_file")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void EditorExportPlugin::add_ios_cpp_code(const String &code) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_ios_cpp_code")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &code);
}

void EditorExportPlugin::add_macos_plugin_file(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("add_macos_plugin_file")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

void EditorExportPlugin::skip() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("skip")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Variant EditorExportPlugin::get_option(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorExportPlugin::get_class_static()._native_ptr(), StringName("get_option")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name);
}

void EditorExportPlugin::_export_file(const String &path, const String &type, const PackedStringArray &features) {}

void EditorExportPlugin::_export_begin(const PackedStringArray &features, bool is_debug, const String &path, uint32_t flags) {}

void EditorExportPlugin::_export_end() {}

bool EditorExportPlugin::_begin_customize_resources(const Ref<EditorExportPlatform> &platform, const PackedStringArray &features) const {
	return false;
}

Ref<Resource> EditorExportPlugin::_customize_resource(const Ref<Resource> &resource, const String &path) {
	return Ref<Resource>();
}

bool EditorExportPlugin::_begin_customize_scenes(const Ref<EditorExportPlatform> &platform, const PackedStringArray &features) const {
	return false;
}

Node *EditorExportPlugin::_customize_scene(Node *scene, const String &path) {
	return nullptr;
}

uint64_t EditorExportPlugin::_get_customization_configuration_hash() const {
	return 0;
}

void EditorExportPlugin::_end_customize_scenes() {}

void EditorExportPlugin::_end_customize_resources() {}

TypedArray<Dictionary> EditorExportPlugin::_get_export_options(const Ref<EditorExportPlatform> &platform) const {
	return TypedArray<Dictionary>();
}

bool EditorExportPlugin::_should_update_export_options(const Ref<EditorExportPlatform> &platform) const {
	return false;
}

String EditorExportPlugin::_get_export_option_warning(const Ref<EditorExportPlatform> &platform, const String &option) const {
	return String();
}

PackedStringArray EditorExportPlugin::_get_export_features(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return PackedStringArray();
}

String EditorExportPlugin::_get_name() const {
	return String();
}

bool EditorExportPlugin::_supports_platform(const Ref<EditorExportPlatform> &platform) const {
	return false;
}

PackedStringArray EditorExportPlugin::_get_android_dependencies(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return PackedStringArray();
}

PackedStringArray EditorExportPlugin::_get_android_dependencies_maven_repos(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return PackedStringArray();
}

PackedStringArray EditorExportPlugin::_get_android_libraries(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return PackedStringArray();
}

String EditorExportPlugin::_get_android_manifest_activity_element_contents(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return String();
}

String EditorExportPlugin::_get_android_manifest_application_element_contents(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return String();
}

String EditorExportPlugin::_get_android_manifest_element_contents(const Ref<EditorExportPlatform> &platform, bool debug) const {
	return String();
}


} // namespace godot 