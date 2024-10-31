
import { ConfigFile } from "@godot/classes/config_file";
import { Shortcut } from "@godot/classes/shortcut";
import { EditorResourceConversionPlugin } from "@godot/classes/editor_resource_conversion_plugin";
import { Node } from "@godot/classes/node";
import { EditorSceneFormatImporter } from "@godot/classes/editor_scene_format_importer";
import { EditorDebuggerPlugin } from "@godot/classes/editor_debugger_plugin";
import { Camera3D } from "@godot/classes/camera3d";
import { EditorUndoRedoManager } from "@godot/classes/editor_undo_redo_manager";
import { Texture2D } from "@godot/classes/texture2d";
import { EditorInterface } from "@godot/classes/editor_interface";
import { Control } from "@godot/classes/control";
import { Script } from "@godot/classes/script";
import { GodotObject } from "@godot/classes/godot_object";
import { EditorNode3DGizmoPlugin } from "@godot/classes/editor_node3d_gizmo_plugin";
import { EditorTranslationParserPlugin } from "@godot/classes/editor_translation_parser_plugin";
import { Button } from "@godot/classes/button";
import { EditorScenePostImportPlugin } from "@godot/classes/editor_scene_post_import_plugin";
import { EditorImportPlugin } from "@godot/classes/editor_import_plugin";
import { InputEvent } from "@godot/classes/input_event";
import { EditorExportPlugin } from "@godot/classes/editor_export_plugin";
import { EditorInspectorPlugin } from "@godot/classes/editor_inspector_plugin";
import { ScriptCreateDialog } from "@godot/classes/script_create_dialog";
import { PopupMenu } from "@godot/classes/popup_menu";

