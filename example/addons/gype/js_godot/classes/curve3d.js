import * as internal from '__internal__';
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
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
  method_set_point_position;
  method_get_point_position;
  method_set_point_tilt;
  method_get_point_tilt;
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
  method_set_up_vector_enabled;
  method_is_up_vector_enabled;
  method_get_baked_length;
  method_sample_baked;
  method_sample_baked_with_rotation;
  method_sample_baked_up_vector;
  method_get_baked_points;
  method_get_baked_tilts;
  method_get_baked_up_vectors;
  method_get_closest_point;
  method_get_closest_offset;
  method_tessellate;
  method_tessellate_even_length;
}
export class Curve3D extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Curve3D");
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
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_point_count");
      this._bindings.method_set_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2931053748
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_point_position");
      this._bindings.method_set_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_point_tilt");
      this._bindings.method_set_point_tilt = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_point_tilt");
      this._bindings.method_get_point_tilt = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_point_in");
      this._bindings.method_set_point_in = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_point_in");
      this._bindings.method_get_point_in = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_point_out");
      this._bindings.method_set_point_out = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_point_out");
      this._bindings.method_get_point_out = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("clear_points");
      this._bindings.method_clear_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("sample");
      this._bindings.method_sample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3285246857
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("samplef");
      this._bindings.method_samplef = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2553580215
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_bake_interval");
      this._bindings.method_set_bake_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_bake_interval");
      this._bindings.method_get_bake_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("set_up_vector_enabled");
      this._bindings.method_set_up_vector_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("is_up_vector_enabled");
      this._bindings.method_is_up_vector_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_baked_length");
      this._bindings.method_get_baked_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("sample_baked");
      this._bindings.method_sample_baked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1350085894
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("sample_baked_with_rotation");
      this._bindings.method_sample_baked_with_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1939359131
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("sample_baked_up_vector");
      this._bindings.method_sample_baked_up_vector = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1362627031
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_baked_points");
      this._bindings.method_get_baked_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_baked_tilts");
      this._bindings.method_get_baked_tilts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675695659
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_baked_up_vectors");
      this._bindings.method_get_baked_up_vectors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_closest_point");
      this._bindings.method_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        192990374
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("get_closest_offset");
      this._bindings.method_get_closest_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1109078154
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("tessellate");
      this._bindings.method_tessellate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1519759391
      );
    }
    {
      let classname = new StringName("Curve3D");
      let methodname = new StringName("tessellate_even_length");
      this._bindings.method_tessellate_even_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        133237049
      );
    }
  }
  
  get_point_count() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_point_count(_count) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_point_count,
      this._owner,
      _count
    );
    
  }
  add_point(_position, _in, _out, _index) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_add_point,
      this._owner,
      _position, _in, _out, _index
    );
    
  }
  set_point_position(_idx, _position) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_point_position,
      this._owner,
      _idx, _position
    );
    
  }
  get_point_position(_idx) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_point_tilt(_idx, _tilt) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_point_tilt,
      this._owner,
      _idx, _tilt
    );
    
  }
  get_point_tilt(_idx) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_point_tilt,
      this._owner,
			Variant.Type.FLOAT,
      _idx
    );
    
  }
  set_point_in(_idx, _position) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_point_in,
      this._owner,
      _idx, _position
    );
    
  }
  get_point_in(_idx) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_point_in,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_point_out(_idx, _position) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_point_out,
      this._owner,
      _idx, _position
    );
    
  }
  get_point_out(_idx) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_point_out,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  remove_point(_idx) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_remove_point,
      this._owner,
      _idx
    );
    
  }
  clear_points() {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_clear_points,
      this._owner,
      
    );
    
  }
  sample(_idx, _t) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_sample,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx, _t
    );
    
  }
  samplef(_fofs) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_samplef,
      this._owner,
			Variant.Type.VECTOR3,
    
      _fofs
    );
    
  }
  set_bake_interval(_distance) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_bake_interval,
      this._owner,
      _distance
    );
    
  }
  get_bake_interval() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_bake_interval,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_up_vector_enabled(_enable) {
    return _call_native_mb_no_ret(
      Curve3D._bindings.method_set_up_vector_enabled,
      this._owner,
      _enable
    );
    
  }
  is_up_vector_enabled() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_is_up_vector_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_baked_length() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_baked_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  sample_baked(_offset, _cubic) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_sample_baked,
      this._owner,
			Variant.Type.VECTOR3,
    
      _offset, _cubic
    );
    
  }
  sample_baked_with_rotation(_offset, _cubic, _apply_tilt) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_sample_baked_with_rotation,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _offset, _cubic, _apply_tilt
    );
    
  }
  sample_baked_up_vector(_offset, _apply_tilt) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_sample_baked_up_vector,
      this._owner,
			Variant.Type.VECTOR3,
    
      _offset, _apply_tilt
    );
    
  }
  get_baked_points() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_baked_points,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  get_baked_tilts() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_baked_tilts,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  get_baked_up_vectors() {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_baked_up_vectors,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  get_closest_point(_to_point) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_closest_point,
      this._owner,
			Variant.Type.VECTOR3,
    
      _to_point
    );
    
  }
  get_closest_offset(_to_point) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_get_closest_offset,
      this._owner,
			Variant.Type.FLOAT,
      _to_point
    );
    
  }
  tessellate(_max_stages, _tolerance_degrees) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_tessellate,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _max_stages, _tolerance_degrees
    );
    
  }
  tessellate_even_length(_max_stages, _tolerance_length) {
    return _call_native_mb_ret(
      Curve3D._bindings.method_tessellate_even_length,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
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
get up_vector_enabled () {
  return this.is_up_vector_enabled();
}
set up_vector_enabled (new_value) {
  this.set_up_vector_enabled(new_value);
}


  static {
    this._init_bindings();
  }
}