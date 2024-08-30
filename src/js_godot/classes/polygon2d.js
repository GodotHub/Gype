import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
import { StringName } from 'src/js_godot/variant/string_name'
import { NodePath } from 'src/js_godot/variant/node_path'
import { Node2D } from 'src/js_godot/classes/node2d'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Color } from 'src/js_godot/variant/color'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_polygon;
    method_get_polygon;
    method_set_uv;
    method_get_uv;
    method_set_color;
    method_get_color;
    method_set_polygons;
    method_get_polygons;
    method_set_vertex_colors;
    method_get_vertex_colors;
    method_set_texture;
    method_get_texture;
    method_set_texture_offset;
    method_get_texture_offset;
    method_set_texture_rotation;
    method_get_texture_rotation;
    method_set_texture_scale;
    method_get_texture_scale;
    method_set_invert_enabled;
    method_get_invert_enabled;
    method_set_antialiased;
    method_get_antialiased;
    method_set_invert_border;
    method_get_invert_border;
    method_set_offset;
    method_get_offset;
    method_add_bone;
    method_get_bone_count;
    method_get_bone_path;
    method_get_bone_weights;
    method_erase_bone;
    method_clear_bones;
    method_set_bone_path;
    method_set_bone_weights;
    method_set_skeleton;
    method_get_skeleton;
    method_set_internal_vertex_count;
    method_get_internal_vertex_count;
}


export class Polygon2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Polygon2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_polygon");
        this._bindings.method_set_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1509147220
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_polygon");
        this._bindings.method_get_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2961356807
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_uv");
        this._bindings.method_set_uv = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1509147220
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_uv");
        this._bindings.method_get_uv = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2961356807
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_color");
        this._bindings.method_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_color");
        this._bindings.method_get_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_polygons");
        this._bindings.method_set_polygons = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_polygons");
        this._bindings.method_get_polygons = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_vertex_colors");
        this._bindings.method_set_vertex_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3546319833
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_vertex_colors");
        this._bindings.method_get_vertex_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1392750486
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_texture");
        this._bindings.method_set_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4051416890
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_texture");
        this._bindings.method_get_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3635182373
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_texture_offset");
        this._bindings.method_set_texture_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_texture_offset");
        this._bindings.method_get_texture_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_texture_rotation");
        this._bindings.method_set_texture_rotation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_texture_rotation");
        this._bindings.method_get_texture_rotation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_texture_scale");
        this._bindings.method_set_texture_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_texture_scale");
        this._bindings.method_get_texture_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_invert_enabled");
        this._bindings.method_set_invert_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_invert_enabled");
        this._bindings.method_get_invert_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_antialiased");
        this._bindings.method_set_antialiased = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_antialiased");
        this._bindings.method_get_antialiased = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_invert_border");
        this._bindings.method_set_invert_border = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_invert_border");
        this._bindings.method_get_invert_border = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_offset");
        this._bindings.method_set_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_offset");
        this._bindings.method_get_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("add_bone");
        this._bindings.method_add_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          703042815
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_bone_count");
        this._bindings.method_get_bone_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_bone_path");
        this._bindings.method_get_bone_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          408788394
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_bone_weights");
        this._bindings.method_get_bone_weights = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1542882410
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("erase_bone");
        this._bindings.method_erase_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("clear_bones");
        this._bindings.method_clear_bones = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_bone_path");
        this._bindings.method_set_bone_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2761262315
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_bone_weights");
        this._bindings.method_set_bone_weights = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1345852415
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_skeleton");
        this._bindings.method_set_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_skeleton");
        this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("set_internal_vertex_count");
        this._bindings.method_set_internal_vertex_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Polygon2D");
        let methodname = new StringName("get_internal_vertex_count");
        this._bindings.method_get_internal_vertex_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
    
  }
  set_uv(_uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv,
      this._owner,
      _uv
    );
    
  }
  get_uv() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
    
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_polygons(_polygons) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_polygons,
      this._owner,
      _polygons
    );
    
  }
  get_polygons() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygons,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
    
  }
  set_vertex_colors(_vertex_colors) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_colors,
      this._owner,
      _vertex_colors
    );
    
  }
  get_vertex_colors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_colors,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY
    ,
      
    );
    
  }
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_offset(_texture_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_offset,
      this._owner,
      _texture_offset
    );
    
  }
  get_texture_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_texture_rotation(_texture_rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_rotation,
      this._owner,
      _texture_rotation
    );
    
  }
  get_texture_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_rotation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_texture_scale(_texture_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_scale,
      this._owner,
      _texture_scale
    );
    
  }
  get_texture_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_scale,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_invert_enabled(_invert) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_invert_enabled,
      this._owner,
      _invert
    );
    
  }
  get_invert_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_invert_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_antialiased(_antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_antialiased,
      this._owner,
      _antialiased
    );
    
  }
  get_antialiased() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_antialiased,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_invert_border(_invert_border) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_invert_border,
      this._owner,
      _invert_border
    );
    
  }
  get_invert_border() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_invert_border,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  add_bone(_path, _weights) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_bone,
      this._owner,
      _path, _weights
    );
    
  }
  get_bone_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_bone_path(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _index
    );
    
  }
  get_bone_weights(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_weights,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY
    ,
      _index
    );
    
  }
  erase_bone(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_erase_bone,
      this._owner,
      _index
    );
    
  }
  clear_bones() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_bones,
      this._owner,
      
    );
    
  }
  set_bone_path(_index, _path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_path,
      this._owner,
      _index, _path
    );
    
  }
  set_bone_weights(_index, _weights) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_weights,
      this._owner,
      _index, _weights
    );
    
  }
  set_skeleton(_skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skeleton,
      this._owner,
      _skeleton
    );
    
  }
  get_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_internal_vertex_count(_internal_vertex_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_internal_vertex_count,
      this._owner,
      _internal_vertex_count
    );
    
  }
  get_internal_vertex_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_internal_vertex_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}