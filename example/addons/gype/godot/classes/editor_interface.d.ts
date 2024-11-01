
import { EditorCommandPalette } from "@godot/classes/editor_command_palette";
import { GodotObject } from "@godot/classes/godot_object";
import { Node } from "@godot/classes/node";
import { Theme } from "@godot/classes/theme";
import { Texture2D } from "@godot/classes/texture2d";
import { Script } from "@godot/classes/script";
import { EditorInspector } from "@godot/classes/editor_inspector";
import { EditorFileSystem } from "@godot/classes/editor_file_system";
import { Control } from "@godot/classes/control";
import { ScriptEditor } from "@godot/classes/script_editor";
import { FileSystemDock } from "@godot/classes/file_system_dock";
import { SubViewport } from "@godot/classes/sub_viewport";
import { Resource } from "@godot/classes/resource";
import { EditorResourcePreview } from "@godot/classes/editor_resource_preview";
import { EditorSettings } from "@godot/classes/editor_settings";
import { EditorSelection } from "@godot/classes/editor_selection";
import { EditorPaths } from "@godot/classes/editor_paths";
import { Mesh } from "@godot/classes/mesh";
import { VBoxContainer } from "@godot/classes/v_box_container";
import { Window } from "@godot/classes/window";

export declare class EditorInterface extends GodotObject{
  public restart_editor(_save: boolean): void;
  public get_command_palette(): EditorCommandPalette;
  public get_resource_filesystem(): EditorFileSystem;
  public get_editor_paths(): EditorPaths;
  public get_resource_previewer(): EditorResourcePreview;
  public get_selection(): EditorSelection;
  public get_editor_settings(): EditorSettings;
  public make_mesh_previews(_meshes: GDArray, _preview_size: number): GDArray;
  public set_plugin_enabled(_plugin: String | StringName | string, _enabled: boolean): void;
  public is_plugin_enabled(_plugin: String | StringName | string): boolean;
  public get_editor_theme(): Theme;
  public get_base_control(): Control;
  public get_editor_main_screen(): VBoxContainer;
  public get_script_editor(): ScriptEditor;
  public get_editor_viewport_2d(): SubViewport;
  public get_editor_viewport_3d(_idx: number): SubViewport;
  public set_main_screen_editor(_name: String | StringName | string): void;
  public set_distraction_free_mode(_enter: boolean): void;
  public is_distraction_free_mode_enabled(): boolean;
  public is_multi_window_enabled(): boolean;
  public get_editor_scale(): number;
  public popup_dialog(_dialog: Window, _rect: Rect2i): void;
  public popup_dialog_centered(_dialog: Window, _minsize: Vector2i): void;
  public popup_dialog_centered_ratio(_dialog: Window, _ratio: number): void;
  public popup_dialog_centered_clamped(_dialog: Window, _minsize: Vector2i, _fallback_ratio: number): void;
  public get_current_feature_profile(): String;
  public set_current_feature_profile(_profile_name: String | StringName | string): void;
  public popup_node_selector(_callback: Callable, _valid_types: GDArray): void;
  public popup_property_selector(_object: Object, _callback: Callable, _type_filter: PackedInt32Array): void;
  public get_file_system_dock(): FileSystemDock;
  public select_file(_file: String | StringName | string): void;
  public get_selected_paths(): PackedStringArray;
  public get_current_path(): String;
  public get_current_directory(): String;
  public get_inspector(): EditorInspector;
  public inspect_object(_object: Object, _for_property: String | StringName | string, _inspector_only: boolean): void;
  public edit_resource(_resource: Resource): void;
  public edit_node(_node: Node): void;
  public edit_script(_script: Script, _line: number, _column: number, _grab_focus: boolean): void;
  public open_scene_from_path(_scene_filepath: String | StringName | string): void;
  public reload_scene_from_path(_scene_filepath: String | StringName | string): void;
  public get_open_scenes(): PackedStringArray;
  public get_edited_scene_root(): Node;
  public save_scene(): number;
  public save_scene_as(_path: String | StringName | string, _with_preview: boolean): void;
  public save_all_scenes(): void;
  public mark_scene_as_unsaved(): void;
  public play_main_scene(): void;
  public play_current_scene(): void;
  public play_custom_scene(_scene_filepath: String | StringName | string): void;
  public stop_playing_scene(): void;
  public is_playing_scene(): boolean;
  public get_playing_scene(): String;
  public set_movie_maker_enabled(_enabled: boolean): void;
  public is_movie_maker_enabled(): boolean;
  public get distraction_free_mode(): boolean {
    is_distraction_free_mode_enabled();
  }
  public set distraction_free_mode(value): void {
    set_distraction_free_mode(value);
  }
  public get movie_maker_enabled(): boolean {
    is_movie_maker_enabled();
  }
  public set movie_maker_enabled(value): void {
    set_movie_maker_enabled(value);
  }
}