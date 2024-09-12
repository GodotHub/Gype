import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Line2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_points() {
    if (!this.#_bindings.method_set_points) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_points");
      this.#_bindings.method_set_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_points() {
    if (!this.#_bindings.method_get_points) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_points");
      this.#_bindings.method_get_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_point_position() {
    if (!this.#_bindings.method_set_point_position) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_point_position");
      this.#_bindings.method_set_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_point_position() {
    if (!this.#_bindings.method_get_point_position) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_point_position");
      this.#_bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_get_point_count() {
    if (!this.#_bindings.method_get_point_count) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_point_count");
      this.#_bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_point() {
    if (!this.#_bindings.method_add_point) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("add_point");
      this.#_bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2654014372
      );
    }
  }
  static init_method_remove_point() {
    if (!this.#_bindings.method_remove_point) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("remove_point");
      this.#_bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_points() {
    if (!this.#_bindings.method_clear_points) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("clear_points");
      this.#_bindings.method_clear_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_closed() {
    if (!this.#_bindings.method_set_closed) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_closed");
      this.#_bindings.method_set_closed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_closed() {
    if (!this.#_bindings.method_is_closed) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("is_closed");
      this.#_bindings.method_is_closed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_width() {
    if (!this.#_bindings.method_set_width) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_width");
      this.#_bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_width() {
    if (!this.#_bindings.method_get_width) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_width");
      this.#_bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_curve() {
    if (!this.#_bindings.method_set_curve) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_curve");
      this.#_bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_curve() {
    if (!this.#_bindings.method_get_curve) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_curve");
      this.#_bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_default_color() {
    if (!this.#_bindings.method_set_default_color) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_default_color");
      this.#_bindings.method_set_default_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_default_color() {
    if (!this.#_bindings.method_get_default_color) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_default_color");
      this.#_bindings.method_get_default_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_gradient() {
    if (!this.#_bindings.method_set_gradient) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_gradient");
      this.#_bindings.method_set_gradient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2756054477
      );
    }
  }
  static init_method_get_gradient() {
    if (!this.#_bindings.method_get_gradient) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_gradient");
      this.#_bindings.method_get_gradient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        132272999
      );
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_texture_mode() {
    if (!this.#_bindings.method_set_texture_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_texture_mode");
      this.#_bindings.method_set_texture_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1952559516
      );
    }
  }
  static init_method_get_texture_mode() {
    if (!this.#_bindings.method_get_texture_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_texture_mode");
      this.#_bindings.method_get_texture_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2341040722
      );
    }
  }
  static init_method_set_joint_mode() {
    if (!this.#_bindings.method_set_joint_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_joint_mode");
      this.#_bindings.method_set_joint_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        604292979
      );
    }
  }
  static init_method_get_joint_mode() {
    if (!this.#_bindings.method_get_joint_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_joint_mode");
      this.#_bindings.method_get_joint_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2546544037
      );
    }
  }
  static init_method_set_begin_cap_mode() {
    if (!this.#_bindings.method_set_begin_cap_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_begin_cap_mode");
      this.#_bindings.method_set_begin_cap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1669024546
      );
    }
  }
  static init_method_get_begin_cap_mode() {
    if (!this.#_bindings.method_get_begin_cap_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_begin_cap_mode");
      this.#_bindings.method_get_begin_cap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1107511441
      );
    }
  }
  static init_method_set_end_cap_mode() {
    if (!this.#_bindings.method_set_end_cap_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_end_cap_mode");
      this.#_bindings.method_set_end_cap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1669024546
      );
    }
  }
  static init_method_get_end_cap_mode() {
    if (!this.#_bindings.method_get_end_cap_mode) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_end_cap_mode");
      this.#_bindings.method_get_end_cap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1107511441
      );
    }
  }
  static init_method_set_sharp_limit() {
    if (!this.#_bindings.method_set_sharp_limit) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_sharp_limit");
      this.#_bindings.method_set_sharp_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sharp_limit() {
    if (!this.#_bindings.method_get_sharp_limit) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_sharp_limit");
      this.#_bindings.method_get_sharp_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_round_precision() {
    if (!this.#_bindings.method_set_round_precision) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_round_precision");
      this.#_bindings.method_set_round_precision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_round_precision() {
    if (!this.#_bindings.method_get_round_precision) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_round_precision");
      this.#_bindings.method_get_round_precision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_antialiased() {
    if (!this.#_bindings.method_set_antialiased) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("set_antialiased");
      this.#_bindings.method_set_antialiased = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_antialiased() {
    if (!this.#_bindings.method_get_antialiased) {
      let classname = new StringName("Line2D");
      let methodname = new StringName("get_antialiased");
      this.#_bindings.method_get_antialiased = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_points(_points) {
    Line2D.init_method_set_points();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_points,
      this._owner,
      _points
    );
    
  }
  get_points() {
    Line2D.init_method_get_points();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_points,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_point_position(_index, _position) {
    Line2D.init_method_set_point_position();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_point_position,
      this._owner,
      _index, _position
    );
    
  }
  get_point_position(_index) {
    Line2D.init_method_get_point_position();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _index
    );
    
  }
  get_point_count() {
    Line2D.init_method_get_point_count();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_point(_position, _index) {
    Line2D.init_method_add_point();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_add_point,
      this._owner,
      _position, _index
    );
    
  }
  remove_point(_index) {
    Line2D.init_method_remove_point();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_remove_point,
      this._owner,
      _index
    );
    
  }
  clear_points() {
    Line2D.init_method_clear_points();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_clear_points,
      this._owner,
      
    );
    
  }
  set_closed(_closed) {
    Line2D.init_method_set_closed();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_closed,
      this._owner,
      _closed
    );
    
  }
  is_closed() {
    Line2D.init_method_is_closed();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_is_closed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_width(_width) {
    Line2D.init_method_set_width();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  get_width() {
    Line2D.init_method_get_width();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_curve(_curve) {
    Line2D.init_method_set_curve();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_curve,
      this._owner,
      _curve
    );
    
  }
  get_curve() {
    Line2D.init_method_get_curve();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_curve,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_default_color(_color) {
    Line2D.init_method_set_default_color();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_default_color,
      this._owner,
      _color
    );
    
  }
  get_default_color() {
    Line2D.init_method_get_default_color();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_default_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_gradient(_color) {
    Line2D.init_method_set_gradient();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_gradient,
      this._owner,
      _color
    );
    
  }
  get_gradient() {
    Line2D.init_method_get_gradient();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_gradient,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture(_texture) {
    Line2D.init_method_set_texture();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    Line2D.init_method_get_texture();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture_mode(_mode) {
    Line2D.init_method_set_texture_mode();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_texture_mode,
      this._owner,
      _mode
    );
    
  }
  get_texture_mode() {
    Line2D.init_method_get_texture_mode();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_texture_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_joint_mode(_mode) {
    Line2D.init_method_set_joint_mode();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_joint_mode,
      this._owner,
      _mode
    );
    
  }
  get_joint_mode() {
    Line2D.init_method_get_joint_mode();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_joint_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_begin_cap_mode(_mode) {
    Line2D.init_method_set_begin_cap_mode();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_begin_cap_mode,
      this._owner,
      _mode
    );
    
  }
  get_begin_cap_mode() {
    Line2D.init_method_get_begin_cap_mode();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_begin_cap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_end_cap_mode(_mode) {
    Line2D.init_method_set_end_cap_mode();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_end_cap_mode,
      this._owner,
      _mode
    );
    
  }
  get_end_cap_mode() {
    Line2D.init_method_get_end_cap_mode();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_end_cap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sharp_limit(_limit) {
    Line2D.init_method_set_sharp_limit();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_sharp_limit,
      this._owner,
      _limit
    );
    
  }
  get_sharp_limit() {
    Line2D.init_method_get_sharp_limit();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_sharp_limit,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_round_precision(_precision) {
    Line2D.init_method_set_round_precision();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_round_precision,
      this._owner,
      _precision
    );
    
  }
  get_round_precision() {
    Line2D.init_method_get_round_precision();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_round_precision,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_antialiased(_antialiased) {
    Line2D.init_method_set_antialiased();
    return _call_native_mb_no_ret(
      Line2D.#_bindings.method_set_antialiased,
      this._owner,
      _antialiased
    );
    
  }
  get_antialiased() {
    Line2D.init_method_get_antialiased();
    return _call_native_mb_ret(
      Line2D.#_bindings.method_get_antialiased,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get points () {
  return this.get_points();
}
set points (new_value) {
  this.set_points(new_value);
}
get closed () {
  return this.is_closed();
}
set closed (new_value) {
  this.set_closed(new_value);
}
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get width_curve () {
  return this.get_curve();
}
set width_curve (new_value) {
  this.set_curve(new_value);
}
get default_color () {
  return this.get_default_color();
}
set default_color (new_value) {
  this.set_default_color(new_value);
}
get gradient () {
  return this.get_gradient();
}
set gradient (new_value) {
  this.set_gradient(new_value);
}
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get texture_mode () {
  return this.get_texture_mode();
}
set texture_mode (new_value) {
  this.set_texture_mode(new_value);
}
get joint_mode () {
  return this.get_joint_mode();
}
set joint_mode (new_value) {
  this.set_joint_mode(new_value);
}
get begin_cap_mode () {
  return this.get_begin_cap_mode();
}
set begin_cap_mode (new_value) {
  this.set_begin_cap_mode(new_value);
}
get end_cap_mode () {
  return this.get_end_cap_mode();
}
set end_cap_mode (new_value) {
  this.set_end_cap_mode(new_value);
}
get sharp_limit () {
  return this.get_sharp_limit();
}
set sharp_limit (new_value) {
  this.set_sharp_limit(new_value);
}
get round_precision () {
  return this.get_round_precision();
}
set round_precision (new_value) {
  this.set_round_precision(new_value);
}
get antialiased () {
  return this.get_antialiased();
}
set antialiased (new_value) {
  this.set_antialiased(new_value);
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