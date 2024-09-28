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
  method_get_point_count;
  method_set_point_count;
  method_add_point;
  method_set_point_position;
  method_get_point_position;
  method_set_point_in;
  method_get_point_in;
  method_set_point_out;
  method_get_point_out;
  method_remove_point;
  method_clear_points;
  method_sample;
  method_samplef;
  method_set_bake_interval;
  method_get_bake_interval;
  method_get_baked_length;
  method_sample_baked;
  method_sample_baked_with_rotation;
  method_get_baked_points;
  method_get_closest_point;
  method_get_closest_offset;
  method_tessellate;
  method_tessellate_even_length;
}
@GodotClass
export class Curve2D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Curve2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_point_count() {
    if (!this._bindings.method_get_point_count) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_point_count() {
    if (!this._bindings.method_set_point_count) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("set_point_count");
      this._bindings.method_set_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_add_point() {
    if (!this._bindings.method_add_point) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4175465202
      );
    }
  }
  static init_method_set_point_position() {
    if (!this._bindings.method_set_point_position) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("set_point_position");
      this._bindings.method_set_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_point_position() {
    if (!this._bindings.method_get_point_position) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_point_in() {
    if (!this._bindings.method_set_point_in) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("set_point_in");
      this._bindings.method_set_point_in = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_point_in() {
    if (!this._bindings.method_get_point_in) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_point_in");
      this._bindings.method_get_point_in = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_point_out() {
    if (!this._bindings.method_set_point_out) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("set_point_out");
      this._bindings.method_set_point_out = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_point_out() {
    if (!this._bindings.method_get_point_out) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_point_out");
      this._bindings.method_get_point_out = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_remove_point() {
    if (!this._bindings.method_remove_point) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_points() {
    if (!this._bindings.method_clear_points) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("clear_points");
      this._bindings.method_clear_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_sample() {
    if (!this._bindings.method_sample) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("sample");
      this._bindings.method_sample = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        26514310
      );
    }
  }
  static init_method_samplef() {
    if (!this._bindings.method_samplef) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("samplef");
      this._bindings.method_samplef = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3588506812
      );
    }
  }
  static init_method_set_bake_interval() {
    if (!this._bindings.method_set_bake_interval) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("set_bake_interval");
      this._bindings.method_set_bake_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bake_interval() {
    if (!this._bindings.method_get_bake_interval) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_bake_interval");
      this._bindings.method_get_bake_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_baked_length() {
    if (!this._bindings.method_get_baked_length) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_baked_length");
      this._bindings.method_get_baked_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_sample_baked() {
    if (!this._bindings.method_sample_baked) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("sample_baked");
      this._bindings.method_sample_baked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3464257706
      );
    }
  }
  static init_method_sample_baked_with_rotation() {
    if (!this._bindings.method_sample_baked_with_rotation) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("sample_baked_with_rotation");
      this._bindings.method_sample_baked_with_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3296056341
      );
    }
  }
  static init_method_get_baked_points() {
    if (!this._bindings.method_get_baked_points) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_baked_points");
      this._bindings.method_get_baked_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_get_closest_point() {
    if (!this._bindings.method_get_closest_point) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_closest_point");
      this._bindings.method_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2656412154
      );
    }
  }
  static init_method_get_closest_offset() {
    if (!this._bindings.method_get_closest_offset) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("get_closest_offset");
      this._bindings.method_get_closest_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2276447920
      );
    }
  }
  static init_method_tessellate() {
    if (!this._bindings.method_tessellate) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("tessellate");
      this._bindings.method_tessellate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        958145977
      );
    }
  }
  static init_method_tessellate_even_length() {
    if (!this._bindings.method_tessellate_even_length) {
      let classname = new StringName("Curve2D");
      let methodname = new StringName("tessellate_even_length");
      this._bindings.method_tessellate_even_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2319761637
      );
    }
  }

  
  
  get_point_count() {
    Curve2D.init_method_get_point_count();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_point_count(_count) {
    Curve2D.init_method_set_point_count();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_set_point_count,
      this._owner,
      _count
    );
    
  }
  add_point(_position, _in, _out, _index) {
    Curve2D.init_method_add_point();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_add_point,
      this._owner,
      _position, _in, _out, _index
    );
    
  }
  set_point_position(_idx, _position) {
    Curve2D.init_method_set_point_position();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_set_point_position,
      this._owner,
      _idx, _position
    );
    
  }
  get_point_position(_idx) {
    Curve2D.init_method_get_point_position();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  set_point_in(_idx, _position) {
    Curve2D.init_method_set_point_in();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_set_point_in,
      this._owner,
      _idx, _position
    );
    
  }
  get_point_in(_idx) {
    Curve2D.init_method_get_point_in();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_point_in,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  set_point_out(_idx, _position) {
    Curve2D.init_method_set_point_out();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_set_point_out,
      this._owner,
      _idx, _position
    );
    
  }
  get_point_out(_idx) {
    Curve2D.init_method_get_point_out();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_point_out,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  remove_point(_idx) {
    Curve2D.init_method_remove_point();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_remove_point,
      this._owner,
      _idx
    );
    
  }
  clear_points() {
    Curve2D.init_method_clear_points();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_clear_points,
      this._owner,
      
    );
    
  }
  sample(_idx, _t) {
    Curve2D.init_method_sample();
    return _call_native_mb_ret(
      Curve2D._bindings.method_sample,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx, _t
    );
    
  }
  samplef(_fofs) {
    Curve2D.init_method_samplef();
    return _call_native_mb_ret(
      Curve2D._bindings.method_samplef,
      this._owner,
			Variant.Type.VECTOR2,
    
      _fofs
    );
    
  }
  set_bake_interval(_distance) {
    Curve2D.init_method_set_bake_interval();
    return _call_native_mb_no_ret(
      Curve2D._bindings.method_set_bake_interval,
      this._owner,
      _distance
    );
    
  }
  get_bake_interval() {
    Curve2D.init_method_get_bake_interval();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_bake_interval,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_baked_length() {
    Curve2D.init_method_get_baked_length();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_baked_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  sample_baked(_offset, _cubic) {
    Curve2D.init_method_sample_baked();
    return _call_native_mb_ret(
      Curve2D._bindings.method_sample_baked,
      this._owner,
			Variant.Type.VECTOR2,
    
      _offset, _cubic
    );
    
  }
  sample_baked_with_rotation(_offset, _cubic) {
    Curve2D.init_method_sample_baked_with_rotation();
    return _call_native_mb_ret(
      Curve2D._bindings.method_sample_baked_with_rotation,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      _offset, _cubic
    );
    
  }
  get_baked_points() {
    Curve2D.init_method_get_baked_points();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_baked_points,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  get_closest_point(_to_point) {
    Curve2D.init_method_get_closest_point();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_closest_point,
      this._owner,
			Variant.Type.VECTOR2,
    
      _to_point
    );
    
  }
  get_closest_offset(_to_point) {
    Curve2D.init_method_get_closest_offset();
    return _call_native_mb_ret(
      Curve2D._bindings.method_get_closest_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      _to_point
    );
    
  }
  tessellate(_max_stages, _tolerance_degrees) {
    Curve2D.init_method_tessellate();
    return _call_native_mb_ret(
      Curve2D._bindings.method_tessellate,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _max_stages, _tolerance_degrees
    );
    
  }
  tessellate_even_length(_max_stages, _tolerance_length) {
    Curve2D.init_method_tessellate_even_length();
    return _call_native_mb_ret(
      Curve2D._bindings.method_tessellate_even_length,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _max_stages, _tolerance_length
    );
    
  }
  
get bake_interval () {
  return this.get_bake_interval();
}
set bake_interval (new_value) {
  this.set_bake_interval(new_value);
}
get point_count () {
  return this.get_point_count();
}
set point_count (new_value) {
  this.set_point_count(new_value);
}

}