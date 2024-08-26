import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_create;
    method_set_from;
    method_get_from;
    method_set_to;
    method_get_to;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_exclude;
    method_get_exclude;
    method_set_collide_with_bodies;
    method_is_collide_with_bodies_enabled;
    method_set_collide_with_areas;
    method_is_collide_with_areas_enabled;
    method_set_hit_from_inside;
    method_is_hit_from_inside_enabled;
}


export class PhysicsRayQueryParameters2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsRayQueryParameters2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("create");
      this._bindings.method_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3196569324
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_from");
      this._bindings.method_set_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_from");
      this._bindings.method_get_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_to");
      this._bindings.method_set_to = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_to");
      this._bindings.method_get_to = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_exclude");
      this._bindings.method_set_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_exclude");
      this._bindings.method_get_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_collide_with_bodies");
      this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_collide_with_areas");
      this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_hit_from_inside");
      this._bindings.method_set_hit_from_inside = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("is_hit_from_inside_enabled");
      this._bindings.method_is_hit_from_inside_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  create(_from, _to, _collision_mask, _exclude) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create,
      this._owner,
			Variant.INT,
      _from, _to, _collision_mask, _exclude
    );
  }
  set_from(_from) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_from,
      this._owner,
      _from
    );
  }
  get_from() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_from,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_to(_to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_to,
      this._owner,
      _to
    );
  }
  get_to() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_to,
      this._owner,
			Variant.Type.VECTOR2
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