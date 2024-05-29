/**************************************************************************/
/*  editor_plugin.cpp                                                     */
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

#include <godot_cpp/classes/editor_plugin.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_debugger_plugin.hpp>
#include <godot_cpp/classes/editor_export_plugin.hpp>
#include <godot_cpp/classes/editor_import_plugin.hpp>
#include <godot_cpp/classes/editor_inspector_plugin.hpp>
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>
#include <godot_cpp/classes/editor_undo_redo_manager.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void EditorPlugin::add_control_to_container(EditorPlugin::CustomControlContainer container, Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_control_to_container")._native_ptr(), 3092750152);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &container, (control != nullptr ? &control->_owner : nullptr));
}

Button *EditorPlugin::add_control_to_bottom_panel(Control *control, const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_control_to_bottom_panel")._native_ptr(), 3526039376);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Button>(_gde_method_bind, _owner, (control != nullptr ? &control->_owner : nullptr), &title);
}

void EditorPlugin::add_control_to_dock(EditorPlugin::DockSlot slot, Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_control_to_dock")._native_ptr(), 3354871258);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot, (control != nullptr ? &control->_owner : nullptr));
}

void EditorPlugin::remove_control_from_docks(Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_control_from_docks")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (control != nullptr ? &control->_owner : nullptr));
}

void EditorPlugin::remove_control_from_bottom_panel(Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_control_from_bottom_panel")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (control != nullptr ? &control->_owner : nullptr));
}

void EditorPlugin::remove_control_from_container(EditorPlugin::CustomControlContainer container, Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_control_from_container")._native_ptr(), 3092750152);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &container, (control != nullptr ? &control->_owner : nullptr));
}

void EditorPlugin::add_tool_menu_item(const String &name, const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_tool_menu_item")._native_ptr(), 2137474292);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &callable);
}

void EditorPlugin::add_tool_submenu_item(const String &name, PopupMenu *submenu) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_tool_submenu_item")._native_ptr(), 1019428915);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (submenu != nullptr ? &submenu->_owner : nullptr));
}

void EditorPlugin::remove_tool_menu_item(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_tool_menu_item")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

PopupMenu *EditorPlugin::get_export_as_menu() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("get_export_as_menu")._native_ptr(), 1775878644);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner);
}

void EditorPlugin::add_custom_type(const String &type, const String &base, const Ref<Script> &script, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_custom_type")._native_ptr(), 1986814599);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &base, (script != nullptr ? &script->_owner : nullptr), (icon != nullptr ? &icon->_owner : nullptr));
}

void EditorPlugin::remove_custom_type(const String &type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_custom_type")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

void EditorPlugin::add_autoload_singleton(const String &name, const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_autoload_singleton")._native_ptr(), 3186203200);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &path);
}

void EditorPlugin::remove_autoload_singleton(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_autoload_singleton")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

int32_t EditorPlugin::update_overlays() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("update_overlays")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void EditorPlugin::make_bottom_panel_item_visible(Control *item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("make_bottom_panel_item_visible")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (item != nullptr ? &item->_owner : nullptr));
}

void EditorPlugin::hide_bottom_panel() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("hide_bottom_panel")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

EditorUndoRedoManager *EditorPlugin::get_undo_redo() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("get_undo_redo")._native_ptr(), 773492341);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorUndoRedoManager>(_gde_method_bind, _owner);
}

void EditorPlugin::add_undo_redo_inspector_hook_callback(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_undo_redo_inspector_hook_callback")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callable);
}

void EditorPlugin::remove_undo_redo_inspector_hook_callback(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_undo_redo_inspector_hook_callback")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callable);
}

void EditorPlugin::queue_save_layout() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("queue_save_layout")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorPlugin::add_translation_parser_plugin(const Ref<EditorTranslationParserPlugin> &parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_translation_parser_plugin")._native_ptr(), 3116463128);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (parser != nullptr ? &parser->_owner : nullptr));
}

void EditorPlugin::remove_translation_parser_plugin(const Ref<EditorTranslationParserPlugin> &parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_translation_parser_plugin")._native_ptr(), 3116463128);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (parser != nullptr ? &parser->_owner : nullptr));
}

void EditorPlugin::add_import_plugin(const Ref<EditorImportPlugin> &importer, bool first_priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_import_plugin")._native_ptr(), 3113975762);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t first_priority_encoded;
	PtrToArg<bool>::encode(first_priority, &first_priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (importer != nullptr ? &importer->_owner : nullptr), &first_priority_encoded);
}

void EditorPlugin::remove_import_plugin(const Ref<EditorImportPlugin> &importer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_import_plugin")._native_ptr(), 2312482773);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (importer != nullptr ? &importer->_owner : nullptr));
}

void EditorPlugin::add_scene_format_importer_plugin(const Ref<EditorSceneFormatImporter> &scene_format_importer, bool first_priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_scene_format_importer_plugin")._native_ptr(), 2764104752);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t first_priority_encoded;
	PtrToArg<bool>::encode(first_priority, &first_priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scene_format_importer != nullptr ? &scene_format_importer->_owner : nullptr), &first_priority_encoded);
}

