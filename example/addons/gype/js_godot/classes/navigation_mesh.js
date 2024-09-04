import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { Vector3 } from '@js_godot/variant/vector3'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { StringName } from '@js_godot/variant/string_name'
import { AABB } from '@js_godot/variant/aabb'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_sample_partition_type;
  method_get_sample_partition_type;
  method_set_parsed_geometry_type;
  method_get_parsed_geometry_type;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_collision_mask_value;
  method_get_collision_mask_value;
  method_set_source_geometry_mode;
  method_get_source_geometry_mode;
  method_set_source_group_name;
  method_get_source_group_name;
  method_set_cell_size;
  method_get_cell_size;
  method_set_cell_height;
  method_get_cell_height;
  method_set_border_size;
  method_get_border_size;
  method_set_agent_height;
  method_get_agent_height;
  method_set_agent_radius;
  method_get_agent_radius;
  method_set_agent_max_climb;
  method_get_agent_max_climb;
  method_set_agent_max_slope;
  method_get_agent_max_slope;
  method_set_region_min_size;
  method_get_region_min_size;
  method_set_region_merge_size;
  method_get_region_merge_size;
  method_set_edge_max_length;
  method_get_edge_max_length;
  method_set_edge_max_error;
  method_get_edge_max_error;
  method_set_vertices_per_polygon;
  method_get_vertices_per_polygon;
  method_set_detail_sample_distance;
  method_get_detail_sample_distance;
  method_set_detail_sample_max_error;
  method_get_detail_sample_max_error;
  method_set_filter_low_hanging_obstacles;
  method_get_filter_low_hanging_obstacles;
  method_set_filter_ledge_spans;
  method_get_filter_ledge_spans;
  method_set_filter_walkable_low_height_spans;
  method_get_filter_walkable_low_height_spans;
  method_set_filter_baking_aabb;
  method_get_filter_baking_aabb;
  method_set_filter_baking_aabb_offset;
  method_get_filter_baking_aabb_offset;
  method_set_vertices;
  method_get_vertices;
  method_add_polygon;
  method_get_polygon_count;
  method_get_polygon;
  method_clear_polygons;
  method_create_from_mesh;
  method_clear;
}
export class NavigationMesh extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationMesh");
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
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_sample_partition_type");
      this._bindings.method_set_sample_partition_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2472437533
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_sample_partition_type");
      this._bindings.method_get_sample_partition_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        833513918
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_parsed_geometry_type");
      this._bindings.method_set_parsed_geometry_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3064713163
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_parsed_geometry_type");
      this._bindings.method_get_parsed_geometry_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3928011953
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_collision_mask_value");
      this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_collision_mask_value");
      this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_source_geometry_mode");
      this._bindings.method_set_source_geometry_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2700825194
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_source_geometry_mode");
      this._bindings.method_get_source_geometry_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2770484141
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_source_group_name");
      this._bindings.method_set_source_group_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_source_group_name");
      this._bindings.method_get_source_group_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_cell_size");
      this._bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_cell_size");
      this._bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_cell_height");
      this._bindings.method_set_cell_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_cell_height");
      this._bindings.method_get_cell_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_border_size");
      this._bindings.method_set_border_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_border_size");
      this._bindings.method_get_border_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_agent_height");
      this._bindings.method_set_agent_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_agent_height");
      this._bindings.method_get_agent_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_agent_radius");
      this._bindings.method_set_agent_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_agent_radius");
      this._bindings.method_get_agent_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_agent_max_climb");
      this._bindings.method_set_agent_max_climb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_agent_max_climb");
      this._bindings.method_get_agent_max_climb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_agent_max_slope");
      this._bindings.method_set_agent_max_slope = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_agent_max_slope");
      this._bindings.method_get_agent_max_slope = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_region_min_size");
      this._bindings.method_set_region_min_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_region_min_size");
      this._bindings.method_get_region_min_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_region_merge_size");
      this._bindings.method_set_region_merge_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_region_merge_size");
      this._bindings.method_get_region_merge_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_edge_max_length");
      this._bindings.method_set_edge_max_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_edge_max_length");
      this._bindings.method_get_edge_max_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_edge_max_error");
      this._bindings.method_set_edge_max_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_edge_max_error");
      this._bindings.method_get_edge_max_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_vertices_per_polygon");
      this._bindings.method_set_vertices_per_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_vertices_per_polygon");
      this._bindings.method_get_vertices_per_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_detail_sample_distance");
      this._bindings.method_set_detail_sample_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_detail_sample_distance");
      this._bindings.method_get_detail_sample_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_detail_sample_max_error");
      this._bindings.method_set_detail_sample_max_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_detail_sample_max_error");
      this._bindings.method_get_detail_sample_max_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_filter_low_hanging_obstacles");
      this._bindings.method_set_filter_low_hanging_obstacles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_filter_low_hanging_obstacles");
      this._bindings.method_get_filter_low_hanging_obstacles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_filter_ledge_spans");
      this._bindings.method_set_filter_ledge_spans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_filter_ledge_spans");
      this._bindings.method_get_filter_ledge_spans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_filter_walkable_low_height_spans");
      this._bindings.method_set_filter_walkable_low_height_spans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_filter_walkable_low_height_spans");
      this._bindings.method_get_filter_walkable_low_height_spans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_filter_baking_aabb");
      this._bindings.method_set_filter_baking_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_filter_baking_aabb");
      this._bindings.method_get_filter_baking_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_filter_baking_aabb_offset");
      this._bindings.method_set_filter_baking_aabb_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_filter_baking_aabb_offset");
      this._bindings.method_get_filter_baking_aabb_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("set_vertices");
      this._bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_vertices");
      this._bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("add_polygon");
      this._bindings.method_add_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_polygon_count");
      this._bindings.method_get_polygon_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3668444399
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("clear_polygons");
      this._bindings.method_clear_polygons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("create_from_mesh");
      this._bindings.method_create_from_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        194775623
      );
    }
    {
      let classname = new StringName("NavigationMesh");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  set_sample_partition_type(_sample_partition_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sample_partition_type,
      this._owner,
      _sample_partition_type
    );
    
  }
  get_sample_partition_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sample_partition_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_parsed_geometry_type(_geometry_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parsed_geometry_type,
      this._owner,
      _geometry_type
    );
    
  }
  get_parsed_geometry_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parsed_geometry_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  set_source_geometry_mode(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_source_geometry_mode,
      this._owner,
      _mask
    );
    
  }
  get_source_geometry_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source_geometry_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_source_group_name(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_source_group_name,
      this._owner,
      _mask
    );
    
  }
  get_source_group_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source_group_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_cell_size(_cell_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_size,
      this._owner,
      _cell_size
    );
    
  }
  get_cell_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_cell_height(_cell_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_height,
      this._owner,
      _cell_height
    );
    
  }
  get_cell_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_border_size(_border_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_border_size,
      this._owner,
      _border_size
    );
    
  }
  get_border_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_border_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_agent_height(_agent_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_agent_height,
      this._owner,
      _agent_height
    );
    
  }
  get_agent_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_agent_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_agent_radius(_agent_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_agent_radius,
      this._owner,
      _agent_radius
    );
    
  }
  get_agent_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_agent_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_agent_max_climb(_agent_max_climb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_agent_max_climb,
      this._owner,
      _agent_max_climb
    );
    
  }
  get_agent_max_climb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_agent_max_climb,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_agent_max_slope(_agent_max_slope) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_agent_max_slope,
      this._owner,
      _agent_max_slope
    );
    
  }
  get_agent_max_slope() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_agent_max_slope,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_region_min_size(_region_min_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_region_min_size,
      this._owner,
      _region_min_size
    );
    
  }
  get_region_min_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_region_min_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_region_merge_size(_region_merge_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_region_merge_size,
      this._owner,
      _region_merge_size
    );
    
  }
  get_region_merge_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_region_merge_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_edge_max_length(_edge_max_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edge_max_length,
      this._owner,
      _edge_max_length
    );
    
  }
  get_edge_max_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_max_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_edge_max_error(_edge_max_error) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edge_max_error,
      this._owner,
      _edge_max_error
    );
    
  }
  get_edge_max_error() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_max_error,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vertices_per_polygon(_vertices_per_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertices_per_polygon,
      this._owner,
      _vertices_per_polygon
    );
    
  }
  get_vertices_per_polygon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertices_per_polygon,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_detail_sample_distance(_detail_sample_dist) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_detail_sample_distance,
      this._owner,
      _detail_sample_dist
    );
    
  }
  get_detail_sample_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_detail_sample_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_detail_sample_max_error(_detail_sample_max_error) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_detail_sample_max_error,
      this._owner,
      _detail_sample_max_error
    );
    
  }
  get_detail_sample_max_error() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_detail_sample_max_error,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_filter_low_hanging_obstacles(_filter_low_hanging_obstacles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_filter_low_hanging_obstacles,
      this._owner,
      _filter_low_hanging_obstacles
    );
    
  }
  get_filter_low_hanging_obstacles() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_filter_low_hanging_obstacles,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_filter_ledge_spans(_filter_ledge_spans) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_filter_ledge_spans,
      this._owner,
      _filter_ledge_spans
    );
    
  }
  get_filter_ledge_spans() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_filter_ledge_spans,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_filter_walkable_low_height_spans(_filter_walkable_low_height_spans) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_filter_walkable_low_height_spans,
      this._owner,
      _filter_walkable_low_height_spans
    );
    
  }
  get_filter_walkable_low_height_spans() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_filter_walkable_low_height_spans,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_filter_baking_aabb(_baking_aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_filter_baking_aabb,
      this._owner,
      _baking_aabb
    );
    
  }
  get_filter_baking_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_filter_baking_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  set_filter_baking_aabb_offset(_baking_aabb_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_filter_baking_aabb_offset,
      this._owner,
      _baking_aabb_offset
    );
    
  }
  get_filter_baking_aabb_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_filter_baking_aabb_offset,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_vertices(_vertices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
    
  }
  get_vertices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  add_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_polygon(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  clear_polygons() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_polygons,
      this._owner,
      
    );
    
  }
  create_from_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_from_mesh,
      this._owner,
      _mesh
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  
get vertices () {
  return this.get_vertices();
}
set vertices (new_value) {
  this.set_vertices(new_value);
}
get polygons () {
  return this._get_polygons();
}
set polygons (new_value) {
  this._set_polygons(new_value);
}
get sample_partition_type () {
  return this.get_sample_partition_type();
}
set sample_partition_type (new_value) {
  this.set_sample_partition_type(new_value);
}
get geometry_parsed_geometry_type () {
  return this.get_parsed_geometry_type();
}
set geometry_parsed_geometry_type (new_value) {
  this.set_parsed_geometry_type(new_value);
}
get geometry_collision_mask () {
  return this.get_collision_mask();
}
set geometry_collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get geometry_source_geometry_mode () {
  return this.get_source_geometry_mode();
}
set geometry_source_geometry_mode (new_value) {
  this.set_source_geometry_mode(new_value);
}
get geometry_source_group_name () {
  return this.get_source_group_name();
}
set geometry_source_group_name (new_value) {
  this.set_source_group_name(new_value);
}
get cell_size () {
  return this.get_cell_size();
}
set cell_size (new_value) {
  this.set_cell_size(new_value);
}
get cell_height () {
  return this.get_cell_height();
}
set cell_height (new_value) {
  this.set_cell_height(new_value);
}
get border_size () {
  return this.get_border_size();
}
set border_size (new_value) {
  this.set_border_size(new_value);
}
get agent_height () {
  return this.get_agent_height();
}
set agent_height (new_value) {
  this.set_agent_height(new_value);
}
get agent_radius () {
  return this.get_agent_radius();
}
set agent_radius (new_value) {
  this.set_agent_radius(new_value);
}
get agent_max_climb () {
  return this.get_agent_max_climb();
}
set agent_max_climb (new_value) {
  this.set_agent_max_climb(new_value);
}
get agent_max_slope () {
  return this.get_agent_max_slope();
}
set agent_max_slope (new_value) {
  this.set_agent_max_slope(new_value);
}
get region_min_size () {
  return this.get_region_min_size();
}
set region_min_size (new_value) {
  this.set_region_min_size(new_value);
}
get region_merge_size () {
  return this.get_region_merge_size();
}
set region_merge_size (new_value) {
  this.set_region_merge_size(new_value);
}
get edge_max_length () {
  return this.get_edge_max_length();
}
set edge_max_length (new_value) {
  this.set_edge_max_length(new_value);
}
get edge_max_error () {
  return this.get_edge_max_error();
}
set edge_max_error (new_value) {
  this.set_edge_max_error(new_value);
}
get vertices_per_polygon () {
  return this.get_vertices_per_polygon();
}
set vertices_per_polygon (new_value) {
  this.set_vertices_per_polygon(new_value);
}
get detail_sample_distance () {
  return this.get_detail_sample_distance();
}
set detail_sample_distance (new_value) {
  this.set_detail_sample_distance(new_value);
}
get detail_sample_max_error () {
  return this.get_detail_sample_max_error();
}
set detail_sample_max_error (new_value) {
  this.set_detail_sample_max_error(new_value);
}
get filter_low_hanging_obstacles () {
  return this.get_filter_low_hanging_obstacles();
}
set filter_low_hanging_obstacles (new_value) {
  this.set_filter_low_hanging_obstacles(new_value);
}
get filter_ledge_spans () {
  return this.get_filter_ledge_spans();
}
set filter_ledge_spans (new_value) {
  this.set_filter_ledge_spans(new_value);
}
get filter_walkable_low_height_spans () {
  return this.get_filter_walkable_low_height_spans();
}
set filter_walkable_low_height_spans (new_value) {
  this.set_filter_walkable_low_height_spans(new_value);
}
get filter_baking_aabb () {
  return this.get_filter_baking_aabb();
}
set filter_baking_aabb (new_value) {
  this.set_filter_baking_aabb(new_value);
}
get filter_baking_aabb_offset () {
  return this.get_filter_baking_aabb_offset();
}
set filter_baking_aabb_offset (new_value) {
  this.set_filter_baking_aabb_offset(new_value);
}

  static SamplePartitionType = {
    SAMPLE_PARTITION_WATERSHED: 0,
    SAMPLE_PARTITION_MONOTONE: 1,
    SAMPLE_PARTITION_LAYERS: 2,
    SAMPLE_PARTITION_MAX: 3,
  }
  static ParsedGeometryType = {
    PARSED_GEOMETRY_MESH_INSTANCES: 0,
    PARSED_GEOMETRY_STATIC_COLLIDERS: 1,
    PARSED_GEOMETRY_BOTH: 2,
    PARSED_GEOMETRY_MAX: 3,
  }
  static SourceGeometryMode = {
    SOURCE_GEOMETRY_ROOT_NODE_CHILDREN: 0,
    SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN: 1,
    SOURCE_GEOMETRY_GROUPS_EXPLICIT: 2,
    SOURCE_GEOMETRY_MAX: 3,
  }

  static {
    this._init_bindings();
  }
}