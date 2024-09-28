import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_intersect_point;
  method_intersect_ray;
  method_intersect_shape;
  method_cast_motion;
  method_collide_shape;
  method_get_rest_info;
}
@GodotClass
export class PhysicsDirectSpaceState2D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectSpaceState2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_intersect_point() {
    if (!this._bindings.method_intersect_point) {
      let classname = new StringName("PhysicsDirectSpaceState2D");
      let methodname = new StringName("intersect_point");
      this._bindings.method_intersect_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2118456068
      );
    }
  }
  static init_method_intersect_ray() {
    if (!this._bindings.method_intersect_ray) {
      let classname = new StringName("PhysicsDirectSpaceState2D");
      let methodname = new StringName("intersect_ray");
      this._bindings.method_intersect_ray = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1590275562
      );
    }
  }
  static init_method_intersect_shape() {
    if (!this._bindings.method_intersect_shape) {
      let classname = new StringName("PhysicsDirectSpaceState2D");
      let methodname = new StringName("intersect_shape");
      this._bindings.method_intersect_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2488867228
      );
    }
  }
  static init_method_cast_motion() {
    if (!this._bindings.method_cast_motion) {
      let classname = new StringName("PhysicsDirectSpaceState2D");
      let methodname = new StringName("cast_motion");
      this._bindings.method_cast_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711275086
      );
    }
  }
  static init_method_collide_shape() {
    if (!this._bindings.method_collide_shape) {
      let classname = new StringName("PhysicsDirectSpaceState2D");
      let methodname = new StringName("collide_shape");
      this._bindings.method_collide_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2488867228
      );
    }
  }
  static init_method_get_rest_info() {
    if (!this._bindings.method_get_rest_info) {
      let classname = new StringName("PhysicsDirectSpaceState2D");
      let methodname = new StringName("get_rest_info");
      this._bindings.method_get_rest_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2803666496
      );
    }
  }

  
  
  intersect_point(_parameters, _max_results) {
    PhysicsDirectSpaceState2D.init_method_intersect_point();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2D._bindings.method_intersect_point,
      this._owner,
			Variant.Type.ARRAY,
      _parameters, _max_results
    );
    
  }
  intersect_ray(_parameters) {
    PhysicsDirectSpaceState2D.init_method_intersect_ray();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2D._bindings.method_intersect_ray,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _parameters
    );
    
  }
  intersect_shape(_parameters, _max_results) {
    PhysicsDirectSpaceState2D.init_method_intersect_shape();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2D._bindings.method_intersect_shape,
      this._owner,
			Variant.Type.ARRAY,
      _parameters, _max_results
    );
    
  }
  cast_motion(_parameters) {
    PhysicsDirectSpaceState2D.init_method_cast_motion();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2D._bindings.method_cast_motion,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      _parameters
    );
    
  }
  collide_shape(_parameters, _max_results) {
    PhysicsDirectSpaceState2D.init_method_collide_shape();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2D._bindings.method_collide_shape,
      this._owner,
			Variant.Type.ARRAY,
      _parameters, _max_results
    );
    
  }
  get_rest_info(_parameters) {
    PhysicsDirectSpaceState2D.init_method_get_rest_info();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2D._bindings.method_get_rest_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _parameters
    );
    
  }
  

}