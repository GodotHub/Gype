/**************************************************************************/
/*  editor_interface.cpp                                                  */
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

#include <godot_cpp/classes/editor_interface.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/classes/editor_file_system.hpp>
#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/editor_paths.hpp>
#include <godot_cpp/classes/editor_resource_preview.hpp>
#include <godot_cpp/classes/editor_selection.hpp>
#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/window.hpp>

namespace godot {

EditorInterface *EditorInterface::get_singleton() {
	static EditorInterface *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(EditorInterface::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<EditorInterface *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &EditorInterface::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

void EditorInterface::restart_editor(bool save) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("restart_editor")._native_ptr(), 3216645846);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t save_encoded;
	PtrToArg<bool>::encode(save, &save_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &save_encoded);
}

EditorCommandPalette *EditorInterface::get_command_palette() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_command_palette")._native_ptr(), 2471163807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorCommandPalette>(_gde_method_bind, _owner);
}

EditorFileSystem *EditorInterface::get_resource_filesystem() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_resource_filesystem")._native_ptr(), 780151678);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorFileSystem>(_gde_method_bind, _owner);
}

EditorPaths *EditorInterface::get_editor_paths() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_paths")._native_ptr(), 1595760068);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorPaths>(_gde_method_bind, _owner);
}

EditorResourcePreview *EditorInterface::get_resource_previewer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_resource_previewer")._native_ptr(), 943486957);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorResourcePreview>(_gde_method_bind, _owner);
}

EditorSelection *EditorInterface::get_selection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_selection")._native_ptr(), 2690272531);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorSelection>(_gde_method_bind, _owner);
}

Ref<EditorSettings> EditorInterface::get_editor_settings() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_settings")._native_ptr(), 4086932459);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<EditorSettings>());
	return Ref<EditorSettings>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<EditorSettings>(_gde_method_bind, _owner));
}

TypedArray<Texture2D> EditorInterface::make_mesh_previews(const TypedArray<Mesh> &meshes, int32_t preview_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("make_mesh_previews")._native_ptr(), 878078554);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Texture2D>());
	int64_t preview_size_encoded;
	PtrToArg<int64_t>::encode(preview_size, &preview_size_encoded);
	return internal::_call_native_mb_ret<TypedArray<Texture2D>>(_gde_method_bind, _owner, &meshes, &preview_size_encoded);
}

void EditorInterface::set_plugin_enabled(const String &plugin, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("set_plugin_enabled")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &plugin, &enabled_encoded);
}

bool EditorInterface::is_plugin_enabled(const String &plugin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("is_plugin_enabled")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &plugin);
}

Ref<Theme> EditorInterface::get_editor_theme() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_theme")._native_ptr(), 3846893731);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Theme>());
	return Ref<Theme>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Theme>(_gde_method_bind, _owner));
}

Control *EditorInterface::get_base_control() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_base_control")._native_ptr(), 2783021301);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Control>(_gde_method_bind, _owner);
}

VBoxContainer *EditorInterface::get_editor_main_screen() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_main_screen")._native_ptr(), 1706218421);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<VBoxContainer>(_gde_method_bind, _owner);
}

ScriptEditor *EditorInterface::get_script_editor() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_script_editor")._native_ptr(), 90868003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<ScriptEditor>(_gde_method_bind, _owner);
}

SubViewport *EditorInterface::get_editor_viewport_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_viewport_2d")._native_ptr(), 3750751911);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<SubViewport>(_gde_method_bind, _owner);
}

SubViewport *EditorInterface::get_editor_viewport_3d(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_viewport_3d")._native_ptr(), 1970834490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret_obj<SubViewport>(_gde_method_bind, _owner, &idx_encoded);
}

void EditorInterface::set_main_screen_editor(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("set_main_screen_editor")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void EditorInterface::set_distraction_free_mode(bool enter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("set_distraction_free_mode")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enter_encoded;
	PtrToArg<bool>::encode(enter, &enter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enter_encoded);
}

bool EditorInterface::is_distraction_free_mode_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("is_distraction_free_mode_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double EditorInterface::get_editor_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_editor_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void EditorInterface::popup_dialog(Window *dialog, const Rect2i &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("popup_dialog")._native_ptr(), 2015770942);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (dialog != nullptr ? &dialog->_owner : nullptr), &rect);
}

void EditorInterface::popup_dialog_centered(Window *dialog, const Vector2i &minsize) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("popup_dialog_centered")._native_ptr(), 346557367);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (dialog != nullptr ? &dialog->_owner : nullptr), &minsize);
}

