import * as internal from '__internal__';
import { Vector3 } from 'src/js_godot/variant/vector3'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { RID } from 'src/js_godot/variant/rid'
import { Transform3D } from 'src/js_godot/variant/transform3d'
class _MethodBindings {
    method_set_shape;
    method_get_shape;
    method_set_shape_rid;
    method_get_shape_rid;
    method_set_transform;
    method_get_transform;
    method_set_motion;
    method_get_motion;
    method_set_margin;
    method_get_margin;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_exclude;
    method_get_exclude;
    method_set_collide_with_bodies;
    method_is_collide_with_bodies_enabled;
    method_set_collide_with_areas;
    method_is_collide_with_areas_enabled;
}


export class PhysicsShapeQueryParameters3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsShapeQueryParameters3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        968641751
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        121922552
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_shape_rid");
      this._bindings.method_set_shape_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_shape_rid");
      this._bindings.method_get_shape_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2952846383
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_motion");
      this._bindings.method_set_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_motion");
      this._bindings.method_get_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_exclude");
      this._bindings.method_set_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_exclude");
      this._bindings.method_get_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_collide_with_bodies");
      this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_collide_with_areas");
      this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape,
      this._owner,
      _shape
    );
  }
  get_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
    );
  }
  set_shape_rid(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape_rid,
      this._owner,
      _shape
    );
  }
  get_shape_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_transform(_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transform,
      this._owner,
      _transform
    );
  }
  get_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
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
  get_motion() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_margin,
      this._owner,
      _margin
    );
  }
  get_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      
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