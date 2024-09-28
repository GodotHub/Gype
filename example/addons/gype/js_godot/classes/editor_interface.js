import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_restart_editor;
  method_get_command_palette;
  method_get_resource_filesystem;
  method_get_editor_paths;
  method_get_resource_previewer;
  method_get_selection;
  method_get_editor_settings;
  method_make_mesh_previews;
  method_set_plugin_enabled;
  method_is_plugin_enabled;
  method_get_editor_theme;
  method_get_base_control;
  method_get_editor_main_screen;
  method_get_script_editor;
  method_get_editor_viewport_2d;
  method_get_editor_viewport_3d;
  method_set_main_screen_editor;
  method_set_distraction_free_mode;
  method_is_distraction_free_mode_enabled;
  method_is_multi_window_enabled;
  method_get_editor_scale;
  method_popup_dialog;
  method_popup_dialog_centered;
  method_popup_dialog_centered_ratio;
  method_popup_dialog_centered_clamped;
  method_get_current_feature_profile;
  method_set_current_feature_profile;
  method_popup_node_selector;
  method_popup_property_selector;
  method_get_file_system_dock;
  method_select_file;
  method_get_selected_paths;
  method_get_current_path;
  method_get_current_directory;
  method_get_inspector;
  method_inspect_object;
  method_edit_resource;
  method_edit_node;
  method_edit_script;
  method_open_scene_from_path;
  method_reload_scene_from_path;
  method_get_open_scenes;
  method_get_edited_scene_root;
  method_save_scene;
  method_save_scene_as;
  method_save_all_scenes;
  method_mark_scene_as_unsaved;
  method_play_main_scene;
  method_play_current_scene;
  method_play_custom_scene;
  method_stop_playing_scene;
  method_is_playing_scene;
  method_get_playing_scene;
  method_set_movie_maker_enabled;
  method_is_movie_maker_enabled;
}class _EditorInterface extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorInterface");
    } else {
      super(godot_object);
    }
  }
  static init_method_restart_editor() {
    if (!this._bindings.method_restart_editor) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("restart_editor");
      this._bindings.method_restart_editor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3216645846
      );
    }
  }
  static init_method_get_command_palette() {
    if (!this._bindings.method_get_command_palette) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_command_palette");
      this._bindings.method_get_command_palette = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2471163807
      );
    }
  }
  static init_method_get_resource_filesystem() {
    if (!this._bindings.method_get_resource_filesystem) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_resource_filesystem");
      this._bindings.method_get_resource_filesystem = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        780151678
      );
    }
  }
  static init_method_get_editor_paths() {
    if (!this._bindings.method_get_editor_paths) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_paths");
      this._bindings.method_get_editor_paths = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1595760068
      );
    }
  }
  static init_method_get_resource_previewer() {
    if (!this._bindings.method_get_resource_previewer) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_resource_previewer");
      this._bindings.method_get_resource_previewer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        943486957
      );
    }
  }
  static init_method_get_selection() {
    if (!this._bindings.method_get_selection) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_selection");
      this._bindings.method_get_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2690272531
      );
    }
  }
  static init_method_get_editor_settings() {
    if (!this._bindings.method_get_editor_settings) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_settings");
      this._bindings.method_get_editor_settings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4086932459
      );
    }
  }
  static init_method_make_mesh_previews() {
    if (!this._bindings.method_make_mesh_previews) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("make_mesh_previews");
      this._bindings.method_make_mesh_previews = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        878078554
      );
    }
  }
  static init_method_set_plugin_enabled() {
    if (!this._bindings.method_set_plugin_enabled) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("set_plugin_enabled");
      this._bindings.method_set_plugin_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2678287736
      );
    }
  }
  static init_method_is_plugin_enabled() {
    if (!this._bindings.method_is_plugin_enabled) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("is_plugin_enabled");
      this._bindings.method_is_plugin_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_get_editor_theme() {
    if (!this._bindings.method_get_editor_theme) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_theme");
      this._bindings.method_get_editor_theme = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3846893731
      );
    }
  }
  static init_method_get_base_control() {
    if (!this._bindings.method_get_base_control) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_base_control");
      this._bindings.method_get_base_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2783021301
      );
    }
  }
  static init_method_get_editor_main_screen() {
    if (!this._bindings.method_get_editor_main_screen) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_main_screen");
      this._bindings.method_get_editor_main_screen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1706218421
      );
    }
  }
  static init_method_get_script_editor() {
    if (!this._bindings.method_get_script_editor) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_script_editor");
      this._bindings.method_get_script_editor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        90868003
      );
    }
  }
  static init_method_get_editor_viewport_2d() {
    if (!this._bindings.method_get_editor_viewport_2d) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_viewport_2d");
      this._bindings.method_get_editor_viewport_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3750751911
      );
    }
  }
  static init_method_get_editor_viewport_3d() {
    if (!this._bindings.method_get_editor_viewport_3d) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_viewport_3d");
      this._bindings.method_get_editor_viewport_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1970834490
      );
    }
  }
  static init_method_set_main_screen_editor() {
    if (!this._bindings.method_set_main_screen_editor) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("set_main_screen_editor");
      this._bindings.method_set_main_screen_editor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_distraction_free_mode() {
    if (!this._bindings.method_set_distraction_free_mode) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("set_distraction_free_mode");
      this._bindings.method_set_distraction_free_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_distraction_free_mode_enabled() {
    if (!this._bindings.method_is_distraction_free_mode_enabled) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("is_distraction_free_mode_enabled");
      this._bindings.method_is_distraction_free_mode_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_multi_window_enabled() {
    if (!this._bindings.method_is_multi_window_enabled) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("is_multi_window_enabled");
      this._bindings.method_is_multi_window_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_editor_scale() {
    if (!this._bindings.method_get_editor_scale) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_editor_scale");
      this._bindings.method_get_editor_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_popup_dialog() {
    if (!this._bindings.method_popup_dialog) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("popup_dialog");
      this._bindings.method_popup_dialog = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2015770942
      );
    }
  }
  static init_method_popup_dialog_centered() {
    if (!this._bindings.method_popup_dialog_centered) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("popup_dialog_centered");
      this._bindings.method_popup_dialog_centered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        346557367
      );
    }
  }
  static init_method_popup_dialog_centered_ratio() {
    if (!this._bindings.method_popup_dialog_centered_ratio) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("popup_dialog_centered_ratio");
      this._bindings.method_popup_dialog_centered_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2093669136
      );
    }
  }
  static init_method_popup_dialog_centered_clamped() {
    if (!this._bindings.method_popup_dialog_centered_clamped) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("popup_dialog_centered_clamped");
      this._bindings.method_popup_dialog_centered_clamped = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3763385571
      );
    }
  }
  static init_method_get_current_feature_profile() {
    if (!this._bindings.method_get_current_feature_profile) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_current_feature_profile");
      this._bindings.method_get_current_feature_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_current_feature_profile() {
    if (!this._bindings.method_set_current_feature_profile) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("set_current_feature_profile");
      this._bindings.method_set_current_feature_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_popup_node_selector() {
    if (!this._bindings.method_popup_node_selector) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("popup_node_selector");
      this._bindings.method_popup_node_selector = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2271411043
      );
    }
  }
  static init_method_popup_property_selector() {
    if (!this._bindings.method_popup_property_selector) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("popup_property_selector");
      this._bindings.method_popup_property_selector = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        261221679
      );
    }
  }
  static init_method_get_file_system_dock() {
    if (!this._bindings.method_get_file_system_dock) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_file_system_dock");
      this._bindings.method_get_file_system_dock = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3751012327
      );
    }
  }
  static init_method_select_file() {
    if (!this._bindings.method_select_file) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("select_file");
      this._bindings.method_select_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_selected_paths() {
    if (!this._bindings.method_get_selected_paths) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_selected_paths");
      this._bindings.method_get_selected_paths = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_current_path() {
    if (!this._bindings.method_get_current_path) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_current_path");
      this._bindings.method_get_current_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_current_directory() {
    if (!this._bindings.method_get_current_directory) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_current_directory");
      this._bindings.method_get_current_directory = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_inspector() {
    if (!this._bindings.method_get_inspector) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_inspector");
      this._bindings.method_get_inspector = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3517113938
      );
    }
  }
  static init_method_inspect_object() {
    if (!this._bindings.method_inspect_object) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("inspect_object");
      this._bindings.method_inspect_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        127962172
      );
    }
  }
  static init_method_edit_resource() {
    if (!this._bindings.method_edit_resource) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("edit_resource");
      this._bindings.method_edit_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968641751
      );
    }
  }
  static init_method_edit_node() {
    if (!this._bindings.method_edit_node) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("edit_node");
      this._bindings.method_edit_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_edit_script() {
    if (!this._bindings.method_edit_script) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("edit_script");
      this._bindings.method_edit_script = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        219829402
      );
    }
  }
  static init_method_open_scene_from_path() {
    if (!this._bindings.method_open_scene_from_path) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("open_scene_from_path");
      this._bindings.method_open_scene_from_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_reload_scene_from_path() {
    if (!this._bindings.method_reload_scene_from_path) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("reload_scene_from_path");
      this._bindings.method_reload_scene_from_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_open_scenes() {
    if (!this._bindings.method_get_open_scenes) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_open_scenes");
      this._bindings.method_get_open_scenes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_edited_scene_root() {
    if (!this._bindings.method_get_edited_scene_root) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_edited_scene_root");
      this._bindings.method_get_edited_scene_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_save_scene() {
    if (!this._bindings.method_save_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("save_scene");
      this._bindings.method_save_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_save_scene_as() {
    if (!this._bindings.method_save_scene_as) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("save_scene_as");
      this._bindings.method_save_scene_as = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3647332257
      );
    }
  }
  static init_method_save_all_scenes() {
    if (!this._bindings.method_save_all_scenes) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("save_all_scenes");
      this._bindings.method_save_all_scenes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_mark_scene_as_unsaved() {
    if (!this._bindings.method_mark_scene_as_unsaved) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("mark_scene_as_unsaved");
      this._bindings.method_mark_scene_as_unsaved = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_play_main_scene() {
    if (!this._bindings.method_play_main_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("play_main_scene");
      this._bindings.method_play_main_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_play_current_scene() {
    if (!this._bindings.method_play_current_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("play_current_scene");
      this._bindings.method_play_current_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_play_custom_scene() {
    if (!this._bindings.method_play_custom_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("play_custom_scene");
      this._bindings.method_play_custom_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_stop_playing_scene() {
    if (!this._bindings.method_stop_playing_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("stop_playing_scene");
      this._bindings.method_stop_playing_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_playing_scene() {
    if (!this._bindings.method_is_playing_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("is_playing_scene");
      this._bindings.method_is_playing_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_playing_scene() {
    if (!this._bindings.method_get_playing_scene) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("get_playing_scene");
      this._bindings.method_get_playing_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_movie_maker_enabled() {
    if (!this._bindings.method_set_movie_maker_enabled) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("set_movie_maker_enabled");
      this._bindings.method_set_movie_maker_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_movie_maker_enabled() {
    if (!this._bindings.method_is_movie_maker_enabled) {
      let classname = new StringName("EditorInterface");
      let methodname = new StringName("is_movie_maker_enabled");
      this._bindings.method_is_movie_maker_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  restart_editor(_save) {
    EditorInterface.init_method_restart_editor();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_restart_editor,
      this._owner,
      _save
    );
    
  }
  get_command_palette() {
    EditorInterface.init_method_get_command_palette();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_command_palette,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_resource_filesystem() {
    EditorInterface.init_method_get_resource_filesystem();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_resource_filesystem,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_editor_paths() {
    EditorInterface.init_method_get_editor_paths();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_paths,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_resource_previewer() {
    EditorInterface.init_method_get_resource_previewer();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_resource_previewer,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_selection() {
    EditorInterface.init_method_get_selection();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_selection,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_editor_settings() {
    EditorInterface.init_method_get_editor_settings();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_settings,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  make_mesh_previews(_meshes, _preview_size) {
    EditorInterface.init_method_make_mesh_previews();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_make_mesh_previews,
      this._owner,
			Variant.Type.ARRAY,
      _meshes, _preview_size
    );
    
  }
  set_plugin_enabled(_plugin, _enabled) {
    EditorInterface.init_method_set_plugin_enabled();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_set_plugin_enabled,
      this._owner,
      _plugin, _enabled
    );
    
  }
  is_plugin_enabled(_plugin) {
    EditorInterface.init_method_is_plugin_enabled();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_is_plugin_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _plugin
    );
    
  }
  get_editor_theme() {
    EditorInterface.init_method_get_editor_theme();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_theme,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_base_control() {
    EditorInterface.init_method_get_base_control();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_base_control,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_editor_main_screen() {
    EditorInterface.init_method_get_editor_main_screen();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_main_screen,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_script_editor() {
    EditorInterface.init_method_get_script_editor();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_script_editor,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_editor_viewport_2d() {
    EditorInterface.init_method_get_editor_viewport_2d();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_viewport_2d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_editor_viewport_3d(_idx) {
    EditorInterface.init_method_get_editor_viewport_3d();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_viewport_3d,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  set_main_screen_editor(_name) {
    EditorInterface.init_method_set_main_screen_editor();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_set_main_screen_editor,
      this._owner,
      _name
    );
    
  }
  set_distraction_free_mode(_enter) {
    EditorInterface.init_method_set_distraction_free_mode();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_set_distraction_free_mode,
      this._owner,
      _enter
    );
    
  }
  is_distraction_free_mode_enabled() {
    EditorInterface.init_method_is_distraction_free_mode_enabled();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_is_distraction_free_mode_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_multi_window_enabled() {
    EditorInterface.init_method_is_multi_window_enabled();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_is_multi_window_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_editor_scale() {
    EditorInterface.init_method_get_editor_scale();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_editor_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  popup_dialog(_dialog, _rect) {
    EditorInterface.init_method_popup_dialog();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_popup_dialog,
      this._owner,
      _dialog, _rect
    );
    
  }
  popup_dialog_centered(_dialog, _minsize) {
    EditorInterface.init_method_popup_dialog_centered();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_popup_dialog_centered,
      this._owner,
      _dialog, _minsize
    );
    
  }
  popup_dialog_centered_ratio(_dialog, _ratio) {
    EditorInterface.init_method_popup_dialog_centered_ratio();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_popup_dialog_centered_ratio,
      this._owner,
      _dialog, _ratio
    );
    
  }
  popup_dialog_centered_clamped(_dialog, _minsize, _fallback_ratio) {
    EditorInterface.init_method_popup_dialog_centered_clamped();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_popup_dialog_centered_clamped,
      this._owner,
      _dialog, _minsize, _fallback_ratio
    );
    
  }
  get_current_feature_profile() {
    EditorInterface.init_method_get_current_feature_profile();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_current_feature_profile,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_current_feature_profile(_profile_name) {
    EditorInterface.init_method_set_current_feature_profile();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_set_current_feature_profile,
      this._owner,
      _profile_name
    );
    
  }
  popup_node_selector(_callback, _valid_types) {
    EditorInterface.init_method_popup_node_selector();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_popup_node_selector,
      this._owner,
      _callback, _valid_types
    );
    
  }
  popup_property_selector(_object, _callback, _type_filter) {
    EditorInterface.init_method_popup_property_selector();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_popup_property_selector,
      this._owner,
      _object, _callback, _type_filter
    );
    
  }
  get_file_system_dock() {
    EditorInterface.init_method_get_file_system_dock();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_file_system_dock,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  select_file(_file) {
    EditorInterface.init_method_select_file();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_select_file,
      this._owner,
      _file
    );
    
  }
  get_selected_paths() {
    EditorInterface.init_method_get_selected_paths();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_selected_paths,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_current_path() {
    EditorInterface.init_method_get_current_path();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_current_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_current_directory() {
    EditorInterface.init_method_get_current_directory();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_current_directory,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_inspector() {
    EditorInterface.init_method_get_inspector();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_inspector,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  inspect_object(_object, _for_property, _inspector_only) {
    EditorInterface.init_method_inspect_object();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_inspect_object,
      this._owner,
      _object, _for_property, _inspector_only
    );
    
  }
  edit_resource(_resource) {
    EditorInterface.init_method_edit_resource();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_edit_resource,
      this._owner,
      _resource
    );
    
  }
  edit_node(_node) {
    EditorInterface.init_method_edit_node();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_edit_node,
      this._owner,
      _node
    );
    
  }
  edit_script(_script, _line, _column, _grab_focus) {
    EditorInterface.init_method_edit_script();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_edit_script,
      this._owner,
      _script, _line, _column, _grab_focus
    );
    
  }
  open_scene_from_path(_scene_filepath) {
    EditorInterface.init_method_open_scene_from_path();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_open_scene_from_path,
      this._owner,
      _scene_filepath
    );
    
  }
  reload_scene_from_path(_scene_filepath) {
    EditorInterface.init_method_reload_scene_from_path();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_reload_scene_from_path,
      this._owner,
      _scene_filepath
    );
    
  }
  get_open_scenes() {
    EditorInterface.init_method_get_open_scenes();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_open_scenes,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_edited_scene_root() {
    EditorInterface.init_method_get_edited_scene_root();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_edited_scene_root,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  save_scene() {
    EditorInterface.init_method_save_scene();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_save_scene,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  save_scene_as(_path, _with_preview) {
    EditorInterface.init_method_save_scene_as();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_save_scene_as,
      this._owner,
      _path, _with_preview
    );
    
  }
  save_all_scenes() {
    EditorInterface.init_method_save_all_scenes();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_save_all_scenes,
      this._owner,
      
    );
    
  }
  mark_scene_as_unsaved() {
    EditorInterface.init_method_mark_scene_as_unsaved();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_mark_scene_as_unsaved,
      this._owner,
      
    );
    
  }
  play_main_scene() {
    EditorInterface.init_method_play_main_scene();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_play_main_scene,
      this._owner,
      
    );
    
  }
  play_current_scene() {
    EditorInterface.init_method_play_current_scene();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_play_current_scene,
      this._owner,
      
    );
    
  }
  play_custom_scene(_scene_filepath) {
    EditorInterface.init_method_play_custom_scene();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_play_custom_scene,
      this._owner,
      _scene_filepath
    );
    
  }
  stop_playing_scene() {
    EditorInterface.init_method_stop_playing_scene();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_stop_playing_scene,
      this._owner,
      
    );
    
  }
  is_playing_scene() {
    EditorInterface.init_method_is_playing_scene();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_is_playing_scene,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_playing_scene() {
    EditorInterface.init_method_get_playing_scene();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_get_playing_scene,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_movie_maker_enabled(_enabled) {
    EditorInterface.init_method_set_movie_maker_enabled();
    return _call_native_mb_no_ret(
      _EditorInterface._bindings.method_set_movie_maker_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_movie_maker_enabled() {
    EditorInterface.init_method_is_movie_maker_enabled();
    return _call_native_mb_ret(
      _EditorInterface._bindings.method_is_movie_maker_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get distraction_free_mode () {
  return this.is_distraction_free_mode_enabled();
}
set distraction_free_mode (new_value) {
  this.set_distraction_free_mode(new_value);
}
get movie_maker_enabled () {
  return this.is_movie_maker_enabled();
}
set movie_maker_enabled (new_value) {
  this.set_movie_maker_enabled(new_value);
}

}
export const EditorInterface = (function () {
  let _instance;
  function create_instance() {
    return new _EditorInterface();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();