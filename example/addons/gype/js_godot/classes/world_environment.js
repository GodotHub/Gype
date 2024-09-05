import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_environment;
  method_get_environment;
  method_set_camera_attributes;
  method_get_camera_attributes;
  method_set_compositor;
  method_get_compositor;
}
export class WorldEnvironment extends Node{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WorldEnvironment");
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
      let classname = new StringName("WorldEnvironment");
      let methodname = new StringName("set_environment");
      this._bindings.method_set_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4143518816
      );
    }
    {
      let classname = new StringName("WorldEnvironment");
      let methodname = new StringName("get_environment");
      this._bindings.method_get_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3082064660
      );
    }
    {
      let classname = new StringName("WorldEnvironment");
      let methodname = new StringName("set_camera_attributes");
      this._bindings.method_set_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2817810567
      );
    }
    {
      let classname = new StringName("WorldEnvironment");
      let methodname = new StringName("get_camera_attributes");
      this._bindings.method_get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3921283215
      );
    }
    {
      let classname = new StringName("WorldEnvironment");
      let methodname = new StringName("set_compositor");
      this._bindings.method_set_compositor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1586754307
      );
    }
    {
      let classname = new StringName("WorldEnvironment");
      let methodname = new StringName("get_compositor");
      this._bindings.method_get_compositor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3647707413
      );
    }
  }
  
  set_environment(_env) {
    return _call_native_mb_no_ret(
      WorldEnvironment._bindings.method_set_environment,
      this._owner,
      _env
    );
    
  }
  get_environment() {
    return _call_native_mb_ret(
      WorldEnvironment._bindings.method_get_environment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_camera_attributes(_camera_attributes) {
    return _call_native_mb_no_ret(
      WorldEnvironment._bindings.method_set_camera_attributes,
      this._owner,
      _camera_attributes
    );
    
  }
  get_camera_attributes() {
    return _call_native_mb_ret(
      WorldEnvironment._bindings.method_get_camera_attributes,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_compositor(_compositor) {
    return _call_native_mb_no_ret(
      WorldEnvironment._bindings.method_set_compositor,
      this._owner,
      _compositor
    );
    
  }
  get_compositor() {
    return _call_native_mb_ret(
      WorldEnvironment._bindings.method_get_compositor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get environment () {
  return this.get_environment();
}
set environment (new_value) {
  this.set_environment(new_value);
}
get camera_attributes () {
  return this.get_camera_attributes();
}
set camera_attributes (new_value) {
  this.set_camera_attributes(new_value);
}
get compositor () {
  return this.get_compositor();
}
set compositor (new_value) {
  this.set_compositor(new_value);
}


  static {
    this._init_bindings();
  }
}