export declare class EditorPlugin extends Node{
  public _forward_canvas_gui_input(_event: InputEvent): boolean;
  public _forward_canvas_draw_over_viewport(_viewport_control: Control): void;
  public _forward_canvas_force_draw_over_viewport(_viewport_control: Control): void;
  public _forward_3d_gui_input(_viewport_camera: Camera3D, _event: InputEvent): number;
  public _forward_3d_draw_over_viewport(_viewport_control: Control): void;
  public _forward_3d_force_draw_over_viewport(_viewport_control: Control): void;
  public _get_plugin_name(): String;
  public _get_plugin_icon(): Texture2D;
  public _has_main_screen(): boolean;
  public _make_visible(_visible: boolean): void;
  public _edit(_object: Object): void;
  public _handles(_object: Object): boolean;
  public _get_state(): Dictionary;
  public _set_state(_state: Dictionary): void;
  public _clear(): void;
  public _get_unsaved_status(_for_scene: String | StringName | string): String;
  public _save_external_data(): void;
  public _apply_changes(): void;
  public _get_breakpoints(): PackedStringArray;
  public _set_window_layout(_configuration: ConfigFile): void;
  public _get_window_layout(_configuration: ConfigFile): void;
  public _build(): boolean;
  public _enable_plugin(): void;
  public _disable_plugin(): void;
  public add_control_to_container(_container: number, _control: Control): void;
  public add_control_to_bottom_panel(_control: Control, _title: String | StringName | string, _shortcut: Shortcut): Button;
  public add_control_to_dock(_slot: number, _control: Control, _shortcut: Shortcut): void;
  public remove_control_from_docks(_control: Control): void;
  public remove_control_from_bottom_panel(_control: Control): void;
  public remove_control_from_container(_container: number, _control: Control): void;
  public set_dock_tab_icon(_control: Control, _icon: Texture2D): void;
  public add_tool_menu_item(_name: String | StringName | string, _callable: Callable): void;
  public add_tool_submenu_item(_name: String | StringName | string, _submenu: PopupMenu): void;
  public remove_tool_menu_item(_name: String | StringName | string): void;
  public get_export_as_menu(): PopupMenu;
  public add_custom_type(_type: String | StringName | string, _base: String | StringName | string, _script: Script, _icon: Texture2D): void;
  public remove_custom_type(_type: String | StringName | string): void;
  public add_autoload_singleton(_name: String | StringName | string, _path: String | StringName | string): void;
  public remove_autoload_singleton(_name: String | StringName | string): void;
  public update_overlays(): number;
  public make_bottom_panel_item_visible(_item: Control): void;
  public hide_bottom_panel(): void;
  public get_undo_redo(): EditorUndoRedoManager;
  public add_undo_redo_inspector_hook_callback(_callable: Callable): void;
  public remove_undo_redo_inspector_hook_callback(_callable: Callable): void;
  public queue_save_layout(): void;
  public add_translation_parser_plugin(_parser: EditorTranslationParserPlugin): void;
  public remove_translation_parser_plugin(_parser: EditorTranslationParserPlugin): void;
  public add_import_plugin(_importer: EditorImportPlugin, _first_priority: boolean): void;
  public remove_import_plugin(_importer: EditorImportPlugin): void;
  public add_scene_format_importer_plugin(_scene_format_importer: EditorSceneFormatImporter, _first_priority: boolean): void;
  public remove_scene_format_importer_plugin(_scene_format_importer: EditorSceneFormatImporter): void;
  public add_scene_post_import_plugin(_scene_import_plugin: EditorScenePostImportPlugin, _first_priority: boolean): void;
  public remove_scene_post_import_plugin(_scene_import_plugin: EditorScenePostImportPlugin): void;
  public add_export_plugin(_plugin: EditorExportPlugin): void;
  public remove_export_plugin(_plugin: EditorExportPlugin): void;
  public add_node_3d_gizmo_plugin(_plugin: EditorNode3DGizmoPlugin): void;
  public remove_node_3d_gizmo_plugin(_plugin: EditorNode3DGizmoPlugin): void;
  public add_inspector_plugin(_plugin: EditorInspectorPlugin): void;
  public remove_inspector_plugin(_plugin: EditorInspectorPlugin): void;
  public add_resource_conversion_plugin(_plugin: EditorResourceConversionPlugin): void;
  public remove_resource_conversion_plugin(_plugin: EditorResourceConversionPlugin): void;
  public set_input_event_forwarding_always_enabled(): void;
  public set_force_draw_over_forwarding_enabled(): void;
  public get_editor_interface(): EditorInterface;
  public get_script_create_dialog(): ScriptCreateDialog;
  public add_debugger_plugin(_script: EditorDebuggerPlugin): void;
  public remove_debugger_plugin(_script: EditorDebuggerPlugin): void;
  public get_plugin_version(): String;
  static CustomControlContainer = {
    CONTAINER_TOOLBAR = 0,
    CONTAINER_SPATIAL_EDITOR_MENU = 1,
    CONTAINER_SPATIAL_EDITOR_SIDE_LEFT = 2,
    CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT = 3,
    CONTAINER_SPATIAL_EDITOR_BOTTOM = 4,
    CONTAINER_CANVAS_EDITOR_MENU = 5,
    CONTAINER_CANVAS_EDITOR_SIDE_LEFT = 6,
    CONTAINER_CANVAS_EDITOR_SIDE_RIGHT = 7,
    CONTAINER_CANVAS_EDITOR_BOTTOM = 8,
    CONTAINER_INSPECTOR_BOTTOM = 9,
    CONTAINER_PROJECT_SETTING_TAB_LEFT = 10,
    CONTAINER_PROJECT_SETTING_TAB_RIGHT = 11,
  }
  static DockSlot = {
    DOCK_SLOT_LEFT_UL = 0,
    DOCK_SLOT_LEFT_BL = 1,
    DOCK_SLOT_LEFT_UR = 2,
    DOCK_SLOT_LEFT_BR = 3,
    DOCK_SLOT_RIGHT_UL = 4,
    DOCK_SLOT_RIGHT_BL = 5,
    DOCK_SLOT_RIGHT_UR = 6,
    DOCK_SLOT_RIGHT_BR = 7,
    DOCK_SLOT_MAX = 8,
  }
  static AfterGUIInput = {
    AFTER_GUI_INPUT_PASS = 0,
    AFTER_GUI_INPUT_STOP = 1,
    AFTER_GUI_INPUT_CUSTOM = 2,
  }
  public get scene_changed(): Signal;
  public get scene_closed(): Signal;
  public get main_screen_changed(): Signal;
  public get resource_saved(): Signal;
  public get scene_saved(): Signal;
  public get project_settings_changed(): Signal;
}