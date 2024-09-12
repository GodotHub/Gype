import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_point_count;
  method_set_point_count;
  method_add_point;
  method_remove_point;
  method_clear_points;
  method_get_point_position;
  method_set_point_value;
  method_set_point_offset;
  method_sample;
  method_sample_baked;
  method_get_point_left_tangent;
  method_get_point_right_tangent;
  method_get_point_left_mode;
  method_get_point_right_mode;
  method_set_point_left_tangent;
  method_set_point_right_tangent;
  method_set_point_left_mode;
  method_set_point_right_mode;
  method_get_min_value;
  method_set_min_value;
  method_get_max_value;
  method_set_max_value;
  method_clean_dupes;
  method_bake;
  method_get_bake_resolution;
  method_set_bake_resolution;
}
export class Curve extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Curve");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_point_count() {
    if (!this.#_bindings.method_get_point_count) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_count");
      this.#_bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_point_count() {
    if (!this.#_bindings.method_set_point_count) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_count");
      this.#_bindings.method_set_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_add_point() {
    if (!this.#_bindings.method_add_point) {
      let classname = new StringName("Curve");
      let methodname = new StringName("add_point");
      this.#_bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        434072736
      );
    }
  }
  static init_method_remove_point() {
    if (!this.#_bindings.method_remove_point) {
      let classname = new StringName("Curve");
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
      let classname = new StringName("Curve");
      let methodname = new StringName("clear_points");
      this.#_bindings.method_clear_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_point_position() {
    if (!this.#_bindings.method_get_point_position) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_position");
      this.#_bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_point_value() {
    if (!this.#_bindings.method_set_point_value) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_value");
      this.#_bindings.method_set_point_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_set_point_offset() {
    if (!this.#_bindings.method_set_point_offset) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_offset");
      this.#_bindings.method_set_point_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3780573764
      );
    }
  }
  static init_method_sample() {
    if (!this.#_bindings.method_sample) {
      let classname = new StringName("Curve");
      let methodname = new StringName("sample");
      this.#_bindings.method_sample = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3919130443
      );
    }
  }
  static init_method_sample_baked() {
    if (!this.#_bindings.method_sample_baked) {
      let classname = new StringName("Curve");
      let methodname = new StringName("sample_baked");
      this.#_bindings.method_sample_baked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3919130443
      );
    }
  }
  static init_method_get_point_left_tangent() {
    if (!this.#_bindings.method_get_point_left_tangent) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_left_tangent");
      this.#_bindings.method_get_point_left_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_point_right_tangent() {
    if (!this.#_bindings.method_get_point_right_tangent) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_right_tangent");
      this.#_bindings.method_get_point_right_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_point_left_mode() {
    if (!this.#_bindings.method_get_point_left_mode) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_left_mode");
      this.#_bindings.method_get_point_left_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        426950354
      );
    }
  }
  static init_method_get_point_right_mode() {
    if (!this.#_bindings.method_get_point_right_mode) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_right_mode");
      this.#_bindings.method_get_point_right_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        426950354
      );
    }
  }
  static init_method_set_point_left_tangent() {
    if (!this.#_bindings.method_set_point_left_tangent) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_left_tangent");
      this.#_bindings.method_set_point_left_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_set_point_right_tangent() {
    if (!this.#_bindings.method_set_point_right_tangent) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_right_tangent");
      this.#_bindings.method_set_point_right_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_set_point_left_mode() {
    if (!this.#_bindings.method_set_point_left_mode) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_left_mode");
      this.#_bindings.method_set_point_left_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1217242874
      );
    }
  }
  static init_method_set_point_right_mode() {
    if (!this.#_bindings.method_set_point_right_mode) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_right_mode");
      this.#_bindings.method_set_point_right_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1217242874
      );
    }
  }
  static init_method_get_min_value() {
    if (!this.#_bindings.method_get_min_value) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_min_value");
      this.#_bindings.method_get_min_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_min_value() {
    if (!this.#_bindings.method_set_min_value) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_min_value");
      this.#_bindings.method_set_min_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_value() {
    if (!this.#_bindings.method_get_max_value) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_max_value");
      this.#_bindings.method_get_max_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_value() {
    if (!this.#_bindings.method_set_max_value) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_max_value");
      this.#_bindings.method_set_max_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_clean_dupes() {
    if (!this.#_bindings.method_clean_dupes) {
      let classname = new StringName("Curve");
      let methodname = new StringName("clean_dupes");
      this.#_bindings.method_clean_dupes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_bake() {
    if (!this.#_bindings.method_bake) {
      let classname = new StringName("Curve");
      let methodname = new StringName("bake");
      this.#_bindings.method_bake = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_bake_resolution() {
    if (!this.#_bindings.method_get_bake_resolution) {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_bake_resolution");
      this.#_bindings.method_get_bake_resolution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_bake_resolution() {
    if (!this.#_bindings.method_set_bake_resolution) {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_bake_resolution");
      this.#_bindings.method_set_bake_resolution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  get_point_count() {
    Curve.init_method_get_point_count();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_point_count(_count) {
    Curve.init_method_set_point_count();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_point_count,
      this._owner,
      _count
    );
    
  }
  add_point(_position, _left_tangent, _right_tangent, _left_mode, _right_mode) {
    Curve.init_method_add_point();
    return _call_native_mb_ret(
      Curve.#_bindings.method_add_point,
      this._owner,
			Variant.Type.INT,
    
      _position, _left_tangent, _right_tangent, _left_mode, _right_mode
    );
    
  }
  remove_point(_index) {
    Curve.init_method_remove_point();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_remove_point,
      this._owner,
      _index
    );
    
  }
  clear_points() {
    Curve.init_method_clear_points();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_clear_points,
      this._owner,
      
    );
    
  }
  get_point_position(_index) {
    Curve.init_method_get_point_position();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _index
    );
    
  }
  set_point_value(_index, _y) {
    Curve.init_method_set_point_value();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_point_value,
      this._owner,
      _index, _y
    );
    
  }
  set_point_offset(_index, _offset) {
    Curve.init_method_set_point_offset();
    return _call_native_mb_ret(
      Curve.#_bindings.method_set_point_offset,
      this._owner,
			Variant.Type.INT,
    
      _index, _offset
    );
    
  }
  sample(_offset) {
    Curve.init_method_sample();
    return _call_native_mb_ret(
      Curve.#_bindings.method_sample,
      this._owner,
			Variant.Type.FLOAT,
    
      _offset
    );
    
  }
  sample_baked(_offset) {
    Curve.init_method_sample_baked();
    return _call_native_mb_ret(
      Curve.#_bindings.method_sample_baked,
      this._owner,
			Variant.Type.FLOAT,
    
      _offset
    );
    
  }
  get_point_left_tangent(_index) {
    Curve.init_method_get_point_left_tangent();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_point_left_tangent,
      this._owner,
			Variant.Type.FLOAT,
    
      _index
    );
    
  }
  get_point_right_tangent(_index) {
    Curve.init_method_get_point_right_tangent();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_point_right_tangent,
      this._owner,
			Variant.Type.FLOAT,
    
      _index
    );
    
  }
  get_point_left_mode(_index) {
    Curve.init_method_get_point_left_mode();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_point_left_mode,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_point_right_mode(_index) {
    Curve.init_method_get_point_right_mode();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_point_right_mode,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  set_point_left_tangent(_index, _tangent) {
    Curve.init_method_set_point_left_tangent();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_point_left_tangent,
      this._owner,
      _index, _tangent
    );
    
  }
  set_point_right_tangent(_index, _tangent) {
    Curve.init_method_set_point_right_tangent();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_point_right_tangent,
      this._owner,
      _index, _tangent
    );
    
  }
  set_point_left_mode(_index, _mode) {
    Curve.init_method_set_point_left_mode();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_point_left_mode,
      this._owner,
      _index, _mode
    );
    
  }
  set_point_right_mode(_index, _mode) {
    Curve.init_method_set_point_right_mode();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_point_right_mode,
      this._owner,
      _index, _mode
    );
    
  }
  get_min_value() {
    Curve.init_method_get_min_value();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_min_value,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_min_value(_min) {
    Curve.init_method_set_min_value();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_min_value,
      this._owner,
      _min
    );
    
  }
  get_max_value() {
    Curve.init_method_get_max_value();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_max_value,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_value(_max) {
    Curve.init_method_set_max_value();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_max_value,
      this._owner,
      _max
    );
    
  }
  clean_dupes() {
    Curve.init_method_clean_dupes();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_clean_dupes,
      this._owner,
      
    );
    
  }
  bake() {
    Curve.init_method_bake();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_bake,
      this._owner,
      
    );
    
  }
  get_bake_resolution() {
    Curve.init_method_get_bake_resolution();
    return _call_native_mb_ret(
      Curve.#_bindings.method_get_bake_resolution,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_bake_resolution(_resolution) {
    Curve.init_method_set_bake_resolution();
    return _call_native_mb_no_ret(
      Curve.#_bindings.method_set_bake_resolution,
      this._owner,
      _resolution
    );
    
  }
  
get min_value () {
  return this.get_min_value();
}
set min_value (new_value) {
  this.set_min_value(new_value);
}
get max_value () {
  return this.get_max_value();
}
set max_value (new_value) {
  this.set_max_value(new_value);
}
get bake_resolution () {
  return this.get_bake_resolution();
}
set bake_resolution (new_value) {
  this.set_bake_resolution(new_value);
}
get point_count () {
  return this.get_point_count();
}
set point_count (new_value) {
  this.set_point_count(new_value);
}

  static TangentMode = {
    TANGENT_FREE: 0,
    TANGENT_LINEAR: 1,
    TANGENT_MODE_COUNT: 2,
  }
}