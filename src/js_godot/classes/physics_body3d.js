import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { CollisionObject3D } from '@js_godot/classes/collision_object3d'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_move_and_collide;
  method_test_move;
  method_get_gravity;
  method_set_axis_lock;
  method_get_axis_lock;
  method_get_collision_exceptions;
  method_add_collision_exception_with;
  method_remove_collision_exception_with;
}
export class PhysicsBody3D extends CollisionObject3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsBody3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_move_and_collide() {
    if (!this.#_bindings.method_move_and_collide) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("move_and_collide");
      this.#_bindings.method_move_and_collide = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3208792678
      );
    }
  }
  static init_method_test_move() {
    if (!this.#_bindings.method_test_move) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("test_move");
      this.#_bindings.method_test_move = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2481691619
      );
    }
  }
  static init_method_get_gravity() {
    if (!this.#_bindings.method_get_gravity) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("get_gravity");
      this.#_bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_axis_lock() {
    if (!this.#_bindings.method_set_axis_lock) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("set_axis_lock");
      this.#_bindings.method_set_axis_lock = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1787895195
      );
    }
  }
  static init_method_get_axis_lock() {
    if (!this.#_bindings.method_get_axis_lock) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("get_axis_lock");
      this.#_bindings.method_get_axis_lock = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2264617709
      );
    }
  }
  static init_method_get_collision_exceptions() {
    if (!this.#_bindings.method_get_collision_exceptions) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("get_collision_exceptions");
      this.#_bindings.method_get_collision_exceptions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_add_collision_exception_with() {
    if (!this.#_bindings.method_add_collision_exception_with) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("add_collision_exception_with");
      this.#_bindings.method_add_collision_exception_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_remove_collision_exception_with() {
    if (!this.#_bindings.method_remove_collision_exception_with) {
      let classname = new StringName("PhysicsBody3D");
      let methodname = new StringName("remove_collision_exception_with");
      this.#_bindings.method_remove_collision_exception_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }

  
  
  move_and_collide(_motion, _test_only, _safe_margin, _recovery_as_collision, _max_collisions) {
    PhysicsBody3D.init_method_move_and_collide();
    return _call_native_mb_ret(
      PhysicsBody3D.#_bindings.method_move_and_collide,
      this._owner,
			Variant.Type.OBJECT,
      _motion, _test_only, _safe_margin, _recovery_as_collision, _max_collisions
    );
    
  }
  test_move(_from, _motion, _collision, _safe_margin, _recovery_as_collision, _max_collisions) {
    PhysicsBody3D.init_method_test_move();
    return _call_native_mb_ret(
      PhysicsBody3D.#_bindings.method_test_move,
      this._owner,
			Variant.Type.BOOL,
    
      _from, _motion, _collision, _safe_margin, _recovery_as_collision, _max_collisions
    );
    
  }
  get_gravity() {
    PhysicsBody3D.init_method_get_gravity();
    return _call_native_mb_ret(
      PhysicsBody3D.#_bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_axis_lock(_axis, _lock) {
    PhysicsBody3D.init_method_set_axis_lock();
    return _call_native_mb_no_ret(
      PhysicsBody3D.#_bindings.method_set_axis_lock,
      this._owner,
      _axis, _lock
    );
    
  }
  get_axis_lock(_axis) {
    PhysicsBody3D.init_method_get_axis_lock();
    return _call_native_mb_ret(
      PhysicsBody3D.#_bindings.method_get_axis_lock,
      this._owner,
			Variant.Type.BOOL,
    
      _axis
    );
    
  }
  get_collision_exceptions() {
    PhysicsBody3D.init_method_get_collision_exceptions();
    return _call_native_mb_ret(
      PhysicsBody3D.#_bindings.method_get_collision_exceptions,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  add_collision_exception_with(_body) {
    PhysicsBody3D.init_method_add_collision_exception_with();
    return _call_native_mb_no_ret(
      PhysicsBody3D.#_bindings.method_add_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  remove_collision_exception_with(_body) {
    PhysicsBody3D.init_method_remove_collision_exception_with();
    return _call_native_mb_no_ret(
      PhysicsBody3D.#_bindings.method_remove_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  
get axis_lock_linear_x () {
  return this.get_axis_lock();
}
set axis_lock_linear_x (new_value) {
  this.set_axis_lock(new_value);
}
get axis_lock_linear_y () {
  return this.get_axis_lock();
}
set axis_lock_linear_y (new_value) {
  this.set_axis_lock(new_value);
}
get axis_lock_linear_z () {
  return this.get_axis_lock();
}
set axis_lock_linear_z (new_value) {
  this.set_axis_lock(new_value);
}
get axis_lock_angular_x () {
  return this.get_axis_lock();
}
set axis_lock_angular_x (new_value) {
  this.set_axis_lock(new_value);
}
get axis_lock_angular_y () {
  return this.get_axis_lock();
}
set axis_lock_angular_y (new_value) {
  this.set_axis_lock(new_value);
}
get axis_lock_angular_z () {
  return this.get_axis_lock();
}
set axis_lock_angular_z (new_value) {
  this.set_axis_lock(new_value);
}

}