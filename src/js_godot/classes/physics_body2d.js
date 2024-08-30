import * as internal from '__internal__';
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { CollisionObject2D } from 'src/js_godot/classes/collision_object2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_move_and_collide;
    method_test_move;
    method_get_gravity;
    method_get_collision_exceptions;
    method_add_collision_exception_with;
    method_remove_collision_exception_with;
}


export class PhysicsBody2D extends CollisionObject2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsBody2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsBody2D");
        let methodname = new StringName("move_and_collide");
        this._bindings.method_move_and_collide = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3681923724
        );
      }
      {
        let classname = new StringName("PhysicsBody2D");
        let methodname = new StringName("test_move");
        this._bindings.method_test_move = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3324464701
        );
      }
      {
        let classname = new StringName("PhysicsBody2D");
        let methodname = new StringName("get_gravity");
        this._bindings.method_get_gravity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PhysicsBody2D");
        let methodname = new StringName("get_collision_exceptions");
        this._bindings.method_get_collision_exceptions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915620761
        );
      }
      {
        let classname = new StringName("PhysicsBody2D");
        let methodname = new StringName("add_collision_exception_with");
        this._bindings.method_add_collision_exception_with = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1078189570
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_move_and_collide,
      this._owner,
			Variant.INT,
      _motion, _test_only, _safe_margin, _recovery_as_collision
    );
    
  }
  test_move(_from, _motion, _collision, _safe_margin, _recovery_as_collision) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_test_move,
      this._owner,
			Variant.Type.BOOL,
      _from, _motion, _collision, _safe_margin, _recovery_as_collision
    );
    
  }
  get_gravity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_collision_exceptions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_exceptions,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_collision_exception_with(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  remove_collision_exception_with(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_collision_exception_with,
      this._owner,
      _body
    );
    
  }
}