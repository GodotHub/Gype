import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
class _MethodBindings {
    method_set_points;
    method_get_points;
    method_set_point_position;
    method_get_point_position;
    method_get_point_count;
    method_add_point;
    method_remove_point;
    method_clear_points;
    method_set_closed;
    method_is_closed;
    method_set_width;
    method_get_width;
    method_set_curve;
    method_get_curve;
    method_set_default_color;
    method_get_default_color;
    method_set_gradient;
    method_get_gradient;
    method_set_texture;
    method_get_texture;
    method_set_texture_mode;
    method_get_texture_mode;
    method_set_joint_mode;
    method_get_joint_mode;
    method_set_begin_cap_mode;
    method_get_begin_cap_mode;
    method_set_end_cap_mode;
    method_get_end_cap_mode;
    method_set_sharp_limit;
    method_get_sharp_limit;
    method_set_round_precision;
    method_get_round_precision;
    method_set_antialiased;
    method_get_antialiased;
}


export class Line2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Line2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_points");
      this._bindings.method_set_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_points");
      this._bindings.method_get_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_point_position");
      this._bindings.method_set_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        163021252
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2654014372
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("clear_points");
      this._bindings.method_clear_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_closed");
      this._bindings.method_set_closed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("is_closed");
      this._bindings.method_is_closed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_curve");
      this._bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_curve");
      this._bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_default_color");
      this._bindings.method_set_default_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_default_color");
      this._bindings.method_get_default_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_gradient");
      this._bindings.method_set_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_gradient");
      this._bindings.method_get_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_texture_mode");
      this._bindings.method_set_texture_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1952559516
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_texture_mode");
      this._bindings.method_get_texture_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2341040722
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_joint_mode");
      this._bindings.method_set_joint_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        604292979
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_joint_mode");
      this._bindings.method_get_joint_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2546544037
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_begin_cap_mode");
      this._bindings.method_set_begin_cap_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1669024546
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_begin_cap_mode");
      this._bindings.method_get_begin_cap_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1107511441
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_end_cap_mode");
      this._bindings.method_set_end_cap_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1669024546
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_end_cap_mode");
      this._bindings.method_get_end_cap_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1107511441
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_sharp_limit");
      this._bindings.method_set_sharp_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_sharp_limit");
      this._bindings.method_get_sharp_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_round_precision");
      this._bindings.method_set_round_precision = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_round_precision");
      this._bindings.method_get_round_precision = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_antialiased");
      this._bindings.method_set_antialiased = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_antialiased");
      this._bindings.method_get_antialiased = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_points(_points) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_points,
      this._owner,
      _points
    );
  }
  get_points() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_points,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_point_position(_index, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_position,
      this._owner,
      _index, _position
    );
  }
  get_point_position(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _index
    );
  }
  get_point_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  add_point(_position, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_point,
      this._owner,
      _position, _index
    );
  }
  remove_point(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_point,
      this._owner,
      _index
    );
  }
  clear_points() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_points,
      this._owner,
      
    );
  }
  set_closed(_closed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_closed,
      this._owner,
      _closed
    );
  }
  is_closed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_closed,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _width
    );
  }
  get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve,
      this._owner,
      _curve
    );
  }
  get_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve,
      this._owner,
			Variant.INT,
      
    );
  }
  set_default_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_color,
      this._owner,
      _color
    );
  }
  get_default_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_gradient(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gradient,
      this._owner,
      _color
    );
  }
  get_gradient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gradient,
      this._owner,
			Variant.INT,
      
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
  set_texture_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_mode,
      this._owner,
      _mode
    );
  }
  get_texture_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_joint_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_mode,
      this._owner,
      _mode
    );
  }
  get_joint_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_begin_cap_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_begin_cap_mode,
      this._owner,
      _mode
    );
  }
  get_begin_cap_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_begin_cap_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_end_cap_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_end_cap_mode,
      this._owner,
      _mode
    );
  }
  get_end_cap_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_end_cap_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_sharp_limit(_limit) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sharp_limit,
      this._owner,
      _limit
    );
  }
  get_sharp_limit() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sharp_limit,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_round_precision(_precision) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_round_precision,
      this._owner,
      _precision
    );
  }
  get_round_precision() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_round_precision,
      this._owner,
			Variant.Type.INT,
      
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
  static LineJointMode = {
    LINE_JOINT_SHARP: 0,
    LINE_JOINT_BEVEL: 1,
    LINE_JOINT_ROUND: 2,
  }
  static LineCapMode = {
    LINE_CAP_NONE: 0,
    LINE_CAP_BOX: 1,
    LINE_CAP_ROUND: 2,
  }
  static LineTextureMode = {
    LINE_TEXTURE_NONE: 0,
    LINE_TEXTURE_TILE: 1,
    LINE_TEXTURE_STRETCH: 2,
  }
}