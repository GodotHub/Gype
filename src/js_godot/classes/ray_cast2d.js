import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Node2D } from 'src/js_godot/classes/node2d'
import { RID } from 'src/js_godot/variant/rid'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_enabled;
    method_is_enabled;
    method_set_target_position;
    method_get_target_position;
    method_is_colliding;
    method_force_raycast_update;
    method_get_collider;
    method_get_collider_rid;
    method_get_collider_shape;
    method_get_collision_point;
    method_get_collision_normal;
    method_add_exception_rid;
    method_add_exception;
    method_remove_exception_rid;
    method_remove_exception;
    method_clear_exceptions;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_collision_mask_value;
    method_get_collision_mask_value;
    method_set_exclude_parent_body;
    method_get_exclude_parent_body;
    method_set_collide_with_areas;
    method_is_collide_with_areas_enabled;
    method_set_collide_with_bodies;
    method_is_collide_with_bodies_enabled;
    method_set_hit_from_inside;
    method_is_hit_from_inside_enabled;
}


export class RayCast2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RayCast2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_enabled");
        this._bindings.method_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("is_enabled");
        this._bindings.method_is_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_target_position");
        this._bindings.method_set_target_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_target_position");
        this._bindings.method_get_target_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("is_colliding");
        this._bindings.method_is_colliding = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("force_raycast_update");
        this._bindings.method_force_raycast_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collider");
        this._bindings.method_get_collider = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1981248198
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collider_rid");
        this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collider_shape");
        this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collision_point");
        this._bindings.method_get_collision_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collision_normal");
        this._bindings.method_get_collision_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("add_exception_rid");
        this._bindings.method_add_exception_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("add_exception");
        this._bindings.method_add_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3090941106
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("remove_exception_rid");
        this._bindings.method_remove_exception_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("remove_exception");
        this._bindings.method_remove_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3090941106
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("clear_exceptions");
        this._bindings.method_clear_exceptions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_collision_mask");
        this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collision_mask");
        this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_collision_mask_value");
        this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_collision_mask_value");
        this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_exclude_parent_body");
        this._bindings.method_set_exclude_parent_body = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("get_exclude_parent_body");
        this._bindings.method_get_exclude_parent_body = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_collide_with_areas");
        this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("is_collide_with_areas_enabled");
        this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_collide_with_bodies");
        this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("is_collide_with_bodies_enabled");
        this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("set_hit_from_inside");
        this._bindings.method_set_hit_from_inside = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RayCast2D");
        let methodname = new StringName("is_hit_from_inside_enabled");
        this._bindings.method_is_hit_from_inside_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_target_position(_local_point) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_position,
      this._owner,
      _local_point
    );
    
  }
  get_target_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  is_colliding() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_colliding,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  force_raycast_update() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_raycast_update,
      this._owner,
      
    );
    
  }
  get_collider() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider,
      this._owner,
			Variant.INT,
      
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
  get_collider_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_shape,
      this._owner,
			Variant.Type.INT,
      
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
  add_exception_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_exception_rid,
      this._owner,
      _rid
    );
    
  }
  add_exception(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_exception,
      this._owner,
      _node
    );
    
  }
  remove_exception_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_exception_rid,
      this._owner,
      _rid
    );
    
  }
  remove_exception(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_exception,
      this._owner,
      _node
    );
    
  }
  clear_exceptions() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_exceptions,
      this._owner,
      
    );
    
  }
  set_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  set_exclude_parent_body(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_exclude_parent_body,
      this._owner,
      _mask
    );
    
  }
  get_exclude_parent_body() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_exclude_parent_body,
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
  set_hit_from_inside(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hit_from_inside,
      this._owner,
      _enable
    );
    
  }
  is_hit_from_inside_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hit_from_inside_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}