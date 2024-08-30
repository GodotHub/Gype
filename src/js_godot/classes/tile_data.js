import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { Variant } from 'src/js_godot/variant/variant'
import { Color } from 'src/js_godot/variant/color'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_flip_h;
    method_get_flip_h;
    method_set_flip_v;
    method_get_flip_v;
    method_set_transpose;
    method_get_transpose;
    method_set_material;
    method_get_material;
    method_set_texture_origin;
    method_get_texture_origin;
    method_set_modulate;
    method_get_modulate;
    method_set_z_index;
    method_get_z_index;
    method_set_y_sort_origin;
    method_get_y_sort_origin;
    method_set_occluder;
    method_get_occluder;
    method_set_constant_linear_velocity;
    method_get_constant_linear_velocity;
    method_set_constant_angular_velocity;
    method_get_constant_angular_velocity;
    method_set_collision_polygons_count;
    method_get_collision_polygons_count;
    method_add_collision_polygon;
    method_remove_collision_polygon;
    method_set_collision_polygon_points;
    method_get_collision_polygon_points;
    method_set_collision_polygon_one_way;
    method_is_collision_polygon_one_way;
    method_set_collision_polygon_one_way_margin;
    method_get_collision_polygon_one_way_margin;
    method_set_terrain_set;
    method_get_terrain_set;
    method_set_terrain;
    method_get_terrain;
    method_set_terrain_peering_bit;
    method_get_terrain_peering_bit;
    method_is_valid_terrain_peering_bit;
    method_set_navigation_polygon;
    method_get_navigation_polygon;
    method_set_probability;
    method_get_probability;
    method_set_custom_data;
    method_get_custom_data;
    method_set_custom_data_by_layer_id;
    method_get_custom_data_by_layer_id;
}


