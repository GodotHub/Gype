import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_get_travel;
  method_get_remainder;
  method_get_collision_safe_fraction;
  method_get_collision_unsafe_fraction;
  method_get_collision_count;
  method_get_collision_point;
  method_get_collision_normal;
  method_get_collider_velocity;
  method_get_collider_id;
  method_get_collider_rid;
  method_get_collider;
  method_get_collider_shape;
  method_get_collision_local_shape;
  method_get_collision_depth;
}
@GodotClass
export class PhysicsTestMotionResult3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsTestMotionResult3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_travel() {
    if (!this._bindings.method_get_travel) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_travel");
      this._bindings.method_get_travel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_remainder() {
    if (!this._bindings.method_get_remainder) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_remainder");
      this._bindings.method_get_remainder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_collision_safe_fraction() {
    if (!this._bindings.method_get_collision_safe_fraction) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_safe_fraction");
      this._bindings.method_get_collision_safe_fraction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_collision_unsafe_fraction() {
    if (!this._bindings.method_get_collision_unsafe_fraction) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_unsafe_fraction");
      this._bindings.method_get_collision_unsafe_fraction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_collision_count() {
    if (!this._bindings.method_get_collision_count) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_count");
      this._bindings.method_get_collision_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_collision_point() {
    if (!this._bindings.method_get_collision_point) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_point");
      this._bindings.method_get_collision_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1914908202
      );
    }
  }
  static init_method_get_collision_normal() {
    if (!this._bindings.method_get_collision_normal) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_normal");
      this._bindings.method_get_collision_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1914908202
      );
    }
  }
  static init_method_get_collider_velocity() {
    if (!this._bindings.method_get_collider_velocity) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collider_velocity");
      this._bindings.method_get_collider_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1914908202
      );
    }
  }
  static init_method_get_collider_id() {
    if (!this._bindings.method_get_collider_id) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collider_id");
      this._bindings.method_get_collider_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1591665591
      );
    }
  }
  static init_method_get_collider_rid() {
    if (!this._bindings.method_get_collider_rid) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collider_rid");
      this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1231817359
      );
    }
  }
  static init_method_get_collider() {
    if (!this._bindings.method_get_collider) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collider");
      this._bindings.method_get_collider = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2639523548
      );
    }
  }
  static init_method_get_collider_shape() {
    if (!this._bindings.method_get_collider_shape) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collider_shape");
      this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1591665591
      );
    }
  }
  static init_method_get_collision_local_shape() {
    if (!this._bindings.method_get_collision_local_shape) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_local_shape");
      this._bindings.method_get_collision_local_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1591665591
      );
    }
  }
  static init_method_get_collision_depth() {
    if (!this._bindings.method_get_collision_depth) {
      let classname = new StringName("PhysicsTestMotionResult3D");
      let methodname = new StringName("get_collision_depth");
      this._bindings.method_get_collision_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        218038398
      );
    }
  }

  
  
  get_travel() {
    PhysicsTestMotionResult3D.init_method_get_travel();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_travel,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_remainder() {
    PhysicsTestMotionResult3D.init_method_get_remainder();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_remainder,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_collision_safe_fraction() {
    PhysicsTestMotionResult3D.init_method_get_collision_safe_fraction();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_safe_fraction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_collision_unsafe_fraction() {
    PhysicsTestMotionResult3D.init_method_get_collision_unsafe_fraction();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_unsafe_fraction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_collision_count() {
    PhysicsTestMotionResult3D.init_method_get_collision_count();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_collision_point(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collision_point();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_point,
      this._owner,
			Variant.Type.VECTOR3,
    
      _collision_index
    );
    
  }
  get_collision_normal(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collision_normal();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _collision_index
    );
    
  }
  get_collider_velocity(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collider_velocity();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collider_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _collision_index
    );
    
  }
  get_collider_id(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collider_id();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collider_id,
      this._owner,
			Variant.Type.INT,
    
      _collision_index
    );
    
  }
  get_collider_rid(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collider_rid();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collider_rid,
      this._owner,
			Variant.Type.RID,
    
      _collision_index
    );
    
  }
  get_collider(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collider();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collider,
      this._owner,
			Variant.Type.OBJECT,
      _collision_index
    );
    
  }
  get_collider_shape(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collider_shape();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collider_shape,
      this._owner,
			Variant.Type.INT,
    
      _collision_index
    );
    
  }
  get_collision_local_shape(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collision_local_shape();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_local_shape,
      this._owner,
			Variant.Type.INT,
    
      _collision_index
    );
    
  }
  get_collision_depth(_collision_index) {
    PhysicsTestMotionResult3D.init_method_get_collision_depth();
    return _call_native_mb_ret(
      PhysicsTestMotionResult3D._bindings.method_get_collision_depth,
      this._owner,
			Variant.Type.FLOAT,
    
      _collision_index
    );
    
  }
  

}