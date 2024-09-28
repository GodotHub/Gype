import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { CollisionObject2D } from '@js_godot/classes/collision_object2d'
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
  method_move_and_collide;
  method_test_move;
  method_get_gravity;
  method_get_collision_exceptions;
  method_add_collision_exception_with;
  method_remove_collision_exception_with;
}
@GodotClass
export class PhysicsBody2D extends CollisionObject2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsBody2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_move_and_collide() {
    if (!this._bindings.method_move_and_collide) {
      let classname = new StringName("PhysicsBody2D");
      let methodname = new StringName("move_and_collide");
      this._bindings.method_move_and_collide = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3681923724
      );
    }
  }
  static init_method_test_move() {
    if (!this._bindings.method_test_move) {
      let classname = new StringName("PhysicsBody2D");
      let methodname = new StringName("test_move");
      this._bindings.method_test_move = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3324464701
      );
    }
  }
  static init_method_get_gravity() {
    if (!this._bindings.method_get_gravity) {
      let classname = new StringName("PhysicsBody2D");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_collision_exceptions() {
    if (!this._bindings.method_get_collision_exceptions) {
      let classname = new StringName("PhysicsBody2D");
      let methodname = new StringName("get_collision_exceptions");
      this._bindings.method_get_collision_exceptions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_add_collision_exception_with() {
    if (!this._bindings.method_add_collision_exception_with) {
      let classname = new StringName("PhysicsBody2D");
      let methodname = new StringName("add_collision_exception_with");
      this._bindings.method_add_collision_exception_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_remove_collision_exception_with() {
    if (!this._bindings.method_remove_collision_exception_with) {
      let classname = new StringName("PhysicsBody2D");
      let methodname = new StringName("remove_collision_exception_with");
      this._bindings.method_remove_collision_exception_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }

  
  
  move_and_collide(_motion, _test_only, _safe_margin, _recovery_as_collision) {
    PhysicsBody2D.init_method_move_and_collide();
    return _call_native_mb_ret(
      PhysicsBody2D._bindings.method_move_and_collide,
      this._owner,
			Variant.Type.OBJECT,
      _motion, _test_only, _safe_margin, _recovery_as_collision
    );
    
  }
  test_move(_from, _motion, _collision, _safe_margin, _recovery_as_collision) {
    PhysicsBody2D.init_method_test_move();
    return _call_native_mb_ret(
      PhysicsBody2D._bindings.method_test_move,
      this._owner,
			Variant.Type.BOOL,
    
      _from, _motion, _collision, _safe_margin, _recovery_as_collision
    );
    
  }
  get_gravity() {
    PhysicsBody2D.init_method_get_gravity();
    return _call_native_mb_ret(
      PhysicsBody2D._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_collision_exceptions() {
    PhysicsBody2D.init_method_get_collision_exceptions();
    return _call_native_mb_ret(
      PhysicsBody2D._bindings.method_get_collision_exceptions,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  add_collision_exception_with(_body) {
    PhysicsBody2D.init_method_add_collision_exception_with();
    return _call_native_mb_no_ret(
      PhysicsBody2D._bindings.method_add_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  remove_collision_exception_with(_body) {
    PhysicsBody2D.init_method_remove_collision_exception_with();
    return _call_native_mb_no_ret(
      PhysicsBody2D._bindings.method_remove_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  

}