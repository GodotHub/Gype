import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
import { Vector2 } from '@js_godot/variant/vector2'
import { Dictionary } from '@js_godot/variant/dictionary'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Rect2 } from '@js_godot/variant/rect2'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_connect_node;
  method_is_node_connected;
  method_disconnect_node;
  method_set_connection_activity;
  method_get_connection_list;
  method_get_closest_connection_at_point;
  method_get_connections_intersecting_with_rect;
  method_clear_connections;
  method_force_connection_drag_end;
  method_get_scroll_offset;
  method_set_scroll_offset;
  method_add_valid_right_disconnect_type;
  method_remove_valid_right_disconnect_type;
  method_add_valid_left_disconnect_type;
  method_remove_valid_left_disconnect_type;
  method_add_valid_connection_type;
  method_remove_valid_connection_type;
  method_is_valid_connection_type;
  method_get_connection_line;
  method_attach_graph_element_to_frame;
  method_detach_graph_element_from_frame;
  method_get_element_frame;
  method_get_attached_nodes_of_frame;
  method_set_panning_scheme;
  method_get_panning_scheme;
  method_set_zoom;
  method_get_zoom;
  method_set_zoom_min;
  method_get_zoom_min;
  method_set_zoom_max;
  method_get_zoom_max;
  method_set_zoom_step;
  method_get_zoom_step;
  method_set_show_grid;
  method_is_showing_grid;
  method_set_grid_pattern;
  method_get_grid_pattern;
  method_set_snapping_enabled;
  method_is_snapping_enabled;
  method_set_snapping_distance;
  method_get_snapping_distance;
  method_set_connection_lines_curvature;
  method_get_connection_lines_curvature;
  method_set_connection_lines_thickness;
  method_get_connection_lines_thickness;
  method_set_connection_lines_antialiased;
  method_is_connection_lines_antialiased;
  method_set_minimap_size;
  method_get_minimap_size;
  method_set_minimap_opacity;
  method_get_minimap_opacity;
  method_set_minimap_enabled;
  method_is_minimap_enabled;
  method_set_show_menu;
  method_is_showing_menu;
  method_set_show_zoom_label;
  method_is_showing_zoom_label;
  method_set_show_grid_buttons;
  method_is_showing_grid_buttons;
  method_set_show_zoom_buttons;
  method_is_showing_zoom_buttons;
  method_set_show_minimap_button;
  method_is_showing_minimap_button;
  method_set_show_arrange_button;
  method_is_showing_arrange_button;
  method_set_right_disconnects;
  method_is_right_disconnects_enabled;
  method_get_menu_hbox;
  method_arrange_nodes;
  method_set_selected;
}
export class GraphEdit extends Control{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GraphEdit");
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
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("connect_node");
      this._bindings.method_connect_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        195065850
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_node_connected");
      this._bindings.method_is_node_connected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4216241294
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("disconnect_node");
      this._bindings.method_disconnect_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1933654315
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_connection_activity");
      this._bindings.method_set_connection_activity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1141899943
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_connection_list");
      this._bindings.method_get_connection_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_closest_connection_at_point");
      this._bindings.method_get_closest_connection_at_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        453879819
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_connections_intersecting_with_rect");
      this._bindings.method_get_connections_intersecting_with_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2709748719
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("clear_connections");
      this._bindings.method_clear_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("force_connection_drag_end");
      this._bindings.method_force_connection_drag_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_scroll_offset");
      this._bindings.method_get_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_scroll_offset");
      this._bindings.method_set_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("add_valid_right_disconnect_type");
      this._bindings.method_add_valid_right_disconnect_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("remove_valid_right_disconnect_type");
      this._bindings.method_remove_valid_right_disconnect_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("add_valid_left_disconnect_type");
      this._bindings.method_add_valid_left_disconnect_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("remove_valid_left_disconnect_type");
      this._bindings.method_remove_valid_left_disconnect_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("add_valid_connection_type");
      this._bindings.method_add_valid_connection_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("remove_valid_connection_type");
      this._bindings.method_remove_valid_connection_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_valid_connection_type");
      this._bindings.method_is_valid_connection_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2522259332
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_connection_line");
      this._bindings.method_get_connection_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3932192302
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("attach_graph_element_to_frame");
      this._bindings.method_attach_graph_element_to_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3740211285
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("detach_graph_element_from_frame");
      this._bindings.method_detach_graph_element_from_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_element_frame");
      this._bindings.method_get_element_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        988084372
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_attached_nodes_of_frame");
      this._bindings.method_get_attached_nodes_of_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        689397652
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_panning_scheme");
      this._bindings.method_set_panning_scheme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        18893313
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_panning_scheme");
      this._bindings.method_get_panning_scheme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        549924446
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_zoom");
      this._bindings.method_set_zoom = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_zoom");
      this._bindings.method_get_zoom = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_zoom_min");
      this._bindings.method_set_zoom_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_zoom_min");
      this._bindings.method_get_zoom_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_zoom_max");
      this._bindings.method_set_zoom_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_zoom_max");
      this._bindings.method_get_zoom_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_zoom_step");
      this._bindings.method_set_zoom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_zoom_step");
      this._bindings.method_get_zoom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_grid");
      this._bindings.method_set_show_grid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_grid");
      this._bindings.method_is_showing_grid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_grid_pattern");
      this._bindings.method_set_grid_pattern = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1074098205
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_grid_pattern");
      this._bindings.method_get_grid_pattern = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286127528
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_snapping_enabled");
      this._bindings.method_set_snapping_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_snapping_enabled");
      this._bindings.method_is_snapping_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_snapping_distance");
      this._bindings.method_set_snapping_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_snapping_distance");
      this._bindings.method_get_snapping_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_connection_lines_curvature");
      this._bindings.method_set_connection_lines_curvature = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_connection_lines_curvature");
      this._bindings.method_get_connection_lines_curvature = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_connection_lines_thickness");
      this._bindings.method_set_connection_lines_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_connection_lines_thickness");
      this._bindings.method_get_connection_lines_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_connection_lines_antialiased");
      this._bindings.method_set_connection_lines_antialiased = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_connection_lines_antialiased");
      this._bindings.method_is_connection_lines_antialiased = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_minimap_size");
      this._bindings.method_set_minimap_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_minimap_size");
      this._bindings.method_get_minimap_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_minimap_opacity");
      this._bindings.method_set_minimap_opacity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_minimap_opacity");
      this._bindings.method_get_minimap_opacity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_minimap_enabled");
      this._bindings.method_set_minimap_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_minimap_enabled");
      this._bindings.method_is_minimap_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_menu");
      this._bindings.method_set_show_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_menu");
      this._bindings.method_is_showing_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_zoom_label");
      this._bindings.method_set_show_zoom_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_zoom_label");
      this._bindings.method_is_showing_zoom_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_grid_buttons");
      this._bindings.method_set_show_grid_buttons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_grid_buttons");
      this._bindings.method_is_showing_grid_buttons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_zoom_buttons");
      this._bindings.method_set_show_zoom_buttons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_zoom_buttons");
      this._bindings.method_is_showing_zoom_buttons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_minimap_button");
      this._bindings.method_set_show_minimap_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_minimap_button");
      this._bindings.method_is_showing_minimap_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_show_arrange_button");
      this._bindings.method_set_show_arrange_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_showing_arrange_button");
      this._bindings.method_is_showing_arrange_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_right_disconnects");
      this._bindings.method_set_right_disconnects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("is_right_disconnects_enabled");
      this._bindings.method_is_right_disconnects_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("get_menu_hbox");
      this._bindings.method_get_menu_hbox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3590609951
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("arrange_nodes");
      this._bindings.method_arrange_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("GraphEdit");
      let methodname = new StringName("set_selected");
      this._bindings.method_set_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
  }
  
  _is_in_input_hotzone(_in_node, _in_port, _mouse_position) {
  }
  _is_in_output_hotzone(_in_node, _in_port, _mouse_position) {
  }
  _get_connection_line(_from_position, _to_position) {
  }
  _is_node_hover_valid(_from_node, _from_port, _to_node, _to_port) {
  }
  connect_node(_from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_connect_node,
      this._owner,
			Variant.INT,
      _from_node, _from_port, _to_node, _to_port
    );
    
  }
  is_node_connected(_from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_node_connected,
      this._owner,
			Variant.Type.BOOL,
      _from_node, _from_port, _to_node, _to_port
    );
    
  }
  disconnect_node(_from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_disconnect_node,
      this._owner,
      _from_node, _from_port, _to_node, _to_port
    );
    
  }
  set_connection_activity(_from_node, _from_port, _to_node, _to_port, _amount) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_connection_activity,
      this._owner,
      _from_node, _from_port, _to_node, _to_port, _amount
    );
    
  }
  get_connection_list() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_connection_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_closest_connection_at_point(_point, _max_distance) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_closest_connection_at_point,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _point, _max_distance
    );
    
  }
  get_connections_intersecting_with_rect(_rect) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_connections_intersecting_with_rect,
      this._owner,
			Variant.INT,
      _rect
    );
    
  }
  clear_connections() {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_clear_connections,
      this._owner,
      
    );
    
  }
  force_connection_drag_end() {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_force_connection_drag_end,
      this._owner,
      
    );
    
  }
  get_scroll_offset() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_scroll_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_scroll_offset(_offset) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_scroll_offset,
      this._owner,
      _offset
    );
    
  }
  add_valid_right_disconnect_type(_type) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_add_valid_right_disconnect_type,
      this._owner,
      _type
    );
    
  }
  remove_valid_right_disconnect_type(_type) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_remove_valid_right_disconnect_type,
      this._owner,
      _type
    );
    
  }
  add_valid_left_disconnect_type(_type) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_add_valid_left_disconnect_type,
      this._owner,
      _type
    );
    
  }
  remove_valid_left_disconnect_type(_type) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_remove_valid_left_disconnect_type,
      this._owner,
      _type
    );
    
  }
  add_valid_connection_type(_from_type, _to_type) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_add_valid_connection_type,
      this._owner,
      _from_type, _to_type
    );
    
  }
  remove_valid_connection_type(_from_type, _to_type) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_remove_valid_connection_type,
      this._owner,
      _from_type, _to_type
    );
    
  }
  is_valid_connection_type(_from_type, _to_type) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_valid_connection_type,
      this._owner,
			Variant.Type.BOOL,
      _from_type, _to_type
    );
    
  }
  get_connection_line(_from_node, _to_node) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_connection_line,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _from_node, _to_node
    );
    
  }
  attach_graph_element_to_frame(_element, _frame) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_attach_graph_element_to_frame,
      this._owner,
      _element, _frame
    );
    
  }
  detach_graph_element_from_frame(_element) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_detach_graph_element_from_frame,
      this._owner,
      _element
    );
    
  }
  get_element_frame(_element) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_element_frame,
      this._owner,
			Variant.INT,
      _element
    );
    
  }
  get_attached_nodes_of_frame(_frame) {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_attached_nodes_of_frame,
      this._owner,
			Variant.INT,
      _frame
    );
    
  }
  set_panning_scheme(_scheme) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_panning_scheme,
      this._owner,
      _scheme
    );
    
  }
  get_panning_scheme() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_panning_scheme,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_zoom(_zoom) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_zoom,
      this._owner,
      _zoom
    );
    
  }
  get_zoom() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_zoom,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_zoom_min(_zoom_min) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_zoom_min,
      this._owner,
      _zoom_min
    );
    
  }
  get_zoom_min() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_zoom_min,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_zoom_max(_zoom_max) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_zoom_max,
      this._owner,
      _zoom_max
    );
    
  }
  get_zoom_max() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_zoom_max,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_zoom_step(_zoom_step) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_zoom_step,
      this._owner,
      _zoom_step
    );
    
  }
  get_zoom_step() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_zoom_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_show_grid(_enable) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_grid,
      this._owner,
      _enable
    );
    
  }
  is_showing_grid() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_grid,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_grid_pattern(_pattern) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_grid_pattern,
      this._owner,
      _pattern
    );
    
  }
  get_grid_pattern() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_grid_pattern,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_snapping_enabled(_enable) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_snapping_enabled,
      this._owner,
      _enable
    );
    
  }
  is_snapping_enabled() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_snapping_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_snapping_distance(_pixels) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_snapping_distance,
      this._owner,
      _pixels
    );
    
  }
  get_snapping_distance() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_snapping_distance,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_connection_lines_curvature(_curvature) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_connection_lines_curvature,
      this._owner,
      _curvature
    );
    
  }
  get_connection_lines_curvature() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_connection_lines_curvature,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_connection_lines_thickness(_pixels) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_connection_lines_thickness,
      this._owner,
      _pixels
    );
    
  }
  get_connection_lines_thickness() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_connection_lines_thickness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_connection_lines_antialiased(_pixels) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_connection_lines_antialiased,
      this._owner,
      _pixels
    );
    
  }
  is_connection_lines_antialiased() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_connection_lines_antialiased,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_minimap_size(_size) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_minimap_size,
      this._owner,
      _size
    );
    
  }
  get_minimap_size() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_minimap_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_minimap_opacity(_opacity) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_minimap_opacity,
      this._owner,
      _opacity
    );
    
  }
  get_minimap_opacity() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_minimap_opacity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_minimap_enabled(_enable) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_minimap_enabled,
      this._owner,
      _enable
    );
    
  }
  is_minimap_enabled() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_minimap_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_show_menu(_hidden) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_menu,
      this._owner,
      _hidden
    );
    
  }
  is_showing_menu() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_menu,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_show_zoom_label(_enable) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_zoom_label,
      this._owner,
      _enable
    );
    
  }
  is_showing_zoom_label() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_zoom_label,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_show_grid_buttons(_hidden) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_grid_buttons,
      this._owner,
      _hidden
    );
    
  }
  is_showing_grid_buttons() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_grid_buttons,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_show_zoom_buttons(_hidden) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_zoom_buttons,
      this._owner,
      _hidden
    );
    
  }
  is_showing_zoom_buttons() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_zoom_buttons,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_show_minimap_button(_hidden) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_minimap_button,
      this._owner,
      _hidden
    );
    
  }
  is_showing_minimap_button() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_minimap_button,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_show_arrange_button(_hidden) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_show_arrange_button,
      this._owner,
      _hidden
    );
    
  }
  is_showing_arrange_button() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_showing_arrange_button,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_right_disconnects(_enable) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_right_disconnects,
      this._owner,
      _enable
    );
    
  }
  is_right_disconnects_enabled() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_is_right_disconnects_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_menu_hbox() {
    return _call_native_mb_ret(
      GraphEdit._bindings.method_get_menu_hbox,
      this._owner,
			Variant.INT,
      
    );
    
  }
  arrange_nodes() {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_arrange_nodes,
      this._owner,
      
    );
    
  }
  set_selected(_node) {
    return _call_native_mb_no_ret(
      GraphEdit._bindings.method_set_selected,
      this._owner,
      _node
    );
    
  }
  
