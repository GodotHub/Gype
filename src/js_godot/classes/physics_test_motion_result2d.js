import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { RID } from 'src/js_godot/variant/rid'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_travel;
    method_get_remainder;
    method_get_collision_point;
    method_get_collision_normal;
    method_get_collider_velocity;
    method_get_collider_id;
    method_get_collider_rid;
    method_get_collider;
    method_get_collider_shape;
    method_get_collision_local_shape;
    method_get_collision_depth;
    method_get_collision_safe_fraction;
    method_get_collision_unsafe_fraction;
}


export class PhysicsTestMotionResult2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsTestMotionResult2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_travel");
        this._bindings.method_get_travel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_remainder");
        this._bindings.method_get_remainder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collision_point");
        this._bindings.method_get_collision_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collision_normal");
        this._bindings.method_get_collision_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collider_velocity");
        this._bindings.method_get_collider_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collider_id");
        this._bindings.method_get_collider_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collider_rid");
        this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collider");
        this._bindings.method_get_collider = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1981248198
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collider_shape");
        this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collision_local_shape");
        this._bindings.method_get_collision_local_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collision_depth");
        this._bindings.method_get_collision_depth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collision_safe_fraction");
        this._bindings.method_get_collision_safe_fraction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionResult2D");
        let methodname = new StringName("get_collision_unsafe_fraction");
        this._bindings.method_get_collision_unsafe_fraction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  get_travel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_travel,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_remainder() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_remainder,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_collision_point() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_point,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_collision_normal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_normal,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_collider_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_collider_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_collider_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  get_collider() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_collider_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_shape,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_collision_local_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_local_shape,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_collision_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_collision_safe_fraction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_safe_fraction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_collision_unsafe_fraction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_unsafe_fraction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}