export class TileData extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileData");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_flip_h");
        this._bindings.method_set_flip_h = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_flip_h");
        this._bindings.method_get_flip_h = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_flip_v");
        this._bindings.method_set_flip_v = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_flip_v");
        this._bindings.method_get_flip_v = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_transpose");
        this._bindings.method_set_transpose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_transpose");
        this._bindings.method_get_transpose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_material");
        this._bindings.method_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2757459619
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_material");
        this._bindings.method_get_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          5934680
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_texture_origin");
        this._bindings.method_set_texture_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1130785943
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_texture_origin");
        this._bindings.method_get_texture_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3690982128
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_modulate");
        this._bindings.method_set_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_modulate");
        this._bindings.method_get_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_z_index");
        this._bindings.method_set_z_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_z_index");
        this._bindings.method_get_z_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_y_sort_origin");
        this._bindings.method_set_y_sort_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_y_sort_origin");
        this._bindings.method_get_y_sort_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_occluder");
        this._bindings.method_set_occluder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          914399637
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_occluder");
        this._bindings.method_get_occluder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2377324099
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_constant_linear_velocity");
        this._bindings.method_set_constant_linear_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          163021252
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_constant_linear_velocity");
        this._bindings.method_get_constant_linear_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2299179447
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_constant_angular_velocity");
        this._bindings.method_set_constant_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1602489585
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_constant_angular_velocity");
        this._bindings.method_get_constant_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2339986948
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_collision_polygons_count");
        this._bindings.method_set_collision_polygons_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_collision_polygons_count");
        this._bindings.method_get_collision_polygons_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("add_collision_polygon");
        this._bindings.method_add_collision_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("remove_collision_polygon");
        this._bindings.method_remove_collision_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_collision_polygon_points");
        this._bindings.method_set_collision_polygon_points = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3230546541
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_collision_polygon_points");
        this._bindings.method_get_collision_polygon_points = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          103942801
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_collision_polygon_one_way");
        this._bindings.method_set_collision_polygon_one_way = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1383440665
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("is_collision_polygon_one_way");
        this._bindings.method_is_collision_polygon_one_way = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2522259332
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_collision_polygon_one_way_margin");
        this._bindings.method_set_collision_polygon_one_way_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_collision_polygon_one_way_margin");
        this._bindings.method_get_collision_polygon_one_way_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_terrain_set");
        this._bindings.method_set_terrain_set = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_terrain_set");
        this._bindings.method_get_terrain_set = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_terrain");
        this._bindings.method_set_terrain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_terrain");
        this._bindings.method_get_terrain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_terrain_peering_bit");
        this._bindings.method_set_terrain_peering_bit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1084452308
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_terrain_peering_bit");
        this._bindings.method_get_terrain_peering_bit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3831796792
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("is_valid_terrain_peering_bit");
        this._bindings.method_is_valid_terrain_peering_bit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          845723972
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_navigation_polygon");
        this._bindings.method_set_navigation_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2224691167
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_navigation_polygon");
        this._bindings.method_get_navigation_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2907127272
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_probability");
        this._bindings.method_set_probability = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_probability");
        this._bindings.method_get_probability = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_custom_data");
        this._bindings.method_set_custom_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          402577236
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_custom_data");
        this._bindings.method_get_custom_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1868160156
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("set_custom_data_by_layer_id");
        this._bindings.method_set_custom_data_by_layer_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2152698145
        );
      }
      {
        let classname = new StringName("TileData");
        let methodname = new StringName("get_custom_data_by_layer_id");
        this._bindings.method_get_custom_data_by_layer_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4227898402
        );
      }
  }
  set_flip_h(_flip_h) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_h,
      this._owner,
      _flip_h
    );
    
  }
  get_flip_h() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flip_h,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_flip_v(_flip_v) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_v,
      this._owner,
      _flip_v
    );
    
  }
  get_flip_v() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flip_v,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_transpose(_transpose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transpose,
      this._owner,
      _transpose
    );
    
  }
  get_transpose() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transpose,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_origin(_texture_origin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_origin,
      this._owner,
      _texture_origin
    );
    
  }
  get_texture_origin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_origin,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
    
  }
  set_modulate(_modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modulate,
      this._owner,
      _modulate
    );
    
  }
  get_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_z_index(_z_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_z_index,
      this._owner,
      _z_index
    );
    
  }
  get_z_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_z_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_y_sort_origin(_y_sort_origin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_y_sort_origin,
      this._owner,
      _y_sort_origin
    );
    
  }
  get_y_sort_origin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_y_sort_origin,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_occluder(_layer_id, _occluder_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_occluder,
      this._owner,
      _layer_id, _occluder_polygon
    );
    
  }
  get_occluder(_layer_id, _flip_h, _flip_v, _transpose) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_occluder,
      this._owner,
			Variant.INT,
      _layer_id, _flip_h, _flip_v, _transpose
    );
    
  }
  set_constant_linear_velocity(_layer_id, _velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_linear_velocity,
      this._owner,
      _layer_id, _velocity
    );
    
  }
  get_constant_linear_velocity(_layer_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_linear_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _layer_id
    );
    
  }
  set_constant_angular_velocity(_layer_id, _velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_angular_velocity,
      this._owner,
      _layer_id, _velocity
    );
    
  }
  get_constant_angular_velocity(_layer_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_angular_velocity,
      this._owner,
			Variant.Type.FLOAT,
      _layer_id
    );
    
  }
  set_collision_polygons_count(_layer_id, _polygons_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_polygons_count,
      this._owner,
      _layer_id, _polygons_count
    );
    
  }
  get_collision_polygons_count(_layer_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_polygons_count,
      this._owner,
			Variant.Type.INT,
      _layer_id
    );
    
  }
  add_collision_polygon(_layer_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_collision_polygon,
      this._owner,
      _layer_id
    );
    
  }
  remove_collision_polygon(_layer_id, _polygon_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_collision_polygon,
      this._owner,
      _layer_id, _polygon_index
    );
    
  }
  set_collision_polygon_points(_layer_id, _polygon_index, _polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_polygon_points,
      this._owner,
      _layer_id, _polygon_index, _polygon
    );
    
  }
  get_collision_polygon_points(_layer_id, _polygon_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_polygon_points,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _layer_id, _polygon_index
    );
    
  }
  set_collision_polygon_one_way(_layer_id, _polygon_index, _one_way) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_polygon_one_way,
      this._owner,
      _layer_id, _polygon_index, _one_way
    );
    
  }
  is_collision_polygon_one_way(_layer_id, _polygon_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collision_polygon_one_way,
      this._owner,
			Variant.Type.BOOL,
      _layer_id, _polygon_index
    );
    
  }
  set_collision_polygon_one_way_margin(_layer_id, _polygon_index, _one_way_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_polygon_one_way_margin,
      this._owner,
      _layer_id, _polygon_index, _one_way_margin
    );
    
  }
  get_collision_polygon_one_way_margin(_layer_id, _polygon_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_polygon_one_way_margin,
      this._owner,
			Variant.Type.FLOAT,
      _layer_id, _polygon_index
    );
    
  }
  set_terrain_set(_terrain_set) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_terrain_set,
      this._owner,
      _terrain_set
    );
    
  }
  get_terrain_set() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_terrain_set,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_terrain(_terrain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_terrain,
      this._owner,
      _terrain
    );
    
  }
  get_terrain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_terrain,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_terrain_peering_bit(_peering_bit, _terrain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_terrain_peering_bit,
      this._owner,
      _peering_bit, _terrain
    );
    
  }
  get_terrain_peering_bit(_peering_bit) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_terrain_peering_bit,
      this._owner,
			Variant.Type.INT,
      _peering_bit
    );
    
  }
  is_valid_terrain_peering_bit(_peering_bit) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_valid_terrain_peering_bit,
      this._owner,
			Variant.Type.BOOL,
      _peering_bit
    );
    
  }
  set_navigation_polygon(_layer_id, _navigation_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_polygon,
      this._owner,
      _layer_id, _navigation_polygon
    );
    
  }
  get_navigation_polygon(_layer_id, _flip_h, _flip_v, _transpose) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_polygon,
      this._owner,
			Variant.INT,
      _layer_id, _flip_h, _flip_v, _transpose
    );
    
  }
  set_probability(_probability) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_probability,
      this._owner,
      _probability
    );
    
  }
  get_probability() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_probability,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_custom_data(_layer_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_data,
      this._owner,
      _layer_name, _value
    );
    
  }
  get_custom_data(_layer_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_data,
      this._owner,
			Variant.Type.VARIANT
    ,
      _layer_name
    );
    
  }
  set_custom_data_by_layer_id(_layer_id, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_data_by_layer_id,
      this._owner,
      _layer_id, _value
    );
    
  }
  get_custom_data_by_layer_id(_layer_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_data_by_layer_id,
      this._owner,
			Variant.Type.VARIANT
    ,
      _layer_id
    );
    
  }
}