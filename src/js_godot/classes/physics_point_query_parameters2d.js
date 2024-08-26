import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_set_position;
    method_get_position;
    method_set_canvas_instance_id;
    method_get_canvas_instance_id;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_exclude;
    method_get_exclude;
    method_set_collide_with_bodies;
    method_is_collide_with_bodies_enabled;
    method_set_collide_with_areas;
    method_is_collide_with_areas_enabled;
}


export class PhysicsPointQueryParameters2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsPointQueryParameters2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_canvas_instance_id");
      this._bindings.method_set_canvas_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_canvas_instance_id");
      this._bindings.method_get_canvas_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_exclude");
      this._bindings.method_set_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_exclude");
      this._bindings.method_get_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_collide_with_bodies");
      this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_collide_with_areas");
      this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsPointQueryParameters2D");
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
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_canvas_instance_id(_canvas_instance_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_canvas_instance_id,
      this._owner,
      _canvas_instance_id
    );
  }
  get_canvas_instance_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas_instance_id,
      this._owner,
			Variant.Type.INT,
      
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