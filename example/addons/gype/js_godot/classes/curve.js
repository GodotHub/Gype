import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { Vector2 } from '@js_godot/variant/vector2'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Curve");
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
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_count");
      this._bindings.method_set_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        434072736
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("clear_points");
      this._bindings.method_clear_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_value");
      this._bindings.method_set_point_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_offset");
      this._bindings.method_set_point_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3780573764
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("sample");
      this._bindings.method_sample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3919130443
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("sample_baked");
      this._bindings.method_sample_baked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3919130443
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_left_tangent");
      this._bindings.method_get_point_left_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_right_tangent");
      this._bindings.method_get_point_right_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_left_mode");
      this._bindings.method_get_point_left_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        426950354
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_point_right_mode");
      this._bindings.method_get_point_right_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        426950354
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_left_tangent");
      this._bindings.method_set_point_left_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_right_tangent");
      this._bindings.method_set_point_right_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_left_mode");
      this._bindings.method_set_point_left_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1217242874
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_point_right_mode");
      this._bindings.method_set_point_right_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1217242874
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_min_value");
      this._bindings.method_get_min_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_min_value");
      this._bindings.method_set_min_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_max_value");
      this._bindings.method_get_max_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_max_value");
      this._bindings.method_set_max_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("clean_dupes");
      this._bindings.method_clean_dupes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("bake");
      this._bindings.method_bake = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("get_bake_resolution");
      this._bindings.method_get_bake_resolution = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Curve");
      let methodname = new StringName("set_bake_resolution");
      this._bindings.method_set_bake_resolution = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
  }
  get_point_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_point_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_count,
      this._owner,
      _count
    );
    
  }
  add_point(_position, _left_tangent, _right_tangent, _left_mode, _right_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_point,
      this._owner,
			Variant.Type.INT,
      _position, _left_tangent, _right_tangent, _left_mode, _right_mode
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
  get_point_position(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _index
    );
    
  }
  set_point_value(_index, _y) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_value,
      this._owner,
      _index, _y
    );
    
  }
  set_point_offset(_index, _offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_point_offset,
      this._owner,
			Variant.Type.INT,
      _index, _offset
    );
    
  }
  sample(_offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sample,
      this._owner,
			Variant.Type.FLOAT,
      _offset
    );
    
  }
  sample_baked(_offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sample_baked,
      this._owner,
			Variant.Type.FLOAT,
      _offset
    );
    
  }
  get_point_left_tangent(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_left_tangent,
      this._owner,
			Variant.Type.FLOAT,
      _index
    );
    
  }
  get_point_right_tangent(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_right_tangent,
      this._owner,
			Variant.Type.FLOAT,
      _index
    );
    
  }
  get_point_left_mode(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_left_mode,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_point_right_mode(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_right_mode,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  set_point_left_tangent(_index, _tangent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_left_tangent,
      this._owner,
      _index, _tangent
    );
    
  }
  set_point_right_tangent(_index, _tangent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_right_tangent,
      this._owner,
      _index, _tangent
    );
    
  }
  set_point_left_mode(_index, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_left_mode,
      this._owner,
      _index, _mode
    );
    
  }
  set_point_right_mode(_index, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_right_mode,
      this._owner,
      _index, _mode
    );
    
  }
  get_min_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_value,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_min_value(_min) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_value,
      this._owner,
      _min
    );
    
  }
  get_max_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_value,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_max_value(_max) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_value,
      this._owner,
      _max
    );
    
  }
  clean_dupes() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clean_dupes,
      this._owner,
      
    );
    
  }
  bake() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bake,
      this._owner,
      
    );
    
  }
  get_bake_resolution() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_resolution,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_bake_resolution(_resolution) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bake_resolution,
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

  static {
    this._init_bindings();
  }
}