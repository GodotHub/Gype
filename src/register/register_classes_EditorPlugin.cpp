
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_debugger_plugin.hpp>
#include <godot_cpp/classes/editor_export_plugin.hpp>
#include <godot_cpp/classes/editor_import_plugin.hpp>
#include <godot_cpp/classes/editor_inspector_plugin.hpp>
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/editor_plugin.hpp>
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>
#include <godot_cpp/classes/editor_undo_redo_manager.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorPlugin() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<EditorPlugin>("EditorPlugin")
			.constructor<>()
			.base<Node>()
			.fun<static_cast<bool (EditorPlugin::*)(const Ref<InputEvent> &)>(&EditorPlugin::_forward_canvas_gui_input)>((new std::string("_forward_canvas_gui_input"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::_forward_canvas_draw_over_viewport)>((new std::string("_forward_canvas_draw_over_viewport"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::_forward_canvas_force_draw_over_viewport)>((new std::string("_forward_canvas_force_draw_over_viewport"))->c_str())
			.fun<static_cast<int32_t (EditorPlugin::*)(Camera3D *, const Ref<InputEvent> &)>(&EditorPlugin::_forward_3d_gui_input)>((new std::string("_forward_3d_gui_input"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::_forward_3d_draw_over_viewport)>((new std::string("_forward_3d_draw_over_viewport"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::_forward_3d_force_draw_over_viewport)>((new std::string("_forward_3d_force_draw_over_viewport"))->c_str())
			.fun<static_cast<String (EditorPlugin::*)() const>(&EditorPlugin::_get_plugin_name)>((new std::string("_get_plugin_name"))->c_str())
			.fun<static_cast<Ref<Texture2D> (EditorPlugin::*)() const>(&EditorPlugin::_get_plugin_icon)>((new std::string("_get_plugin_icon"))->c_str())
			.fun<static_cast<bool (EditorPlugin::*)() const>(&EditorPlugin::_has_main_screen)>((new std::string("_has_main_screen"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(bool)>(&EditorPlugin::_make_visible)>((new std::string("_make_visible"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Object *)>(&EditorPlugin::_edit)>((new std::string("_edit"))->c_str())
			.fun<static_cast<bool (EditorPlugin::*)(Object *) const>(&EditorPlugin::_handles)>((new std::string("_handles"))->c_str())
			.fun<static_cast<Dictionary (EditorPlugin::*)() const>(&EditorPlugin::_get_state)>((new std::string("_get_state"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Dictionary &)>(&EditorPlugin::_set_state)>((new std::string("_set_state"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::_clear)>((new std::string("_clear"))->c_str())
			.fun<static_cast<String (EditorPlugin::*)(const String &) const>(&EditorPlugin::_get_unsaved_status)>((new std::string("_get_unsaved_status"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::_save_external_data)>((new std::string("_save_external_data"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::_apply_changes)>((new std::string("_apply_changes"))->c_str())
			.fun<static_cast<PackedStringArray (EditorPlugin::*)() const>(&EditorPlugin::_get_breakpoints)>((new std::string("_get_breakpoints"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<ConfigFile> &)>(&EditorPlugin::_set_window_layout)>((new std::string("_set_window_layout"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<ConfigFile> &)>(&EditorPlugin::_get_window_layout)>((new std::string("_get_window_layout"))->c_str())
			.fun<static_cast<bool (EditorPlugin::*)()>(&EditorPlugin::_build)>((new std::string("_build"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::_enable_plugin)>((new std::string("_enable_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::_disable_plugin)>((new std::string("_disable_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(EditorPlugin::CustomControlContainer, Control *)>(&EditorPlugin::add_control_to_container)>((new std::string("add_control_to_container"))->c_str())
			.fun<static_cast<Button *(EditorPlugin::*)(Control *, const String &, const Ref<Shortcut> &)>(&EditorPlugin::add_control_to_bottom_panel)>((new std::string("add_control_to_bottom_panel"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(EditorPlugin::DockSlot, Control *, const Ref<Shortcut> &)>(&EditorPlugin::add_control_to_dock)>((new std::string("add_control_to_dock"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::remove_control_from_docks)>((new std::string("remove_control_from_docks"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::remove_control_from_bottom_panel)>((new std::string("remove_control_from_bottom_panel"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(EditorPlugin::CustomControlContainer, Control *)>(&EditorPlugin::remove_control_from_container)>((new std::string("remove_control_from_container"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *, const Ref<Texture2D> &)>(&EditorPlugin::set_dock_tab_icon)>((new std::string("set_dock_tab_icon"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &, const Callable &)>(&EditorPlugin::add_tool_menu_item)>((new std::string("add_tool_menu_item"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &, PopupMenu *)>(&EditorPlugin::add_tool_submenu_item)>((new std::string("add_tool_submenu_item"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &)>(&EditorPlugin::remove_tool_menu_item)>((new std::string("remove_tool_menu_item"))->c_str())
			.fun<static_cast<PopupMenu *(EditorPlugin::*)()>(&EditorPlugin::get_export_as_menu)>((new std::string("get_export_as_menu"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &, const String &, const Ref<Script> &, const Ref<Texture2D> &)>(&EditorPlugin::add_custom_type)>((new std::string("add_custom_type"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &)>(&EditorPlugin::remove_custom_type)>((new std::string("remove_custom_type"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &, const String &)>(&EditorPlugin::add_autoload_singleton)>((new std::string("add_autoload_singleton"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const String &)>(&EditorPlugin::remove_autoload_singleton)>((new std::string("remove_autoload_singleton"))->c_str())
			.fun<static_cast<int32_t (EditorPlugin::*)() const>(&EditorPlugin::update_overlays)>((new std::string("update_overlays"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(Control *)>(&EditorPlugin::make_bottom_panel_item_visible)>((new std::string("make_bottom_panel_item_visible"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::hide_bottom_panel)>((new std::string("hide_bottom_panel"))->c_str())
			.fun<static_cast<EditorUndoRedoManager *(EditorPlugin::*)()>(&EditorPlugin::get_undo_redo)>((new std::string("get_undo_redo"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Callable &)>(&EditorPlugin::add_undo_redo_inspector_hook_callback)>((new std::string("add_undo_redo_inspector_hook_callback"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Callable &)>(&EditorPlugin::remove_undo_redo_inspector_hook_callback)>((new std::string("remove_undo_redo_inspector_hook_callback"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::queue_save_layout)>((new std::string("queue_save_layout"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorTranslationParserPlugin> &)>(&EditorPlugin::add_translation_parser_plugin)>((new std::string("add_translation_parser_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorTranslationParserPlugin> &)>(&EditorPlugin::remove_translation_parser_plugin)>((new std::string("remove_translation_parser_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorImportPlugin> &, bool)>(&EditorPlugin::add_import_plugin)>((new std::string("add_import_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorImportPlugin> &)>(&EditorPlugin::remove_import_plugin)>((new std::string("remove_import_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorSceneFormatImporter> &, bool)>(&EditorPlugin::add_scene_format_importer_plugin)>((new std::string("add_scene_format_importer_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorSceneFormatImporter> &)>(&EditorPlugin::remove_scene_format_importer_plugin)>((new std::string("remove_scene_format_importer_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorScenePostImportPlugin> &, bool)>(&EditorPlugin::add_scene_post_import_plugin)>((new std::string("add_scene_post_import_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorScenePostImportPlugin> &)>(&EditorPlugin::remove_scene_post_import_plugin)>((new std::string("remove_scene_post_import_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorExportPlugin> &)>(&EditorPlugin::add_export_plugin)>((new std::string("add_export_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorExportPlugin> &)>(&EditorPlugin::remove_export_plugin)>((new std::string("remove_export_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorNode3DGizmoPlugin> &)>(&EditorPlugin::add_node_3d_gizmo_plugin)>((new std::string("add_node_3d_gizmo_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorNode3DGizmoPlugin> &)>(&EditorPlugin::remove_node_3d_gizmo_plugin)>((new std::string("remove_node_3d_gizmo_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorInspectorPlugin> &)>(&EditorPlugin::add_inspector_plugin)>((new std::string("add_inspector_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorInspectorPlugin> &)>(&EditorPlugin::remove_inspector_plugin)>((new std::string("remove_inspector_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorResourceConversionPlugin> &)>(&EditorPlugin::add_resource_conversion_plugin)>((new std::string("add_resource_conversion_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorResourceConversionPlugin> &)>(&EditorPlugin::remove_resource_conversion_plugin)>((new std::string("remove_resource_conversion_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::set_input_event_forwarding_always_enabled)>((new std::string("set_input_event_forwarding_always_enabled"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)()>(&EditorPlugin::set_force_draw_over_forwarding_enabled)>((new std::string("set_force_draw_over_forwarding_enabled"))->c_str())
			.fun<static_cast<EditorInterface *(EditorPlugin::*)()>(&EditorPlugin::get_editor_interface)>((new std::string("get_editor_interface"))->c_str())
			.fun<static_cast<ScriptCreateDialog *(EditorPlugin::*)()>(&EditorPlugin::get_script_create_dialog)>((new std::string("get_script_create_dialog"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorDebuggerPlugin> &)>(&EditorPlugin::add_debugger_plugin)>((new std::string("add_debugger_plugin"))->c_str())
			.fun<static_cast<void (EditorPlugin::*)(const Ref<EditorDebuggerPlugin> &)>(&EditorPlugin::remove_debugger_plugin)>((new std::string("remove_debugger_plugin"))->c_str())
			.fun<static_cast<String (EditorPlugin::*)() const>(&EditorPlugin::get_plugin_version)>((new std::string("get_plugin_version"))->c_str());
	qjs::Value _CustomControlContainer = context->newObject();
	_CustomControlContainer[(new std::string("CONTAINER_TOOLBAR"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_TOOLBAR;
	_CustomControlContainer[(new std::string("CONTAINER_SPATIAL_EDITOR_MENU"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_SPATIAL_EDITOR_MENU;
	_CustomControlContainer[(new std::string("CONTAINER_SPATIAL_EDITOR_SIDE_LEFT"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_SPATIAL_EDITOR_SIDE_LEFT;
	_CustomControlContainer[(new std::string("CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT;
	_CustomControlContainer[(new std::string("CONTAINER_SPATIAL_EDITOR_BOTTOM"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_SPATIAL_EDITOR_BOTTOM;
	_CustomControlContainer[(new std::string("CONTAINER_CANVAS_EDITOR_MENU"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_CANVAS_EDITOR_MENU;
	_CustomControlContainer[(new std::string("CONTAINER_CANVAS_EDITOR_SIDE_LEFT"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_CANVAS_EDITOR_SIDE_LEFT;
	_CustomControlContainer[(new std::string("CONTAINER_CANVAS_EDITOR_SIDE_RIGHT"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_CANVAS_EDITOR_SIDE_RIGHT;
	_CustomControlContainer[(new std::string("CONTAINER_CANVAS_EDITOR_BOTTOM"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_CANVAS_EDITOR_BOTTOM;
	_CustomControlContainer[(new std::string("CONTAINER_INSPECTOR_BOTTOM"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_INSPECTOR_BOTTOM;
	_CustomControlContainer[(new std::string("CONTAINER_PROJECT_SETTING_TAB_LEFT"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_PROJECT_SETTING_TAB_LEFT;
	_CustomControlContainer[(new std::string("CONTAINER_PROJECT_SETTING_TAB_RIGHT"))->c_str()] = EditorPlugin::CustomControlContainer::CONTAINER_PROJECT_SETTING_TAB_RIGHT;
	_module.add("CustomControlContainer", std::move(_CustomControlContainer));
	qjs::Value _DockSlot = context->newObject();
	_DockSlot[(new std::string("DOCK_SLOT_LEFT_UL"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_LEFT_UL;
	_DockSlot[(new std::string("DOCK_SLOT_LEFT_BL"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_LEFT_BL;
	_DockSlot[(new std::string("DOCK_SLOT_LEFT_UR"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_LEFT_UR;
	_DockSlot[(new std::string("DOCK_SLOT_LEFT_BR"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_LEFT_BR;
	_DockSlot[(new std::string("DOCK_SLOT_RIGHT_UL"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_RIGHT_UL;
	_DockSlot[(new std::string("DOCK_SLOT_RIGHT_BL"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_RIGHT_BL;
	_DockSlot[(new std::string("DOCK_SLOT_RIGHT_UR"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_RIGHT_UR;
	_DockSlot[(new std::string("DOCK_SLOT_RIGHT_BR"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_RIGHT_BR;
	_DockSlot[(new std::string("DOCK_SLOT_MAX"))->c_str()] = EditorPlugin::DockSlot::DOCK_SLOT_MAX;
	_module.add("DockSlot", std::move(_DockSlot));
	qjs::Value _AfterGUIInput = context->newObject();
	_AfterGUIInput[(new std::string("AFTER_GUI_INPUT_PASS"))->c_str()] = EditorPlugin::AfterGUIInput::AFTER_GUI_INPUT_PASS;
	_AfterGUIInput[(new std::string("AFTER_GUI_INPUT_STOP"))->c_str()] = EditorPlugin::AfterGUIInput::AFTER_GUI_INPUT_STOP;
	_AfterGUIInput[(new std::string("AFTER_GUI_INPUT_CUSTOM"))->c_str()] = EditorPlugin::AfterGUIInput::AFTER_GUI_INPUT_CUSTOM;
	_module.add("AfterGUIInput", std::move(_AfterGUIInput));
}