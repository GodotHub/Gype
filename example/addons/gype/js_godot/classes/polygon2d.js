import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class Polygon2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Polygon2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_polygon() {
    if (!this._bindings.method_set_polygon) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_polygon");
      this._bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_polygon() {
    if (!this._bindings.method_get_polygon) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_uv() {
    if (!this._bindings.method_set_uv) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_uv");
      this._bindings.method_set_uv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_uv() {
    if (!this._bindings.method_get_uv) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_uv");
      this._bindings.method_get_uv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_color() {
    if (!this._bindings.method_set_color) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_color() {
    if (!this._bindings.method_get_color) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_polygons() {
    if (!this._bindings.method_set_polygons) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_polygons");
      this._bindings.method_set_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_polygons() {
    if (!this._bindings.method_get_polygons) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_polygons");
      this._bindings.method_get_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_vertex_colors() {
    if (!this._bindings.method_set_vertex_colors) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_vertex_colors");
      this._bindings.method_set_vertex_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3546319833
      );
    }
  }
  static init_method_get_vertex_colors() {
    if (!this._bindings.method_get_vertex_colors) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_vertex_colors");
      this._bindings.method_get_vertex_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1392750486
      );
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_texture_offset() {
    if (!this._bindings.method_set_texture_offset) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_texture_offset");
      this._bindings.method_set_texture_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_texture_offset() {
    if (!this._bindings.method_get_texture_offset) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_texture_offset");
      this._bindings.method_get_texture_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_texture_rotation() {
    if (!this._bindings.method_set_texture_rotation) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_texture_rotation");
      this._bindings.method_set_texture_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_texture_rotation() {
    if (!this._bindings.method_get_texture_rotation) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_texture_rotation");
      this._bindings.method_get_texture_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_texture_scale() {
    if (!this._bindings.method_set_texture_scale) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_texture_scale");
      this._bindings.method_set_texture_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_texture_scale() {
    if (!this._bindings.method_get_texture_scale) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_texture_scale");
      this._bindings.method_get_texture_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_invert_enabled() {
    if (!this._bindings.method_set_invert_enabled) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_invert_enabled");
      this._bindings.method_set_invert_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_invert_enabled() {
    if (!this._bindings.method_get_invert_enabled) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_invert_enabled");
      this._bindings.method_get_invert_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_antialiased() {
    if (!this._bindings.method_set_antialiased) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_antialiased");
      this._bindings.method_set_antialiased = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_antialiased() {
    if (!this._bindings.method_get_antialiased) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_antialiased");
      this._bindings.method_get_antialiased = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_invert_border() {
    if (!this._bindings.method_set_invert_border) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_invert_border");
      this._bindings.method_set_invert_border = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_invert_border() {
    if (!this._bindings.method_get_invert_border) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_invert_border");
      this._bindings.method_get_invert_border = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_offset() {
    if (!this._bindings.method_set_offset) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_add_bone() {
    if (!this._bindings.method_add_bone) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("add_bone");
      this._bindings.method_add_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        703042815
      );
    }
  }
  static init_method_get_bone_count() {
    if (!this._bindings.method_get_bone_count) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_bone_count");
      this._bindings.method_get_bone_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_bone_path() {
    if (!this._bindings.method_get_bone_path) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_bone_path");
      this._bindings.method_get_bone_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        408788394
      );
    }
  }
  static init_method_get_bone_weights() {
    if (!this._bindings.method_get_bone_weights) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_bone_weights");
      this._bindings.method_get_bone_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1542882410
      );
    }
  }
  static init_method_erase_bone() {
    if (!this._bindings.method_erase_bone) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("erase_bone");
      this._bindings.method_erase_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_bones() {
    if (!this._bindings.method_clear_bones) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("clear_bones");
      this._bindings.method_clear_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_bone_path() {
    if (!this._bindings.method_set_bone_path) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_bone_path");
      this._bindings.method_set_bone_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761262315
      );
    }
  }
  static init_method_set_bone_weights() {
    if (!this._bindings.method_set_bone_weights) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_bone_weights");
      this._bindings.method_set_bone_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1345852415
      );
    }
  }
  static init_method_set_skeleton() {
    if (!this._bindings.method_set_skeleton) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_skeleton");
      this._bindings.method_set_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_skeleton() {
    if (!this._bindings.method_get_skeleton) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_internal_vertex_count() {
    if (!this._bindings.method_set_internal_vertex_count) {
      let classname = new StringName("Polygon2D");
      let methodname = new StringName("set_internal_vertex_count");
      this._bindings.method_set_internal_vertex_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_internal_vertex_count() {
    if (!this._bindings.method_get_internal_vertex_count) {
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
    Polygon2D.init_method_set_polygon();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    Polygon2D.init_method_get_polygon();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_uv(_uv) {
    Polygon2D.init_method_set_uv();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_uv,
      this._owner,
      _uv
    );
    
  }
  get_uv() {
    Polygon2D.init_method_get_uv();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_uv,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_color(_color) {
    Polygon2D.init_method_set_color();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    Polygon2D.init_method_get_color();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_polygons(_polygons) {
    Polygon2D.init_method_set_polygons();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_polygons,
      this._owner,
      _polygons
    );
    
  }
  get_polygons() {
    Polygon2D.init_method_get_polygons();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_polygons,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_vertex_colors(_vertex_colors) {
    Polygon2D.init_method_set_vertex_colors();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_vertex_colors,
      this._owner,
      _vertex_colors
    );
    
  }
  get_vertex_colors() {
    Polygon2D.init_method_get_vertex_colors();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_vertex_colors,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY,
    
      
    );
    
  }
  set_texture(_texture) {
    Polygon2D.init_method_set_texture();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    Polygon2D.init_method_get_texture();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture_offset(_texture_offset) {
    Polygon2D.init_method_set_texture_offset();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_texture_offset,
      this._owner,
      _texture_offset
    );
    
  }
  get_texture_offset() {
    Polygon2D.init_method_get_texture_offset();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_texture_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_texture_rotation(_texture_rotation) {
    Polygon2D.init_method_set_texture_rotation();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_texture_rotation,
      this._owner,
      _texture_rotation
    );
    
  }
  get_texture_rotation() {
    Polygon2D.init_method_get_texture_rotation();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_texture_rotation,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_texture_scale(_texture_scale) {
    Polygon2D.init_method_set_texture_scale();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_texture_scale,
      this._owner,
      _texture_scale
    );
    
  }
  get_texture_scale() {
    Polygon2D.init_method_get_texture_scale();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_texture_scale,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_invert_enabled(_invert) {
    Polygon2D.init_method_set_invert_enabled();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_invert_enabled,
      this._owner,
      _invert
    );
    
  }
  get_invert_enabled() {
    Polygon2D.init_method_get_invert_enabled();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_invert_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_antialiased(_antialiased) {
    Polygon2D.init_method_set_antialiased();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_antialiased,
      this._owner,
      _antialiased
    );
    
  }
  get_antialiased() {
    Polygon2D.init_method_get_antialiased();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_antialiased,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_invert_border(_invert_border) {
    Polygon2D.init_method_set_invert_border();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_invert_border,
      this._owner,
      _invert_border
    );
    
  }
  get_invert_border() {
    Polygon2D.init_method_get_invert_border();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_invert_border,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_offset(_offset) {
    Polygon2D.init_method_set_offset();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    Polygon2D.init_method_get_offset();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  add_bone(_path, _weights) {
    Polygon2D.init_method_add_bone();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_add_bone,
      this._owner,
      _path, _weights
    );
    
  }
  get_bone_count() {
    Polygon2D.init_method_get_bone_count();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_bone_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_bone_path(_index) {
    Polygon2D.init_method_get_bone_path();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_bone_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _index
    );
    
  }
  get_bone_weights(_index) {
    Polygon2D.init_method_get_bone_weights();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_bone_weights,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      _index
    );
    
  }
  erase_bone(_index) {
    Polygon2D.init_method_erase_bone();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_erase_bone,
      this._owner,
      _index
    );
    
  }
  clear_bones() {
    Polygon2D.init_method_clear_bones();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_clear_bones,
      this._owner,
      
    );
    
  }
  set_bone_path(_index, _path) {
    Polygon2D.init_method_set_bone_path();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_bone_path,
      this._owner,
      _index, _path
    );
    
  }
  set_bone_weights(_index, _weights) {
    Polygon2D.init_method_set_bone_weights();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_bone_weights,
      this._owner,
      _index, _weights
    );
    
  }
  set_skeleton(_skeleton) {
    Polygon2D.init_method_set_skeleton();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_skeleton,
      this._owner,
      _skeleton
    );
    
  }
  get_skeleton() {
    Polygon2D.init_method_get_skeleton();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_internal_vertex_count(_internal_vertex_count) {
    Polygon2D.init_method_set_internal_vertex_count();
    return _call_native_mb_no_ret(
      Polygon2D._bindings.method_set_internal_vertex_count,
      this._owner,
      _internal_vertex_count
    );
    
  }
  get_internal_vertex_count() {
    Polygon2D.init_method_get_internal_vertex_count();
    return _call_native_mb_ret(
      Polygon2D._bindings.method_get_internal_vertex_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get antialiased () {
  return this.get_antialiased();
}
set antialiased (new_value) {
  this.set_antialiased(new_value);
}
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get texture_offset () {
  return this.get_texture_offset();
}
set texture_offset (new_value) {
  this.set_texture_offset(new_value);
}
get texture_scale () {
  return this.get_texture_scale();
}
set texture_scale (new_value) {
  this.set_texture_scale(new_value);
}
get texture_rotation () {
  return this.get_texture_rotation();
}
set texture_rotation (new_value) {
  this.set_texture_rotation(new_value);
}
get skeleton () {
  return this.get_skeleton();
}
set skeleton (new_value) {
  this.set_skeleton(new_value);
}
get invert_enabled () {
  return this.get_invert_enabled();
}
set invert_enabled (new_value) {
  this.set_invert_enabled(new_value);
}
get invert_border () {
  return this.get_invert_border();
}
set invert_border (new_value) {
  this.set_invert_border(new_value);
}
get polygon () {
  return this.get_polygon();
}
set polygon (new_value) {
  this.set_polygon(new_value);
}
get uv () {
  return this.get_uv();
}
set uv (new_value) {
  this.set_uv(new_value);
}
get vertex_colors () {
  return this.get_vertex_colors();
}
set vertex_colors (new_value) {
  this.set_vertex_colors(new_value);
}
get polygons () {
  return this.get_polygons();
}
set polygons (new_value) {
  this.set_polygons(new_value);
}
get bones () {
  return this._get_bones();
}
set bones (new_value) {
  this._set_bones(new_value);
}
get internal_vertex_count () {
  return this.get_internal_vertex_count();
}
set internal_vertex_count (new_value) {
  this.set_internal_vertex_count(new_value);
}

}