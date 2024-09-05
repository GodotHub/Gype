import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { Node } from '@js_godot/classes/node'
import { StringName } from '@js_godot/variant/string_name'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { GDString } from '@js_godot/variant/gd_string'
import { Callable } from '@js_godot/variant/callable'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_control_to_container;
  method_add_control_to_bottom_panel;
  method_add_control_to_dock;
  method_remove_control_from_docks;
  method_remove_control_from_bottom_panel;
  method_remove_control_from_container;
  method_set_dock_tab_icon;
  method_add_tool_menu_item;
  method_add_tool_submenu_item;
  method_remove_tool_menu_item;
  method_get_export_as_menu;
  method_add_custom_type;
  method_remove_custom_type;
  method_add_autoload_singleton;
  method_remove_autoload_singleton;
  method_update_overlays;
  method_make_bottom_panel_item_visible;
  method_hide_bottom_panel;
  method_get_undo_redo;
  method_add_undo_redo_inspector_hook_callback;
  method_remove_undo_redo_inspector_hook_callback;
  method_queue_save_layout;
  method_add_translation_parser_plugin;
  method_remove_translation_parser_plugin;
  method_add_import_plugin;
  method_remove_import_plugin;
  method_add_scene_format_importer_plugin;
  method_remove_scene_format_importer_plugin;
  method_add_scene_post_import_plugin;
  method_remove_scene_post_import_plugin;
  method_add_export_plugin;
  method_remove_export_plugin;
  method_add_node_3d_gizmo_plugin;
  method_remove_node_3d_gizmo_plugin;
  method_add_inspector_plugin;
  method_remove_inspector_plugin;
  method_add_resource_conversion_plugin;
  method_remove_resource_conversion_plugin;
  method_set_input_event_forwarding_always_enabled;
  method_set_force_draw_over_forwarding_enabled;
  method_get_editor_interface;
  method_get_script_create_dialog;
  method_add_debugger_plugin;
  method_remove_debugger_plugin;
  method_get_plugin_version;
}
export class EditorPlugin extends Node{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_control_to_container");
      this._bindings.method_add_control_to_container = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3092750152
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_control_to_bottom_panel");
      this._bindings.method_add_control_to_bottom_panel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        111032269
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_control_to_dock");
      this._bindings.method_add_control_to_dock = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2994930786
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_control_from_docks");
      this._bindings.method_remove_control_from_docks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_control_from_bottom_panel");
      this._bindings.method_remove_control_from_bottom_panel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_control_from_container");
      this._bindings.method_remove_control_from_container = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3092750152
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("set_dock_tab_icon");
      this._bindings.method_set_dock_tab_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3450529724
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_tool_menu_item");
      this._bindings.method_add_tool_menu_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2137474292
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_tool_submenu_item");
      this._bindings.method_add_tool_submenu_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1019428915
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_tool_menu_item");
      this._bindings.method_remove_tool_menu_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("get_export_as_menu");
      this._bindings.method_get_export_as_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1775878644
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_custom_type");
      this._bindings.method_add_custom_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1986814599
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_custom_type");
      this._bindings.method_remove_custom_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_autoload_singleton");
      this._bindings.method_add_autoload_singleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3186203200
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_autoload_singleton");
      this._bindings.method_remove_autoload_singleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("update_overlays");
      this._bindings.method_update_overlays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("make_bottom_panel_item_visible");
      this._bindings.method_make_bottom_panel_item_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("hide_bottom_panel");
      this._bindings.method_hide_bottom_panel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("get_undo_redo");
      this._bindings.method_get_undo_redo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        773492341
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_undo_redo_inspector_hook_callback");
      this._bindings.method_add_undo_redo_inspector_hook_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_undo_redo_inspector_hook_callback");
      this._bindings.method_remove_undo_redo_inspector_hook_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("queue_save_layout");
      this._bindings.method_queue_save_layout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_translation_parser_plugin");
      this._bindings.method_add_translation_parser_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3116463128
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_translation_parser_plugin");
      this._bindings.method_remove_translation_parser_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3116463128
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_import_plugin");
      this._bindings.method_add_import_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3113975762
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_import_plugin");
      this._bindings.method_remove_import_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2312482773
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_scene_format_importer_plugin");
      this._bindings.method_add_scene_format_importer_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2764104752
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_scene_format_importer_plugin");
      this._bindings.method_remove_scene_format_importer_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2637776123
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_scene_post_import_plugin");
      this._bindings.method_add_scene_post_import_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3492436322
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_scene_post_import_plugin");
      this._bindings.method_remove_scene_post_import_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3045178206
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_export_plugin");
      this._bindings.method_add_export_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4095952207
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_export_plugin");
      this._bindings.method_remove_export_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4095952207
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_node_3d_gizmo_plugin");
      this._bindings.method_add_node_3d_gizmo_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1541015022
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_node_3d_gizmo_plugin");
      this._bindings.method_remove_node_3d_gizmo_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1541015022
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_inspector_plugin");
      this._bindings.method_add_inspector_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        546395733
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_inspector_plugin");
      this._bindings.method_remove_inspector_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        546395733
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_resource_conversion_plugin");
      this._bindings.method_add_resource_conversion_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2124849111
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_resource_conversion_plugin");
      this._bindings.method_remove_resource_conversion_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2124849111
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("set_input_event_forwarding_always_enabled");
      this._bindings.method_set_input_event_forwarding_always_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("set_force_draw_over_forwarding_enabled");
      this._bindings.method_set_force_draw_over_forwarding_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("get_editor_interface");
      this._bindings.method_get_editor_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4223731786
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("get_script_create_dialog");
      this._bindings.method_get_script_create_dialog = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3121871482
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("add_debugger_plugin");
      this._bindings.method_add_debugger_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3749880309
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("remove_debugger_plugin");
      this._bindings.method_remove_debugger_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3749880309
      );
    }
    {
      let classname = new StringName("EditorPlugin");
      let methodname = new StringName("get_plugin_version");
      this._bindings.method_get_plugin_version = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  
  _forward_canvas_gui_input(_event) {
  }
  _forward_canvas_draw_over_viewport(_viewport_control) {
  }
  _forward_canvas_force_draw_over_viewport(_viewport_control) {
  }
  _forward_3d_gui_input(_viewport_camera, _event) {
  }
  _forward_3d_draw_over_viewport(_viewport_control) {
  }
  _forward_3d_force_draw_over_viewport(_viewport_control) {
  }
  _get_plugin_name() {
  }
  _get_plugin_icon() {
  }
  _has_main_screen() {
  }
  _make_visible(_visible) {
  }
  _edit(_object) {
  }
  _handles(_object) {
  }
  _get_state() {
  }
  _set_state(_state) {
  }
  _clear() {
  }
  _get_unsaved_status(_for_scene) {
  }
  _save_external_data() {
  }
  _apply_changes() {
  }
  _get_breakpoints() {
  }
  _set_window_layout(_configuration) {
  }
  _get_window_layout(_configuration) {
  }
  _build() {
  }
  _enable_plugin() {
  }
  _disable_plugin() {
  }
  add_control_to_container(_container, _control) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_control_to_container,
      this._owner,
      _container, _control
    );
    
  }
  add_control_to_bottom_panel(_control, _title, _shortcut) {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_add_control_to_bottom_panel,
      this._owner,
			Variant.INT,
      _control, _title, _shortcut
    );
    
  }
  add_control_to_dock(_slot, _control, _shortcut) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_control_to_dock,
      this._owner,
      _slot, _control, _shortcut
    );
    
  }
  remove_control_from_docks(_control) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_control_from_docks,
      this._owner,
      _control
    );
    
  }
  remove_control_from_bottom_panel(_control) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_control_from_bottom_panel,
      this._owner,
      _control
    );
    
  }
  remove_control_from_container(_container, _control) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_control_from_container,
      this._owner,
      _container, _control
    );
    
  }
  set_dock_tab_icon(_control, _icon) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_set_dock_tab_icon,
      this._owner,
      _control, _icon
    );
    
  }
  add_tool_menu_item(_name, _callable) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_tool_menu_item,
      this._owner,
      _name, _callable
    );
    
  }
  add_tool_submenu_item(_name, _submenu) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_tool_submenu_item,
      this._owner,
      _name, _submenu
    );
    
  }
  remove_tool_menu_item(_name) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_tool_menu_item,
      this._owner,
      _name
    );
    
  }
  get_export_as_menu() {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_get_export_as_menu,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_custom_type(_type, _base, _script, _icon) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_custom_type,
      this._owner,
      _type, _base, _script, _icon
    );
    
  }
  remove_custom_type(_type) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_custom_type,
      this._owner,
      _type
    );
    
  }
  add_autoload_singleton(_name, _path) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_autoload_singleton,
      this._owner,
      _name, _path
    );
    
  }
  remove_autoload_singleton(_name) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_autoload_singleton,
      this._owner,
      _name
    );
    
  }
  update_overlays() {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_update_overlays,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  make_bottom_panel_item_visible(_item) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_make_bottom_panel_item_visible,
      this._owner,
      _item
    );
    
  }
  hide_bottom_panel() {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_hide_bottom_panel,
      this._owner,
      
    );
    
  }
  get_undo_redo() {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_get_undo_redo,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_undo_redo_inspector_hook_callback(_callable) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_undo_redo_inspector_hook_callback,
      this._owner,
      _callable
    );
    
  }
  remove_undo_redo_inspector_hook_callback(_callable) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_undo_redo_inspector_hook_callback,
      this._owner,
      _callable
    );
    
  }
  queue_save_layout() {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_queue_save_layout,
      this._owner,
      
    );
    
  }
  add_translation_parser_plugin(_parser) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_translation_parser_plugin,
      this._owner,
      _parser
    );
    
  }
  remove_translation_parser_plugin(_parser) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_translation_parser_plugin,
      this._owner,
      _parser
    );
    
  }
  add_import_plugin(_importer, _first_priority) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_import_plugin,
      this._owner,
      _importer, _first_priority
    );
    
  }
  remove_import_plugin(_importer) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_import_plugin,
      this._owner,
      _importer
    );
    
  }
  add_scene_format_importer_plugin(_scene_format_importer, _first_priority) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_scene_format_importer_plugin,
      this._owner,
      _scene_format_importer, _first_priority
    );
    
  }
  remove_scene_format_importer_plugin(_scene_format_importer) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_scene_format_importer_plugin,
      this._owner,
      _scene_format_importer
    );
    
  }
  add_scene_post_import_plugin(_scene_import_plugin, _first_priority) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_scene_post_import_plugin,
      this._owner,
      _scene_import_plugin, _first_priority
    );
    
  }
  remove_scene_post_import_plugin(_scene_import_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_scene_post_import_plugin,
      this._owner,
      _scene_import_plugin
    );
    
  }
  add_export_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_export_plugin,
      this._owner,
      _plugin
    );
    
  }
  remove_export_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_export_plugin,
      this._owner,
      _plugin
    );
    
  }
  add_node_3d_gizmo_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_node_3d_gizmo_plugin,
      this._owner,
      _plugin
    );
    
  }
  remove_node_3d_gizmo_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_node_3d_gizmo_plugin,
      this._owner,
      _plugin
    );
    
  }
  add_inspector_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_inspector_plugin,
      this._owner,
      _plugin
    );
    
  }
  remove_inspector_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_inspector_plugin,
      this._owner,
      _plugin
    );
    
  }
  add_resource_conversion_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_resource_conversion_plugin,
      this._owner,
      _plugin
    );
    
  }
  remove_resource_conversion_plugin(_plugin) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_resource_conversion_plugin,
      this._owner,
      _plugin
    );
    
  }
  set_input_event_forwarding_always_enabled() {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_set_input_event_forwarding_always_enabled,
      this._owner,
      
    );
    
  }
  set_force_draw_over_forwarding_enabled() {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_set_force_draw_over_forwarding_enabled,
      this._owner,
      
    );
    
  }
  get_editor_interface() {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_get_editor_interface,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_script_create_dialog() {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_get_script_create_dialog,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_debugger_plugin(_script) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_add_debugger_plugin,
      this._owner,
      _script
    );
    
  }
  remove_debugger_plugin(_script) {
    return _call_native_mb_no_ret(
      EditorPlugin._bindings.method_remove_debugger_plugin,
      this._owner,
      _script
    );
    
  }
  get_plugin_version() {
    return _call_native_mb_ret(
      EditorPlugin._bindings.method_get_plugin_version,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  

  static CustomControlContainer = {
    CONTAINER_TOOLBAR: 0,
    CONTAINER_SPATIAL_EDITOR_MENU: 1,
    CONTAINER_SPATIAL_EDITOR_SIDE_LEFT: 2,
    CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT: 3,
    CONTAINER_SPATIAL_EDITOR_BOTTOM: 4,
    CONTAINER_CANVAS_EDITOR_MENU: 5,
    CONTAINER_CANVAS_EDITOR_SIDE_LEFT: 6,
    CONTAINER_CANVAS_EDITOR_SIDE_RIGHT: 7,
    CONTAINER_CANVAS_EDITOR_BOTTOM: 8,
    CONTAINER_INSPECTOR_BOTTOM: 9,
    CONTAINER_PROJECT_SETTING_TAB_LEFT: 10,
    CONTAINER_PROJECT_SETTING_TAB_RIGHT: 11,
  }
  static DockSlot = {
    DOCK_SLOT_LEFT_UL: 0,
    DOCK_SLOT_LEFT_BL: 1,
    DOCK_SLOT_LEFT_UR: 2,
    DOCK_SLOT_LEFT_BR: 3,
    DOCK_SLOT_RIGHT_UL: 4,
    DOCK_SLOT_RIGHT_BL: 5,
    DOCK_SLOT_RIGHT_UR: 6,
    DOCK_SLOT_RIGHT_BR: 7,
    DOCK_SLOT_MAX: 8,
  }
  static AfterGUIInput = {
    AFTER_GUI_INPUT_PASS: 0,
    AFTER_GUI_INPUT_STOP: 1,
    AFTER_GUI_INPUT_CUSTOM: 2,
  }

  static {
    this._init_bindings();
  }
}