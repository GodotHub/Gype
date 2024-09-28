import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_next_source_id;
  method_add_source;
  method_remove_source;
  method_set_source_id;
  method_get_source_count;
  method_get_source_id;
  method_has_source;
  method_get_source;
  method_set_tile_shape;
  method_get_tile_shape;
  method_set_tile_layout;
  method_get_tile_layout;
  method_set_tile_offset_axis;
  method_get_tile_offset_axis;
  method_set_tile_size;
  method_get_tile_size;
  method_set_uv_clipping;
  method_is_uv_clipping;
  method_get_occlusion_layers_count;
  method_add_occlusion_layer;
  method_move_occlusion_layer;
  method_remove_occlusion_layer;
  method_set_occlusion_layer_light_mask;
  method_get_occlusion_layer_light_mask;
  method_set_occlusion_layer_sdf_collision;
  method_get_occlusion_layer_sdf_collision;
  method_get_physics_layers_count;
  method_add_physics_layer;
  method_move_physics_layer;
  method_remove_physics_layer;
  method_set_physics_layer_collision_layer;
  method_get_physics_layer_collision_layer;
  method_set_physics_layer_collision_mask;
  method_get_physics_layer_collision_mask;
  method_set_physics_layer_physics_material;
  method_get_physics_layer_physics_material;
  method_get_terrain_sets_count;
  method_add_terrain_set;
  method_move_terrain_set;
  method_remove_terrain_set;
  method_set_terrain_set_mode;
  method_get_terrain_set_mode;
  method_get_terrains_count;
  method_add_terrain;
  method_move_terrain;
  method_remove_terrain;
  method_set_terrain_name;
  method_get_terrain_name;
  method_set_terrain_color;
  method_get_terrain_color;
  method_get_navigation_layers_count;
  method_add_navigation_layer;
  method_move_navigation_layer;
  method_remove_navigation_layer;
  method_set_navigation_layer_layers;
  method_get_navigation_layer_layers;
  method_set_navigation_layer_layer_value;
  method_get_navigation_layer_layer_value;
  method_get_custom_data_layers_count;
  method_add_custom_data_layer;
  method_move_custom_data_layer;
  method_remove_custom_data_layer;
  method_get_custom_data_layer_by_name;
  method_set_custom_data_layer_name;
  method_get_custom_data_layer_name;
  method_set_custom_data_layer_type;
  method_get_custom_data_layer_type;
  method_set_source_level_tile_proxy;
  method_get_source_level_tile_proxy;
  method_has_source_level_tile_proxy;
  method_remove_source_level_tile_proxy;
  method_set_coords_level_tile_proxy;
  method_get_coords_level_tile_proxy;
  method_has_coords_level_tile_proxy;
  method_remove_coords_level_tile_proxy;
  method_set_alternative_level_tile_proxy;
  method_get_alternative_level_tile_proxy;
  method_has_alternative_level_tile_proxy;
  method_remove_alternative_level_tile_proxy;
  method_map_tile_proxy;
  method_cleanup_invalid_tile_proxies;
  method_clear_tile_proxies;
  method_add_pattern;
  method_get_pattern;
  method_remove_pattern;
  method_get_patterns_count;
}
@GodotClass
export class TileSet extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileSet");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_next_source_id() {
    if (!this._bindings.method_get_next_source_id) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_next_source_id");
      this._bindings.method_get_next_source_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_source() {
    if (!this._bindings.method_add_source) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_source");
      this._bindings.method_add_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1059186179
      );
    }
  }
  static init_method_remove_source() {
    if (!this._bindings.method_remove_source) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_source");
      this._bindings.method_remove_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_source_id() {
    if (!this._bindings.method_set_source_id) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_source_id");
      this._bindings.method_set_source_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_source_count() {
    if (!this._bindings.method_get_source_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_source_count");
      this._bindings.method_get_source_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_source_id() {
    if (!this._bindings.method_get_source_id) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_source_id");
      this._bindings.method_get_source_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_has_source() {
    if (!this._bindings.method_has_source) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("has_source");
      this._bindings.method_has_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_source() {
    if (!this._bindings.method_get_source) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_source");
      this._bindings.method_get_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1763540252
      );
    }
  }
  static init_method_set_tile_shape() {
    if (!this._bindings.method_set_tile_shape) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_tile_shape");
      this._bindings.method_set_tile_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2131427112
      );
    }
  }
  static init_method_get_tile_shape() {
    if (!this._bindings.method_get_tile_shape) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_tile_shape");
      this._bindings.method_get_tile_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        716918169
      );
    }
  }
  static init_method_set_tile_layout() {
    if (!this._bindings.method_set_tile_layout) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_tile_layout");
      this._bindings.method_set_tile_layout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1071216679
      );
    }
  }
  static init_method_get_tile_layout() {
    if (!this._bindings.method_get_tile_layout) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_tile_layout");
      this._bindings.method_get_tile_layout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        194628839
      );
    }
  }
  static init_method_set_tile_offset_axis() {
    if (!this._bindings.method_set_tile_offset_axis) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_tile_offset_axis");
      this._bindings.method_set_tile_offset_axis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3300198521
      );
    }
  }
  static init_method_get_tile_offset_axis() {
    if (!this._bindings.method_get_tile_offset_axis) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_tile_offset_axis");
      this._bindings.method_get_tile_offset_axis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        762494114
      );
    }
  }
  static init_method_set_tile_size() {
    if (!this._bindings.method_set_tile_size) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_tile_size");
      this._bindings.method_set_tile_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_tile_size() {
    if (!this._bindings.method_get_tile_size) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_tile_size");
      this._bindings.method_get_tile_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_uv_clipping() {
    if (!this._bindings.method_set_uv_clipping) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_uv_clipping");
      this._bindings.method_set_uv_clipping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_uv_clipping() {
    if (!this._bindings.method_is_uv_clipping) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("is_uv_clipping");
      this._bindings.method_is_uv_clipping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_occlusion_layers_count() {
    if (!this._bindings.method_get_occlusion_layers_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_occlusion_layers_count");
      this._bindings.method_get_occlusion_layers_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_occlusion_layer() {
    if (!this._bindings.method_add_occlusion_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_occlusion_layer");
      this._bindings.method_add_occlusion_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025054187
      );
    }
  }
  static init_method_move_occlusion_layer() {
    if (!this._bindings.method_move_occlusion_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("move_occlusion_layer");
      this._bindings.method_move_occlusion_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_remove_occlusion_layer() {
    if (!this._bindings.method_remove_occlusion_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_occlusion_layer");
      this._bindings.method_remove_occlusion_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_occlusion_layer_light_mask() {
    if (!this._bindings.method_set_occlusion_layer_light_mask) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_occlusion_layer_light_mask");
      this._bindings.method_set_occlusion_layer_light_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_occlusion_layer_light_mask() {
    if (!this._bindings.method_get_occlusion_layer_light_mask) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_occlusion_layer_light_mask");
      this._bindings.method_get_occlusion_layer_light_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_occlusion_layer_sdf_collision() {
    if (!this._bindings.method_set_occlusion_layer_sdf_collision) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_occlusion_layer_sdf_collision");
      this._bindings.method_set_occlusion_layer_sdf_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_occlusion_layer_sdf_collision() {
    if (!this._bindings.method_get_occlusion_layer_sdf_collision) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_occlusion_layer_sdf_collision");
      this._bindings.method_get_occlusion_layer_sdf_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_physics_layers_count() {
    if (!this._bindings.method_get_physics_layers_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_physics_layers_count");
      this._bindings.method_get_physics_layers_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_physics_layer() {
    if (!this._bindings.method_add_physics_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_physics_layer");
      this._bindings.method_add_physics_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025054187
      );
    }
  }
  static init_method_move_physics_layer() {
    if (!this._bindings.method_move_physics_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("move_physics_layer");
      this._bindings.method_move_physics_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_remove_physics_layer() {
    if (!this._bindings.method_remove_physics_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_physics_layer");
      this._bindings.method_remove_physics_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_physics_layer_collision_layer() {
    if (!this._bindings.method_set_physics_layer_collision_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_physics_layer_collision_layer");
      this._bindings.method_set_physics_layer_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_physics_layer_collision_layer() {
    if (!this._bindings.method_get_physics_layer_collision_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_physics_layer_collision_layer");
      this._bindings.method_get_physics_layer_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_physics_layer_collision_mask() {
    if (!this._bindings.method_set_physics_layer_collision_mask) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_physics_layer_collision_mask");
      this._bindings.method_set_physics_layer_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_physics_layer_collision_mask() {
    if (!this._bindings.method_get_physics_layer_collision_mask) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_physics_layer_collision_mask");
      this._bindings.method_get_physics_layer_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_physics_layer_physics_material() {
    if (!this._bindings.method_set_physics_layer_physics_material) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_physics_layer_physics_material");
      this._bindings.method_set_physics_layer_physics_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1018687357
      );
    }
  }
  static init_method_get_physics_layer_physics_material() {
    if (!this._bindings.method_get_physics_layer_physics_material) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_physics_layer_physics_material");
      this._bindings.method_get_physics_layer_physics_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        788318639
      );
    }
  }
  static init_method_get_terrain_sets_count() {
    if (!this._bindings.method_get_terrain_sets_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_terrain_sets_count");
      this._bindings.method_get_terrain_sets_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_terrain_set() {
    if (!this._bindings.method_add_terrain_set) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_terrain_set");
      this._bindings.method_add_terrain_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025054187
      );
    }
  }
  static init_method_move_terrain_set() {
    if (!this._bindings.method_move_terrain_set) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("move_terrain_set");
      this._bindings.method_move_terrain_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_remove_terrain_set() {
    if (!this._bindings.method_remove_terrain_set) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_terrain_set");
      this._bindings.method_remove_terrain_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_terrain_set_mode() {
    if (!this._bindings.method_set_terrain_set_mode) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_terrain_set_mode");
      this._bindings.method_set_terrain_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3943003916
      );
    }
  }
  static init_method_get_terrain_set_mode() {
    if (!this._bindings.method_get_terrain_set_mode) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_terrain_set_mode");
      this._bindings.method_get_terrain_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2084469411
      );
    }
  }
  static init_method_get_terrains_count() {
    if (!this._bindings.method_get_terrains_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_terrains_count");
      this._bindings.method_get_terrains_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_add_terrain() {
    if (!this._bindings.method_add_terrain) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_terrain");
      this._bindings.method_add_terrain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1230568737
      );
    }
  }
  static init_method_move_terrain() {
    if (!this._bindings.method_move_terrain) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("move_terrain");
      this._bindings.method_move_terrain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1649997291
      );
    }
  }
  static init_method_remove_terrain() {
    if (!this._bindings.method_remove_terrain) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_terrain");
      this._bindings.method_remove_terrain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_terrain_name() {
    if (!this._bindings.method_set_terrain_name) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_terrain_name");
      this._bindings.method_set_terrain_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2285447957
      );
    }
  }
  static init_method_get_terrain_name() {
    if (!this._bindings.method_get_terrain_name) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_terrain_name");
      this._bindings.method_get_terrain_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1391810591
      );
    }
  }
  static init_method_set_terrain_color() {
    if (!this._bindings.method_set_terrain_color) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_terrain_color");
      this._bindings.method_set_terrain_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3733378741
      );
    }
  }
  static init_method_get_terrain_color() {
    if (!this._bindings.method_get_terrain_color) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_terrain_color");
      this._bindings.method_get_terrain_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2165839948
      );
    }
  }
  static init_method_get_navigation_layers_count() {
    if (!this._bindings.method_get_navigation_layers_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_navigation_layers_count");
      this._bindings.method_get_navigation_layers_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_navigation_layer() {
    if (!this._bindings.method_add_navigation_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_navigation_layer");
      this._bindings.method_add_navigation_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025054187
      );
    }
  }
  static init_method_move_navigation_layer() {
    if (!this._bindings.method_move_navigation_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("move_navigation_layer");
      this._bindings.method_move_navigation_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_remove_navigation_layer() {
    if (!this._bindings.method_remove_navigation_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_navigation_layer");
      this._bindings.method_remove_navigation_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_navigation_layer_layers() {
    if (!this._bindings.method_set_navigation_layer_layers) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_navigation_layer_layers");
      this._bindings.method_set_navigation_layer_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_navigation_layer_layers() {
    if (!this._bindings.method_get_navigation_layer_layers) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_navigation_layer_layers");
      this._bindings.method_get_navigation_layer_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_navigation_layer_layer_value() {
    if (!this._bindings.method_set_navigation_layer_layer_value) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_navigation_layer_layer_value");
      this._bindings.method_set_navigation_layer_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1383440665
      );
    }
  }
  static init_method_get_navigation_layer_layer_value() {
    if (!this._bindings.method_get_navigation_layer_layer_value) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_navigation_layer_layer_value");
      this._bindings.method_get_navigation_layer_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_get_custom_data_layers_count() {
    if (!this._bindings.method_get_custom_data_layers_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_custom_data_layers_count");
      this._bindings.method_get_custom_data_layers_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_custom_data_layer() {
    if (!this._bindings.method_add_custom_data_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_custom_data_layer");
      this._bindings.method_add_custom_data_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025054187
      );
    }
  }
  static init_method_move_custom_data_layer() {
    if (!this._bindings.method_move_custom_data_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("move_custom_data_layer");
      this._bindings.method_move_custom_data_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_remove_custom_data_layer() {
    if (!this._bindings.method_remove_custom_data_layer) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_custom_data_layer");
      this._bindings.method_remove_custom_data_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_custom_data_layer_by_name() {
    if (!this._bindings.method_get_custom_data_layer_by_name) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_custom_data_layer_by_name");
      this._bindings.method_get_custom_data_layer_by_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_set_custom_data_layer_name() {
    if (!this._bindings.method_set_custom_data_layer_name) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_custom_data_layer_name");
      this._bindings.method_set_custom_data_layer_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_custom_data_layer_name() {
    if (!this._bindings.method_get_custom_data_layer_name) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_custom_data_layer_name");
      this._bindings.method_get_custom_data_layer_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_custom_data_layer_type() {
    if (!this._bindings.method_set_custom_data_layer_type) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_custom_data_layer_type");
      this._bindings.method_set_custom_data_layer_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3492912874
      );
    }
  }
  static init_method_get_custom_data_layer_type() {
    if (!this._bindings.method_get_custom_data_layer_type) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_custom_data_layer_type");
      this._bindings.method_get_custom_data_layer_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2990820875
      );
    }
  }
  static init_method_set_source_level_tile_proxy() {
    if (!this._bindings.method_set_source_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_source_level_tile_proxy");
      this._bindings.method_set_source_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_source_level_tile_proxy() {
    if (!this._bindings.method_get_source_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_source_level_tile_proxy");
      this._bindings.method_get_source_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_has_source_level_tile_proxy() {
    if (!this._bindings.method_has_source_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("has_source_level_tile_proxy");
      this._bindings.method_has_source_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_remove_source_level_tile_proxy() {
    if (!this._bindings.method_remove_source_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_source_level_tile_proxy");
      this._bindings.method_remove_source_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_coords_level_tile_proxy() {
    if (!this._bindings.method_set_coords_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_coords_level_tile_proxy");
      this._bindings.method_set_coords_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1769939278
      );
    }
  }
  static init_method_get_coords_level_tile_proxy() {
    if (!this._bindings.method_get_coords_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_coords_level_tile_proxy");
      this._bindings.method_get_coords_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2856536371
      );
    }
  }
  static init_method_has_coords_level_tile_proxy() {
    if (!this._bindings.method_has_coords_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("has_coords_level_tile_proxy");
      this._bindings.method_has_coords_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3957903770
      );
    }
  }
  static init_method_remove_coords_level_tile_proxy() {
    if (!this._bindings.method_remove_coords_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_coords_level_tile_proxy");
      this._bindings.method_remove_coords_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2311374912
      );
    }
  }
  static init_method_set_alternative_level_tile_proxy() {
    if (!this._bindings.method_set_alternative_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("set_alternative_level_tile_proxy");
      this._bindings.method_set_alternative_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3862385460
      );
    }
  }
  static init_method_get_alternative_level_tile_proxy() {
    if (!this._bindings.method_get_alternative_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_alternative_level_tile_proxy");
      this._bindings.method_get_alternative_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2303761075
      );
    }
  }
  static init_method_has_alternative_level_tile_proxy() {
    if (!this._bindings.method_has_alternative_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("has_alternative_level_tile_proxy");
      this._bindings.method_has_alternative_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        180086755
      );
    }
  }
  static init_method_remove_alternative_level_tile_proxy() {
    if (!this._bindings.method_remove_alternative_level_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_alternative_level_tile_proxy");
      this._bindings.method_remove_alternative_level_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2328951467
      );
    }
  }
  static init_method_map_tile_proxy() {
    if (!this._bindings.method_map_tile_proxy) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("map_tile_proxy");
      this._bindings.method_map_tile_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4267935328
      );
    }
  }
  static init_method_cleanup_invalid_tile_proxies() {
    if (!this._bindings.method_cleanup_invalid_tile_proxies) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("cleanup_invalid_tile_proxies");
      this._bindings.method_cleanup_invalid_tile_proxies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_clear_tile_proxies() {
    if (!this._bindings.method_clear_tile_proxies) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("clear_tile_proxies");
      this._bindings.method_clear_tile_proxies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_add_pattern() {
    if (!this._bindings.method_add_pattern) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("add_pattern");
      this._bindings.method_add_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763712015
      );
    }
  }
  static init_method_get_pattern() {
    if (!this._bindings.method_get_pattern) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_pattern");
      this._bindings.method_get_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4207737510
      );
    }
  }
  static init_method_remove_pattern() {
    if (!this._bindings.method_remove_pattern) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("remove_pattern");
      this._bindings.method_remove_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_patterns_count() {
    if (!this._bindings.method_get_patterns_count) {
      let classname = new StringName("TileSet");
      let methodname = new StringName("get_patterns_count");
      this._bindings.method_get_patterns_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }

  
  
  get_next_source_id() {
    TileSet.init_method_get_next_source_id();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_next_source_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_source(_source, _atlas_source_id_override) {
    TileSet.init_method_add_source();
    return _call_native_mb_ret(
      TileSet._bindings.method_add_source,
      this._owner,
			Variant.Type.INT,
    
      _source, _atlas_source_id_override
    );
    
  }
  remove_source(_source_id) {
    TileSet.init_method_remove_source();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_source,
      this._owner,
      _source_id
    );
    
  }
  set_source_id(_source_id, _new_source_id) {
    TileSet.init_method_set_source_id();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_source_id,
      this._owner,
      _source_id, _new_source_id
    );
    
  }
  get_source_count() {
    TileSet.init_method_get_source_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_source_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_source_id(_index) {
    TileSet.init_method_get_source_id();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_source_id,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  has_source(_source_id) {
    TileSet.init_method_has_source();
    return _call_native_mb_ret(
      TileSet._bindings.method_has_source,
      this._owner,
			Variant.Type.BOOL,
    
      _source_id
    );
    
  }
  get_source(_source_id) {
    TileSet.init_method_get_source();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_source,
      this._owner,
			Variant.Type.OBJECT,
      _source_id
    );
    
  }
  set_tile_shape(_shape) {
    TileSet.init_method_set_tile_shape();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_tile_shape,
      this._owner,
      _shape
    );
    
  }
  get_tile_shape() {
    TileSet.init_method_get_tile_shape();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_tile_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tile_layout(_layout) {
    TileSet.init_method_set_tile_layout();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_tile_layout,
      this._owner,
      _layout
    );
    
  }
  get_tile_layout() {
    TileSet.init_method_get_tile_layout();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_tile_layout,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tile_offset_axis(_alignment) {
    TileSet.init_method_set_tile_offset_axis();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_tile_offset_axis,
      this._owner,
      _alignment
    );
    
  }
  get_tile_offset_axis() {
    TileSet.init_method_get_tile_offset_axis();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_tile_offset_axis,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tile_size(_size) {
    TileSet.init_method_set_tile_size();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_tile_size,
      this._owner,
      _size
    );
    
  }
  get_tile_size() {
    TileSet.init_method_get_tile_size();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_tile_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_uv_clipping(_uv_clipping) {
    TileSet.init_method_set_uv_clipping();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_uv_clipping,
      this._owner,
      _uv_clipping
    );
    
  }
  is_uv_clipping() {
    TileSet.init_method_is_uv_clipping();
    return _call_native_mb_ret(
      TileSet._bindings.method_is_uv_clipping,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_occlusion_layers_count() {
    TileSet.init_method_get_occlusion_layers_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_occlusion_layers_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_occlusion_layer(_to_position) {
    TileSet.init_method_add_occlusion_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_add_occlusion_layer,
      this._owner,
      _to_position
    );
    
  }
  move_occlusion_layer(_layer_index, _to_position) {
    TileSet.init_method_move_occlusion_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_move_occlusion_layer,
      this._owner,
      _layer_index, _to_position
    );
    
  }
  remove_occlusion_layer(_layer_index) {
    TileSet.init_method_remove_occlusion_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_occlusion_layer,
      this._owner,
      _layer_index
    );
    
  }
  set_occlusion_layer_light_mask(_layer_index, _light_mask) {
    TileSet.init_method_set_occlusion_layer_light_mask();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_occlusion_layer_light_mask,
      this._owner,
      _layer_index, _light_mask
    );
    
  }
  get_occlusion_layer_light_mask(_layer_index) {
    TileSet.init_method_get_occlusion_layer_light_mask();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_occlusion_layer_light_mask,
      this._owner,
			Variant.Type.INT,
    
      _layer_index
    );
    
  }
  set_occlusion_layer_sdf_collision(_layer_index, _sdf_collision) {
    TileSet.init_method_set_occlusion_layer_sdf_collision();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_occlusion_layer_sdf_collision,
      this._owner,
      _layer_index, _sdf_collision
    );
    
  }
  get_occlusion_layer_sdf_collision(_layer_index) {
    TileSet.init_method_get_occlusion_layer_sdf_collision();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_occlusion_layer_sdf_collision,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_index
    );
    
  }
  get_physics_layers_count() {
    TileSet.init_method_get_physics_layers_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_physics_layers_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_physics_layer(_to_position) {
    TileSet.init_method_add_physics_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_add_physics_layer,
      this._owner,
      _to_position
    );
    
  }
  move_physics_layer(_layer_index, _to_position) {
    TileSet.init_method_move_physics_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_move_physics_layer,
      this._owner,
      _layer_index, _to_position
    );
    
  }
  remove_physics_layer(_layer_index) {
    TileSet.init_method_remove_physics_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_physics_layer,
      this._owner,
      _layer_index
    );
    
  }
  set_physics_layer_collision_layer(_layer_index, _layer) {
    TileSet.init_method_set_physics_layer_collision_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_physics_layer_collision_layer,
      this._owner,
      _layer_index, _layer
    );
    
  }
  get_physics_layer_collision_layer(_layer_index) {
    TileSet.init_method_get_physics_layer_collision_layer();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_physics_layer_collision_layer,
      this._owner,
			Variant.Type.INT,
    
      _layer_index
    );
    
  }
  set_physics_layer_collision_mask(_layer_index, _mask) {
    TileSet.init_method_set_physics_layer_collision_mask();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_physics_layer_collision_mask,
      this._owner,
      _layer_index, _mask
    );
    
  }
  get_physics_layer_collision_mask(_layer_index) {
    TileSet.init_method_get_physics_layer_collision_mask();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_physics_layer_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      _layer_index
    );
    
  }
  set_physics_layer_physics_material(_layer_index, _physics_material) {
    TileSet.init_method_set_physics_layer_physics_material();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_physics_layer_physics_material,
      this._owner,
      _layer_index, _physics_material
    );
    
  }
  get_physics_layer_physics_material(_layer_index) {
    TileSet.init_method_get_physics_layer_physics_material();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_physics_layer_physics_material,
      this._owner,
			Variant.Type.OBJECT,
      _layer_index
    );
    
  }
  get_terrain_sets_count() {
    TileSet.init_method_get_terrain_sets_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_terrain_sets_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_terrain_set(_to_position) {
    TileSet.init_method_add_terrain_set();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_add_terrain_set,
      this._owner,
      _to_position
    );
    
  }
  move_terrain_set(_terrain_set, _to_position) {
    TileSet.init_method_move_terrain_set();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_move_terrain_set,
      this._owner,
      _terrain_set, _to_position
    );
    
  }
  remove_terrain_set(_terrain_set) {
    TileSet.init_method_remove_terrain_set();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_terrain_set,
      this._owner,
      _terrain_set
    );
    
  }
  set_terrain_set_mode(_terrain_set, _mode) {
    TileSet.init_method_set_terrain_set_mode();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_terrain_set_mode,
      this._owner,
      _terrain_set, _mode
    );
    
  }
  get_terrain_set_mode(_terrain_set) {
    TileSet.init_method_get_terrain_set_mode();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_terrain_set_mode,
      this._owner,
			Variant.Type.INT,
    
      _terrain_set
    );
    
  }
  get_terrains_count(_terrain_set) {
    TileSet.init_method_get_terrains_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_terrains_count,
      this._owner,
			Variant.Type.INT,
    
      _terrain_set
    );
    
  }
  add_terrain(_terrain_set, _to_position) {
    TileSet.init_method_add_terrain();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_add_terrain,
      this._owner,
      _terrain_set, _to_position
    );
    
  }
  move_terrain(_terrain_set, _terrain_index, _to_position) {
    TileSet.init_method_move_terrain();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_move_terrain,
      this._owner,
      _terrain_set, _terrain_index, _to_position
    );
    
  }
  remove_terrain(_terrain_set, _terrain_index) {
    TileSet.init_method_remove_terrain();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_terrain,
      this._owner,
      _terrain_set, _terrain_index
    );
    
  }
  set_terrain_name(_terrain_set, _terrain_index, _name) {
    TileSet.init_method_set_terrain_name();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_terrain_name,
      this._owner,
      _terrain_set, _terrain_index, _name
    );
    
  }
  get_terrain_name(_terrain_set, _terrain_index) {
    TileSet.init_method_get_terrain_name();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_terrain_name,
      this._owner,
			Variant.Type.STRING,
    
      _terrain_set, _terrain_index
    );
    
  }
  set_terrain_color(_terrain_set, _terrain_index, _color) {
    TileSet.init_method_set_terrain_color();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_terrain_color,
      this._owner,
      _terrain_set, _terrain_index, _color
    );
    
  }
  get_terrain_color(_terrain_set, _terrain_index) {
    TileSet.init_method_get_terrain_color();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_terrain_color,
      this._owner,
			Variant.Type.COLOR,
    
      _terrain_set, _terrain_index
    );
    
  }
  get_navigation_layers_count() {
    TileSet.init_method_get_navigation_layers_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_navigation_layers_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_navigation_layer(_to_position) {
    TileSet.init_method_add_navigation_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_add_navigation_layer,
      this._owner,
      _to_position
    );
    
  }
  move_navigation_layer(_layer_index, _to_position) {
    TileSet.init_method_move_navigation_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_move_navigation_layer,
      this._owner,
      _layer_index, _to_position
    );
    
  }
  remove_navigation_layer(_layer_index) {
    TileSet.init_method_remove_navigation_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_navigation_layer,
      this._owner,
      _layer_index
    );
    
  }
  set_navigation_layer_layers(_layer_index, _layers) {
    TileSet.init_method_set_navigation_layer_layers();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_navigation_layer_layers,
      this._owner,
      _layer_index, _layers
    );
    
  }
  get_navigation_layer_layers(_layer_index) {
    TileSet.init_method_get_navigation_layer_layers();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_navigation_layer_layers,
      this._owner,
			Variant.Type.INT,
    
      _layer_index
    );
    
  }
  set_navigation_layer_layer_value(_layer_index, _layer_number, _value) {
    TileSet.init_method_set_navigation_layer_layer_value();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_navigation_layer_layer_value,
      this._owner,
      _layer_index, _layer_number, _value
    );
    
  }
  get_navigation_layer_layer_value(_layer_index, _layer_number) {
    TileSet.init_method_get_navigation_layer_layer_value();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_navigation_layer_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_index, _layer_number
    );
    
  }
  get_custom_data_layers_count() {
    TileSet.init_method_get_custom_data_layers_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_custom_data_layers_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_custom_data_layer(_to_position) {
    TileSet.init_method_add_custom_data_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_add_custom_data_layer,
      this._owner,
      _to_position
    );
    
  }
  move_custom_data_layer(_layer_index, _to_position) {
    TileSet.init_method_move_custom_data_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_move_custom_data_layer,
      this._owner,
      _layer_index, _to_position
    );
    
  }
  remove_custom_data_layer(_layer_index) {
    TileSet.init_method_remove_custom_data_layer();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_custom_data_layer,
      this._owner,
      _layer_index
    );
    
  }
  get_custom_data_layer_by_name(_layer_name) {
    TileSet.init_method_get_custom_data_layer_by_name();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_custom_data_layer_by_name,
      this._owner,
			Variant.Type.INT,
    
      _layer_name
    );
    
  }
  set_custom_data_layer_name(_layer_index, _layer_name) {
    TileSet.init_method_set_custom_data_layer_name();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_custom_data_layer_name,
      this._owner,
      _layer_index, _layer_name
    );
    
  }
  get_custom_data_layer_name(_layer_index) {
    TileSet.init_method_get_custom_data_layer_name();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_custom_data_layer_name,
      this._owner,
			Variant.Type.STRING,
    
      _layer_index
    );
    
  }
  set_custom_data_layer_type(_layer_index, _layer_type) {
    TileSet.init_method_set_custom_data_layer_type();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_custom_data_layer_type,
      this._owner,
      _layer_index, _layer_type
    );
    
  }
  get_custom_data_layer_type(_layer_index) {
    TileSet.init_method_get_custom_data_layer_type();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_custom_data_layer_type,
      this._owner,
			Variant.Type.INT,
    
      _layer_index
    );
    
  }
  set_source_level_tile_proxy(_source_from, _source_to) {
    TileSet.init_method_set_source_level_tile_proxy();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_source_level_tile_proxy,
      this._owner,
      _source_from, _source_to
    );
    
  }
  get_source_level_tile_proxy(_source_from) {
    TileSet.init_method_get_source_level_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_source_level_tile_proxy,
      this._owner,
			Variant.Type.INT,
    
      _source_from
    );
    
  }
  has_source_level_tile_proxy(_source_from) {
    TileSet.init_method_has_source_level_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_has_source_level_tile_proxy,
      this._owner,
			Variant.Type.BOOL,
    
      _source_from
    );
    
  }
  remove_source_level_tile_proxy(_source_from) {
    TileSet.init_method_remove_source_level_tile_proxy();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_source_level_tile_proxy,
      this._owner,
      _source_from
    );
    
  }
  set_coords_level_tile_proxy(_p_source_from, _coords_from, _source_to, _coords_to) {
    TileSet.init_method_set_coords_level_tile_proxy();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_coords_level_tile_proxy,
      this._owner,
      _p_source_from, _coords_from, _source_to, _coords_to
    );
    
  }
  get_coords_level_tile_proxy(_source_from, _coords_from) {
    TileSet.init_method_get_coords_level_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_coords_level_tile_proxy,
      this._owner,
			Variant.Type.ARRAY,
    
      _source_from, _coords_from
    );
    
  }
  has_coords_level_tile_proxy(_source_from, _coords_from) {
    TileSet.init_method_has_coords_level_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_has_coords_level_tile_proxy,
      this._owner,
			Variant.Type.BOOL,
    
      _source_from, _coords_from
    );
    
  }
  remove_coords_level_tile_proxy(_source_from, _coords_from) {
    TileSet.init_method_remove_coords_level_tile_proxy();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_coords_level_tile_proxy,
      this._owner,
      _source_from, _coords_from
    );
    
  }
  set_alternative_level_tile_proxy(_source_from, _coords_from, _alternative_from, _source_to, _coords_to, _alternative_to) {
    TileSet.init_method_set_alternative_level_tile_proxy();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_set_alternative_level_tile_proxy,
      this._owner,
      _source_from, _coords_from, _alternative_from, _source_to, _coords_to, _alternative_to
    );
    
  }
  get_alternative_level_tile_proxy(_source_from, _coords_from, _alternative_from) {
    TileSet.init_method_get_alternative_level_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_alternative_level_tile_proxy,
      this._owner,
			Variant.Type.ARRAY,
    
      _source_from, _coords_from, _alternative_from
    );
    
  }
  has_alternative_level_tile_proxy(_source_from, _coords_from, _alternative_from) {
    TileSet.init_method_has_alternative_level_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_has_alternative_level_tile_proxy,
      this._owner,
			Variant.Type.BOOL,
    
      _source_from, _coords_from, _alternative_from
    );
    
  }
  remove_alternative_level_tile_proxy(_source_from, _coords_from, _alternative_from) {
    TileSet.init_method_remove_alternative_level_tile_proxy();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_alternative_level_tile_proxy,
      this._owner,
      _source_from, _coords_from, _alternative_from
    );
    
  }
  map_tile_proxy(_source_from, _coords_from, _alternative_from) {
    TileSet.init_method_map_tile_proxy();
    return _call_native_mb_ret(
      TileSet._bindings.method_map_tile_proxy,
      this._owner,
			Variant.Type.ARRAY,
    
      _source_from, _coords_from, _alternative_from
    );
    
  }
  cleanup_invalid_tile_proxies() {
    TileSet.init_method_cleanup_invalid_tile_proxies();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_cleanup_invalid_tile_proxies,
      this._owner,
      
    );
    
  }
  clear_tile_proxies() {
    TileSet.init_method_clear_tile_proxies();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_clear_tile_proxies,
      this._owner,
      
    );
    
  }
  add_pattern(_pattern, _index) {
    TileSet.init_method_add_pattern();
    return _call_native_mb_ret(
      TileSet._bindings.method_add_pattern,
      this._owner,
			Variant.Type.INT,
    
      _pattern, _index
    );
    
  }
  get_pattern(_index) {
    TileSet.init_method_get_pattern();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_pattern,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  remove_pattern(_index) {
    TileSet.init_method_remove_pattern();
    return _call_native_mb_no_ret(
      TileSet._bindings.method_remove_pattern,
      this._owner,
      _index
    );
    
  }
  get_patterns_count() {
    TileSet.init_method_get_patterns_count();
    return _call_native_mb_ret(
      TileSet._bindings.method_get_patterns_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get tile_shape () {
  return this.get_tile_shape();
}
set tile_shape (new_value) {
  this.set_tile_shape(new_value);
}
get tile_layout () {
  return this.get_tile_layout();
}
set tile_layout (new_value) {
  this.set_tile_layout(new_value);
}
get tile_offset_axis () {
  return this.get_tile_offset_axis();
}
set tile_offset_axis (new_value) {
  this.set_tile_offset_axis(new_value);
}
get tile_size () {
  return this.get_tile_size();
}
set tile_size (new_value) {
  this.set_tile_size(new_value);
}
get uv_clipping () {
  return this.is_uv_clipping();
}
set uv_clipping (new_value) {
  this.set_uv_clipping(new_value);
}

  static TileShape = {
    TILE_SHAPE_SQUARE: 0,
    TILE_SHAPE_ISOMETRIC: 1,
    TILE_SHAPE_HALF_OFFSET_SQUARE: 2,
    TILE_SHAPE_HEXAGON: 3,
  }
  static TileLayout = {
    TILE_LAYOUT_STACKED: 0,
    TILE_LAYOUT_STACKED_OFFSET: 1,
    TILE_LAYOUT_STAIRS_RIGHT: 2,
    TILE_LAYOUT_STAIRS_DOWN: 3,
    TILE_LAYOUT_DIAMOND_RIGHT: 4,
    TILE_LAYOUT_DIAMOND_DOWN: 5,
  }
  static TileOffsetAxis = {
    TILE_OFFSET_AXIS_HORIZONTAL: 0,
    TILE_OFFSET_AXIS_VERTICAL: 1,
  }
  static CellNeighbor = {
    CELL_NEIGHBOR_RIGHT_SIDE: 0,
    CELL_NEIGHBOR_RIGHT_CORNER: 1,
    CELL_NEIGHBOR_BOTTOM_RIGHT_SIDE: 2,
    CELL_NEIGHBOR_BOTTOM_RIGHT_CORNER: 3,
    CELL_NEIGHBOR_BOTTOM_SIDE: 4,
    CELL_NEIGHBOR_BOTTOM_CORNER: 5,
    CELL_NEIGHBOR_BOTTOM_LEFT_SIDE: 6,
    CELL_NEIGHBOR_BOTTOM_LEFT_CORNER: 7,
    CELL_NEIGHBOR_LEFT_SIDE: 8,
    CELL_NEIGHBOR_LEFT_CORNER: 9,
    CELL_NEIGHBOR_TOP_LEFT_SIDE: 10,
    CELL_NEIGHBOR_TOP_LEFT_CORNER: 11,
    CELL_NEIGHBOR_TOP_SIDE: 12,
    CELL_NEIGHBOR_TOP_CORNER: 13,
    CELL_NEIGHBOR_TOP_RIGHT_SIDE: 14,
    CELL_NEIGHBOR_TOP_RIGHT_CORNER: 15,
  }
  static TerrainMode = {
    TERRAIN_MODE_MATCH_CORNERS_AND_SIDES: 0,
    TERRAIN_MODE_MATCH_CORNERS: 1,
    TERRAIN_MODE_MATCH_SIDES: 2,
  }
}