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
  method_get_depth;
  method_get_collision_count;
  method_get_position;
  method_get_normal;
  method_get_angle;
  method_get_local_shape;
  method_get_collider;
  method_get_collider_id;
  method_get_collider_rid;
  method_get_collider_shape;
  method_get_collider_shape_index;
  method_get_collider_velocity;
}
@GodotClass
export class KinematicCollision3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("KinematicCollision3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_travel() {
    if (!this._bindings.method_get_travel) {
      let classname = new StringName("KinematicCollision3D");
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
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_remainder");
      this._bindings.method_get_remainder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_depth() {
    if (!this._bindings.method_get_depth) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_collision_count() {
    if (!this._bindings.method_get_collision_count) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_collision_count");
      this._bindings.method_get_collision_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_position() {
    if (!this._bindings.method_get_position) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1914908202
      );
    }
  }
  static init_method_get_normal() {
    if (!this._bindings.method_get_normal) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_normal");
      this._bindings.method_get_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1914908202
      );
    }
  }
  static init_method_get_angle() {
    if (!this._bindings.method_get_angle) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_angle");
      this._bindings.method_get_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1242741860
      );
    }
  }
  static init_method_get_local_shape() {
    if (!this._bindings.method_get_local_shape) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_local_shape");
      this._bindings.method_get_local_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2639523548
      );
    }
  }
  static init_method_get_collider() {
    if (!this._bindings.method_get_collider) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_collider");
      this._bindings.method_get_collider = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2639523548
      );
    }
  }
  static init_method_get_collider_id() {
    if (!this._bindings.method_get_collider_id) {
      let classname = new StringName("KinematicCollision3D");
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
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_collider_rid");
      this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1231817359
      );
    }
  }
  static init_method_get_collider_shape() {
    if (!this._bindings.method_get_collider_shape) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_collider_shape");
      this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2639523548
      );
    }
  }
  static init_method_get_collider_shape_index() {
    if (!this._bindings.method_get_collider_shape_index) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_collider_shape_index");
      this._bindings.method_get_collider_shape_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1591665591
      );
    }
  }
  static init_method_get_collider_velocity() {
    if (!this._bindings.method_get_collider_velocity) {
      let classname = new StringName("KinematicCollision3D");
      let methodname = new StringName("get_collider_velocity");
      this._bindings.method_get_collider_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1914908202
      );
    }
  }

  
  
  get_travel() {
    KinematicCollision3D.init_method_get_travel();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_travel,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_remainder() {
    KinematicCollision3D.init_method_get_remainder();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_remainder,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_depth() {
    KinematicCollision3D.init_method_get_depth();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_collision_count() {
    KinematicCollision3D.init_method_get_collision_count();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collision_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_position(_collision_index) {
    KinematicCollision3D.init_method_get_position();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _collision_index
    );
    
  }
  get_normal(_collision_index) {
    KinematicCollision3D.init_method_get_normal();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _collision_index
    );
    
  }
  get_angle(_collision_index, _up_direction) {
    KinematicCollision3D.init_method_get_angle();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      _collision_index, _up_direction
    );
    
  }
  get_local_shape(_collision_index) {
    KinematicCollision3D.init_method_get_local_shape();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_local_shape,
      this._owner,
			Variant.Type.OBJECT,
      _collision_index
    );
    
  }
  get_collider(_collision_index) {
    KinematicCollision3D.init_method_get_collider();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collider,
      this._owner,
			Variant.Type.OBJECT,
      _collision_index
    );
    
  }
  get_collider_id(_collision_index) {
    KinematicCollision3D.init_method_get_collider_id();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collider_id,
      this._owner,
			Variant.Type.INT,
    
      _collision_index
    );
    
  }
  get_collider_rid(_collision_index) {
    KinematicCollision3D.init_method_get_collider_rid();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collider_rid,
      this._owner,
			Variant.Type.RID,
    
      _collision_index
    );
    
  }
  get_collider_shape(_collision_index) {
    KinematicCollision3D.init_method_get_collider_shape();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collider_shape,
      this._owner,
			Variant.Type.OBJECT,
      _collision_index
    );
    
  }
  get_collider_shape_index(_collision_index) {
    KinematicCollision3D.init_method_get_collider_shape_index();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collider_shape_index,
      this._owner,
			Variant.Type.INT,
    
      _collision_index
    );
    
  }
  get_collider_velocity(_collision_index) {
    KinematicCollision3D.init_method_get_collider_velocity();
    return _call_native_mb_ret(
      KinematicCollision3D._bindings.method_get_collider_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _collision_index
    );
    
  }
  

}