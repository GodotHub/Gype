import * as internal from '__internal__';
import { Joint2D } from '@js_godot/classes/joint2d'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_length;
  method_get_length;
  method_set_rest_length;
  method_get_rest_length;
  method_set_stiffness;
  method_get_stiffness;
  method_set_damping;
  method_get_damping;
}
export class DampedSpringJoint2D extends Joint2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("DampedSpringJoint2D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("set_length");
      this._bindings.method_set_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("get_length");
      this._bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("set_rest_length");
      this._bindings.method_set_rest_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("get_rest_length");
      this._bindings.method_get_rest_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("set_stiffness");
      this._bindings.method_set_stiffness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("get_stiffness");
      this._bindings.method_get_stiffness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("set_damping");
      this._bindings.method_set_damping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("DampedSpringJoint2D");
      let methodname = new StringName("get_damping");
      this._bindings.method_get_damping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  
  set_length(_length) {
    return _call_native_mb_no_ret(
      DampedSpringJoint2D._bindings.method_set_length,
      this._owner,
      _length
    );
    
  }
  get_length() {
    return _call_native_mb_ret(
      DampedSpringJoint2D._bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_rest_length(_rest_length) {
    return _call_native_mb_no_ret(
      DampedSpringJoint2D._bindings.method_set_rest_length,
      this._owner,
      _rest_length
    );
    
  }
  get_rest_length() {
    return _call_native_mb_ret(
      DampedSpringJoint2D._bindings.method_get_rest_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_stiffness(_stiffness) {
    return _call_native_mb_no_ret(
      DampedSpringJoint2D._bindings.method_set_stiffness,
      this._owner,
      _stiffness
    );
    
  }
  get_stiffness() {
    return _call_native_mb_ret(
      DampedSpringJoint2D._bindings.method_get_stiffness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_damping(_damping) {
    return _call_native_mb_no_ret(
      DampedSpringJoint2D._bindings.method_set_damping,
      this._owner,
      _damping
    );
    
  }
  get_damping() {
    return _call_native_mb_ret(
      DampedSpringJoint2D._bindings.method_get_damping,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get length () {
  return this.get_length();
}
set length (new_value) {
  this.set_length(new_value);
}
get rest_length () {
  return this.get_rest_length();
}
set rest_length (new_value) {
  this.set_rest_length(new_value);
}
get stiffness () {
  return this.get_stiffness();
}
set stiffness (new_value) {
  this.set_stiffness(new_value);
}
get damping () {
  return this.get_damping();
}
set damping (new_value) {
  this.set_damping(new_value);
}


  static {
    this._init_bindings();
  }
}