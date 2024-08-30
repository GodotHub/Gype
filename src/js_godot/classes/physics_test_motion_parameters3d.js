import * as internal from '__internal__';
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_from;
    method_set_from;
    method_get_motion;
    method_set_motion;
    method_get_margin;
    method_set_margin;
    method_get_max_collisions;
    method_set_max_collisions;
    method_is_collide_separation_ray_enabled;
    method_set_collide_separation_ray_enabled;
    method_get_exclude_bodies;
    method_set_exclude_bodies;
    method_get_exclude_objects;
    method_set_exclude_objects;
    method_is_recovery_as_collision_enabled;
    method_set_recovery_as_collision_enabled;
}


export class PhysicsTestMotionParameters3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsTestMotionParameters3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("get_from");
        this._bindings.method_get_from = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3229777777
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_from");
        this._bindings.method_set_from = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2952846383
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("get_motion");
        this._bindings.method_get_motion = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_motion");
        this._bindings.method_set_motion = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("get_margin");
        this._bindings.method_get_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_margin");
        this._bindings.method_set_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("get_max_collisions");
        this._bindings.method_get_max_collisions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_max_collisions");
        this._bindings.method_set_max_collisions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("is_collide_separation_ray_enabled");
        this._bindings.method_is_collide_separation_ray_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_collide_separation_ray_enabled");
        this._bindings.method_set_collide_separation_ray_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("get_exclude_bodies");
        this._bindings.method_get_exclude_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_exclude_bodies");
        this._bindings.method_set_exclude_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("get_exclude_objects");
        this._bindings.method_get_exclude_objects = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_exclude_objects");
        this._bindings.method_set_exclude_objects = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("is_recovery_as_collision_enabled");
        this._bindings.method_is_recovery_as_collision_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicsTestMotionParameters3D");
        let methodname = new StringName("set_recovery_as_collision_enabled");
        this._bindings.method_set_recovery_as_collision_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
  }
  get_from() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_from,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
    
  }
  set_from(_from) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_from,
      this._owner,
      _from
    );
    
  }
  get_motion() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_motion(_motion) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion,
      this._owner,
      _motion
    );
    
  }
  get_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_max_collisions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_collisions,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max_collisions(_max_collisions) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_collisions,
      this._owner,
      _max_collisions
    );
    
  }
  is_collide_separation_ray_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collide_separation_ray_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collide_separation_ray_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collide_separation_ray_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_exclude_bodies() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_exclude_bodies,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_exclude_bodies(_exclude_list) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_exclude_bodies,
      this._owner,
      _exclude_list
    );
    
  }
  get_exclude_objects() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_exclude_objects,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_exclude_objects(_exclude_list) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_exclude_objects,
      this._owner,
      _exclude_list
    );
    
  }
  is_recovery_as_collision_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_recovery_as_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_recovery_as_collision_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_recovery_as_collision_enabled,
      this._owner,
      _enabled
    );
    
  }
}