void EditorPlugin::remove_scene_format_importer_plugin(const Ref<EditorSceneFormatImporter> &scene_format_importer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_scene_format_importer_plugin")._native_ptr(), 2637776123);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scene_format_importer != nullptr ? &scene_format_importer->_owner : nullptr));
}

void EditorPlugin::add_scene_post_import_plugin(const Ref<EditorScenePostImportPlugin> &scene_import_plugin, bool first_priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_scene_post_import_plugin")._native_ptr(), 3492436322);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t first_priority_encoded;
	PtrToArg<bool>::encode(first_priority, &first_priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scene_import_plugin != nullptr ? &scene_import_plugin->_owner : nullptr), &first_priority_encoded);
}

void EditorPlugin::remove_scene_post_import_plugin(const Ref<EditorScenePostImportPlugin> &scene_import_plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_scene_post_import_plugin")._native_ptr(), 3045178206);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scene_import_plugin != nullptr ? &scene_import_plugin->_owner : nullptr));
}

void EditorPlugin::add_export_plugin(const Ref<EditorExportPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_export_plugin")._native_ptr(), 4095952207);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::remove_export_plugin(const Ref<EditorExportPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_export_plugin")._native_ptr(), 4095952207);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::add_node_3d_gizmo_plugin(const Ref<EditorNode3DGizmoPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_node_3d_gizmo_plugin")._native_ptr(), 1541015022);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::remove_node_3d_gizmo_plugin(const Ref<EditorNode3DGizmoPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_node_3d_gizmo_plugin")._native_ptr(), 1541015022);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::add_inspector_plugin(const Ref<EditorInspectorPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_inspector_plugin")._native_ptr(), 546395733);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::remove_inspector_plugin(const Ref<EditorInspectorPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_inspector_plugin")._native_ptr(), 546395733);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::add_resource_conversion_plugin(const Ref<EditorResourceConversionPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_resource_conversion_plugin")._native_ptr(), 2124849111);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::remove_resource_conversion_plugin(const Ref<EditorResourceConversionPlugin> &plugin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_resource_conversion_plugin")._native_ptr(), 2124849111);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (plugin != nullptr ? &plugin->_owner : nullptr));
}

void EditorPlugin::set_input_event_forwarding_always_enabled() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("set_input_event_forwarding_always_enabled")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorPlugin::set_force_draw_over_forwarding_enabled() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("set_force_draw_over_forwarding_enabled")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

EditorInterface *EditorPlugin::get_editor_interface() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("get_editor_interface")._native_ptr(), 4223731786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<EditorInterface>(_gde_method_bind, _owner);
}

ScriptCreateDialog *EditorPlugin::get_script_create_dialog() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("get_script_create_dialog")._native_ptr(), 3121871482);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<ScriptCreateDialog>(_gde_method_bind, _owner);
}

void EditorPlugin::add_debugger_plugin(const Ref<EditorDebuggerPlugin> &script) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("add_debugger_plugin")._native_ptr(), 3749880309);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (script != nullptr ? &script->_owner : nullptr));
}

void EditorPlugin::remove_debugger_plugin(const Ref<EditorDebuggerPlugin> &script) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("remove_debugger_plugin")._native_ptr(), 3749880309);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (script != nullptr ? &script->_owner : nullptr));
}

String EditorPlugin::get_plugin_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorPlugin::get_class_static()._native_ptr(), StringName("get_plugin_version")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool EditorPlugin::_forward_canvas_gui_input(const Ref<InputEvent> &event) {
	return false;
}

void EditorPlugin::_forward_canvas_draw_over_viewport(Control *viewport_control) {}

void EditorPlugin::_forward_canvas_force_draw_over_viewport(Control *viewport_control) {}

int32_t EditorPlugin::_forward_3d_gui_input(Camera3D *viewport_camera, const Ref<InputEvent> &event) {
	return 0;
}

void EditorPlugin::_forward_3d_draw_over_viewport(Control *viewport_control) {}

void EditorPlugin::_forward_3d_force_draw_over_viewport(Control *viewport_control) {}

String EditorPlugin::_get_plugin_name() const {
	return String();
}

Ref<Texture2D> EditorPlugin::_get_plugin_icon() const {
	return Ref<Texture2D>();
}

bool EditorPlugin::_has_main_screen() const {
	return false;
}

void EditorPlugin::_make_visible(bool visible) {}

void EditorPlugin::_edit(Object *object) {}

bool EditorPlugin::_handles(Object *object) const {
	return false;
}

Dictionary EditorPlugin::_get_state() const {
	return Dictionary();
}

void EditorPlugin::_set_state(const Dictionary &state) {}

void EditorPlugin::_clear() {}

String EditorPlugin::_get_unsaved_status(const String &for_scene) const {
	return String();
}

void EditorPlugin::_save_external_data() {}

void EditorPlugin::_apply_changes() {}

PackedStringArray EditorPlugin::_get_breakpoints() const {
	return PackedStringArray();
}

void EditorPlugin::_set_window_layout(const Ref<ConfigFile> &configuration) {}

void EditorPlugin::_get_window_layout(const Ref<ConfigFile> &configuration) {}

bool EditorPlugin::_build() {
	return false;
}

void EditorPlugin::_enable_plugin() {}

void EditorPlugin::_disable_plugin() {}


} // namespace godot 