get scroll_offset () {
  return this.get_scroll_offset();
}
set scroll_offset (new_value) {
  this.set_scroll_offset(new_value);
}
get show_grid () {
  return this.is_showing_grid();
}
set show_grid (new_value) {
  this.set_show_grid(new_value);
}
get grid_pattern () {
  return this.get_grid_pattern();
}
set grid_pattern (new_value) {
  this.set_grid_pattern(new_value);
}
get snapping_enabled () {
  return this.is_snapping_enabled();
}
set snapping_enabled (new_value) {
  this.set_snapping_enabled(new_value);
}
get snapping_distance () {
  return this.get_snapping_distance();
}
set snapping_distance (new_value) {
  this.set_snapping_distance(new_value);
}
get panning_scheme () {
  return this.get_panning_scheme();
}
set panning_scheme (new_value) {
  this.set_panning_scheme(new_value);
}
get right_disconnects () {
  return this.is_right_disconnects_enabled();
}
set right_disconnects (new_value) {
  this.set_right_disconnects(new_value);
}
get connection_lines_curvature () {
  return this.get_connection_lines_curvature();
}
set connection_lines_curvature (new_value) {
  this.set_connection_lines_curvature(new_value);
}
get connection_lines_thickness () {
  return this.get_connection_lines_thickness();
}
set connection_lines_thickness (new_value) {
  this.set_connection_lines_thickness(new_value);
}
get connection_lines_antialiased () {
  return this.is_connection_lines_antialiased();
}
set connection_lines_antialiased (new_value) {
  this.set_connection_lines_antialiased(new_value);
}
get zoom () {
  return this.get_zoom();
}
set zoom (new_value) {
  this.set_zoom(new_value);
}
get zoom_min () {
  return this.get_zoom_min();
}
set zoom_min (new_value) {
  this.set_zoom_min(new_value);
}
get zoom_max () {
  return this.get_zoom_max();
}
set zoom_max (new_value) {
  this.set_zoom_max(new_value);
}
get zoom_step () {
  return this.get_zoom_step();
}
set zoom_step (new_value) {
  this.set_zoom_step(new_value);
}
get minimap_enabled () {
  return this.is_minimap_enabled();
}
set minimap_enabled (new_value) {
  this.set_minimap_enabled(new_value);
}
get minimap_size () {
  return this.get_minimap_size();
}
set minimap_size (new_value) {
  this.set_minimap_size(new_value);
}
get minimap_opacity () {
  return this.get_minimap_opacity();
}
set minimap_opacity (new_value) {
  this.set_minimap_opacity(new_value);
}
get show_menu () {
  return this.is_showing_menu();
}
set show_menu (new_value) {
  this.set_show_menu(new_value);
}
get show_zoom_label () {
  return this.is_showing_zoom_label();
}
set show_zoom_label (new_value) {
  this.set_show_zoom_label(new_value);
}
get show_zoom_buttons () {
  return this.is_showing_zoom_buttons();
}
set show_zoom_buttons (new_value) {
  this.set_show_zoom_buttons(new_value);
}
get show_grid_buttons () {
  return this.is_showing_grid_buttons();
}
set show_grid_buttons (new_value) {
  this.set_show_grid_buttons(new_value);
}
get show_minimap_button () {
  return this.is_showing_minimap_button();
}
set show_minimap_button (new_value) {
  this.set_show_minimap_button(new_value);
}
get show_arrange_button () {
  return this.is_showing_arrange_button();
}
set show_arrange_button (new_value) {
  this.set_show_arrange_button(new_value);
}

  static PanningScheme = {
    SCROLL_ZOOMS: 0,
    SCROLL_PANS: 1,
  }
  static GridPattern = {
    GRID_PATTERN_LINES: 0,
    GRID_PATTERN_DOTS: 1,
  }

  static {
    this._init_bindings();
  }
}