import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_intersect_point;
  method_intersect_ray;
  method_intersect_shape;
  method_cast_motion;
  method_collide_shape;
  method_get_rest_info;
}
export class PhysicsDirectSpaceState3D extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectSpaceState3D");
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
      let classname = new StringName("PhysicsDirectSpaceState3D");
      let methodname = new StringName("intersect_point");
      this._bindings.method_intersect_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        975173756
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState3D");
      let methodname = new StringName("intersect_ray");
      this._bindings.method_intersect_ray = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3957970750
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState3D");
      let methodname = new StringName("intersect_shape");
      this._bindings.method_intersect_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3762137681
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState3D");
      let methodname = new StringName("cast_motion");
      this._bindings.method_cast_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1778757334
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState3D");
      let methodname = new StringName("collide_shape");
      this._bindings.method_collide_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3762137681
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState3D");
      let methodname = new StringName("get_rest_info");
      this._bindings.method_get_rest_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1376751592
      );
    }
  }
  
  intersect_point(_parameters, _max_results) {
    return _call_native_mb_ret(
      PhysicsDirectSpaceState3D._bindings.method_intersect_point,
      this._owner,
			Variant.INT,
      _parameters, _max_results
    );
    
  }
  intersect_ray(_parameters) {
    return _call_native_mb_ret(
      PhysicsDirectSpaceState3D._bindings.method_intersect_ray,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _parameters
    );
    
  }
  intersect_shape(_parameters, _max_results) {
    return _call_native_mb_ret(
      PhysicsDirectSpaceState3D._bindings.method_intersect_shape,
      this._owner,
			Variant.INT,
      _parameters, _max_results
    );
    
  }
  cast_motion(_parameters) {
    return _call_native_mb_ret(
      PhysicsDirectSpaceState3D._bindings.method_cast_motion,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      _parameters
    );
    
  }
  collide_shape(_parameters, _max_results) {
    return _call_native_mb_ret(
      PhysicsDirectSpaceState3D._bindings.method_collide_shape,
      this._owner,
			Variant.INT,
      _parameters, _max_results
    );
    
  }
  get_rest_info(_parameters) {
    return _call_native_mb_ret(
      PhysicsDirectSpaceState3D._bindings.method_get_rest_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _parameters
    );
    
  }
  


  static {
    this._init_bindings();
  }
}