void EditorInterface::popup_dialog_centered_ratio(Window *dialog, double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("popup_dialog_centered_ratio")._native_ptr(), 2093669136);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (dialog != nullptr ? &dialog->_owner : nullptr), &ratio_encoded);
}

void EditorInterface::popup_dialog_centered_clamped(Window *dialog, const Vector2i &minsize, double fallback_ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("popup_dialog_centered_clamped")._native_ptr(), 3763385571);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fallback_ratio_encoded;
	PtrToArg<double>::encode(fallback_ratio, &fallback_ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (dialog != nullptr ? &dialog->_owner : nullptr), &minsize, &fallback_ratio_encoded);
}

String EditorInterface::get_current_feature_profile() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_current_feature_profile")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void EditorInterface::set_current_feature_profile(const String &profile_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("set_current_feature_profile")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &profile_name);
}

FileSystemDock *EditorInterface::get_file_system_dock() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_file_system_dock")._native_ptr(), 3751012327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<FileSystemDock>(_gde_method_bind, _owner);
}

void EditorInterface::select_file(const String &file) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("select_file")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &file);
}

PackedStringArray EditorInterface::get_selected_paths() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_selected_paths")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String EditorInterface::get_current_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_current_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String EditorInterface::get_current_directory() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_current_directory")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

EditorInspector *EditorInterface::get_inspector() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_inspector")._native_ptr(), 3517113938);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorInspector>(_gde_method_bind, _owner);
}

void EditorInterface::inspect_object(Object *object, const String &for_property, bool inspector_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("inspect_object")._native_ptr(), 127962172);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t inspector_only_encoded;
	PtrToArg<bool>::encode(inspector_only, &inspector_only_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &for_property, &inspector_only_encoded);
}

void EditorInterface::edit_resource(const Ref<Resource> &resource) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("edit_resource")._native_ptr(), 968641751);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (resource != nullptr ? &resource->_owner : nullptr));
}

void EditorInterface::edit_node(Node *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("edit_node")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

void EditorInterface::edit_script(const Ref<Script> &script, int32_t line, int32_t column, bool grab_focus) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("edit_script")._native_ptr(), 219829402);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t grab_focus_encoded;
	PtrToArg<bool>::encode(grab_focus, &grab_focus_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (script != nullptr ? &script->_owner : nullptr), &line_encoded, &column_encoded, &grab_focus_encoded);
}

void EditorInterface::open_scene_from_path(const String &scene_filepath) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("open_scene_from_path")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scene_filepath);
}

void EditorInterface::reload_scene_from_path(const String &scene_filepath) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("reload_scene_from_path")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scene_filepath);
}

PackedStringArray EditorInterface::get_open_scenes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_open_scenes")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

Node *EditorInterface::get_edited_scene_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_edited_scene_root")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

Error EditorInterface::save_scene() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("save_scene")._native_ptr(), 166280745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void EditorInterface::save_scene_as(const String &path, bool with_preview) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("save_scene_as")._native_ptr(), 3647332257);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t with_preview_encoded;
	PtrToArg<bool>::encode(with_preview, &with_preview_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path, &with_preview_encoded);
}

void EditorInterface::save_all_scenes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("save_all_scenes")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorInterface::mark_scene_as_unsaved() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("mark_scene_as_unsaved")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorInterface::play_main_scene() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("play_main_scene")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorInterface::play_current_scene() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("play_current_scene")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorInterface::play_custom_scene(const String &scene_filepath) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("play_custom_scene")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scene_filepath);
}

void EditorInterface::stop_playing_scene() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("stop_playing_scene")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool EditorInterface::is_playing_scene() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("is_playing_scene")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String EditorInterface::get_playing_scene() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("get_playing_scene")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void EditorInterface::set_movie_maker_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("set_movie_maker_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool EditorInterface::is_movie_maker_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInterface::get_class_static()._native_ptr(), StringName("is_movie_maker_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 