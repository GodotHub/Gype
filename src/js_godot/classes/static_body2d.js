import * as internal from '__internal__';
import { PhysicsBody2D } from 'src/js_godot/classes/physics_body2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_constant_linear_velocity;
    method_set_constant_angular_velocity;
    method_get_constant_linear_velocity;
    method_get_constant_angular_velocity;
    method_set_physics_material_override;
    method_get_physics_material_override;
}


export class StaticBody2D extends PhysicsBody2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StaticBody2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("StaticBody2D");
        let methodname = new StringName("set_constant_linear_velocity");
        this._bindings.method_set_constant_linear_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("StaticBody2D");
        let methodname = new StringName("set_constant_angular_velocity");
        this._bindings.method_set_constant_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("StaticBody2D");
        let methodname = new StringName("get_constant_linear_velocity");
        this._bindings.method_get_constant_linear_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("StaticBody2D");
        let methodname = new StringName("get_constant_angular_velocity");
        this._bindings.method_get_constant_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("StaticBody2D");
        let methodname = new StringName("set_physics_material_override");
        this._bindings.method_set_physics_material_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1784508650
        );
      }
      {
        let classname = new StringName("StaticBody2D");
        let methodname = new StringName("get_physics_material_override");
        this._bindings.method_get_physics_material_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2521850424
        );
      }
  }
  set_constant_linear_velocity(_vel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_linear_velocity,
      this._owner,
      _vel
    );
    
  }
  set_constant_angular_velocity(_vel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_angular_velocity,
      this._owner,
      _vel
    );
    
  }
  get_constant_linear_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_linear_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_constant_angular_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_angular_velocity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_physics_material_override(_physics_material_override) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_physics_material_override,
      this._owner,
      _physics_material_override
    );
    
  }
  get_physics_material_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_physics_material_override,
      this._owner,
			Variant.INT,
      
    );
    
  }
}