import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PhysicsBody2D } from '@js_godot/classes/physics_body2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_constant_linear_velocity;
  method_set_constant_angular_velocity;
  method_get_constant_linear_velocity;
  method_get_constant_angular_velocity;
  method_set_physics_material_override;
  method_get_physics_material_override;
}
export class StaticBody2D extends PhysicsBody2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StaticBody2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_constant_linear_velocity() {
    if (!this.#_bindings.method_set_constant_linear_velocity) {
      let classname = new StringName("StaticBody2D");
      let methodname = new StringName("set_constant_linear_velocity");
      this.#_bindings.method_set_constant_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_set_constant_angular_velocity() {
    if (!this.#_bindings.method_set_constant_angular_velocity) {
      let classname = new StringName("StaticBody2D");
      let methodname = new StringName("set_constant_angular_velocity");
      this.#_bindings.method_set_constant_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_constant_linear_velocity() {
    if (!this.#_bindings.method_get_constant_linear_velocity) {
      let classname = new StringName("StaticBody2D");
      let methodname = new StringName("get_constant_linear_velocity");
      this.#_bindings.method_get_constant_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_constant_angular_velocity() {
    if (!this.#_bindings.method_get_constant_angular_velocity) {
      let classname = new StringName("StaticBody2D");
      let methodname = new StringName("get_constant_angular_velocity");
      this.#_bindings.method_get_constant_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_physics_material_override() {
    if (!this.#_bindings.method_set_physics_material_override) {
      let classname = new StringName("StaticBody2D");
      let methodname = new StringName("set_physics_material_override");
      this.#_bindings.method_set_physics_material_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1784508650
      );
    }
  }
  static init_method_get_physics_material_override() {
    if (!this.#_bindings.method_get_physics_material_override) {
      let classname = new StringName("StaticBody2D");
      let methodname = new StringName("get_physics_material_override");
      this.#_bindings.method_get_physics_material_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2521850424
      );
    }
  }

  
  
  set_constant_linear_velocity(_vel) {
    StaticBody2D.init_method_set_constant_linear_velocity();
    return _call_native_mb_no_ret(
      StaticBody2D.#_bindings.method_set_constant_linear_velocity,
      this._owner,
      _vel
    );
    
  }
  set_constant_angular_velocity(_vel) {
    StaticBody2D.init_method_set_constant_angular_velocity();
    return _call_native_mb_no_ret(
      StaticBody2D.#_bindings.method_set_constant_angular_velocity,
      this._owner,
      _vel
    );
    
  }
  get_constant_linear_velocity() {
    StaticBody2D.init_method_get_constant_linear_velocity();
    return _call_native_mb_ret(
      StaticBody2D.#_bindings.method_get_constant_linear_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_constant_angular_velocity() {
    StaticBody2D.init_method_get_constant_angular_velocity();
    return _call_native_mb_ret(
      StaticBody2D.#_bindings.method_get_constant_angular_velocity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_physics_material_override(_physics_material_override) {
    StaticBody2D.init_method_set_physics_material_override();
    return _call_native_mb_no_ret(
      StaticBody2D.#_bindings.method_set_physics_material_override,
      this._owner,
      _physics_material_override
    );
    
  }
  get_physics_material_override() {
    StaticBody2D.init_method_get_physics_material_override();
    return _call_native_mb_ret(
      StaticBody2D.#_bindings.method_get_physics_material_override,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get physics_material_override () {
  return this.get_physics_material_override();
}
set physics_material_override (new_value) {
  this.set_physics_material_override(new_value);
}
get constant_linear_velocity () {
  return this.get_constant_linear_velocity();
}
set constant_linear_velocity (new_value) {
  this.set_constant_linear_velocity(new_value);
}
get constant_angular_velocity () {
  return this.get_constant_angular_velocity();
}
set constant_angular_velocity (new_value) {
  this.set_constant_angular_velocity(new_value);
}

}