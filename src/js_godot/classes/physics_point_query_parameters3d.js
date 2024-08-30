import * as internal from '__internal__';
import { Vector3 } from 'src/js_godot/variant/vector3'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_position;
    method_get_position;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_exclude;
    method_get_exclude;
    method_set_collide_with_bodies;
    method_is_collide_with_bodies_enabled;
    method_set_collide_with_areas;
    method_is_collide_with_areas_enabled;
}


export class PhysicsPointQueryParameters3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsPointQueryParameters3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("set_position");
        this._bindings.method_set_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("get_position");
        this._bindings.method_get_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("set_collision_mask");
        this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("get_collision_mask");
        this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("set_exclude");
        this._bindings.method_set_exclude = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("get_exclude");
        this._bindings.method_get_exclude = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("set_collide_with_bodies");
        this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("is_collide_with_bodies_enabled");
        this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("set_collide_with_areas");
        this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicsPointQueryParameters3D");
        let methodname = new StringName("is_collide_with_areas_enabled");
        this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_exclude(_exclude) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_exclude,
      this._owner,
      _exclude
    );
    
  }
  get_exclude() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_exclude,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collide_with_areas(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collide_with_areas_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}