import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_world_scale;
  method_get_world_scale;
  method_set_current;
  method_is_current;
}
export class XROrigin3D extends Node3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XROrigin3D");
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
      let classname = new StringName("XROrigin3D");
      let methodname = new StringName("set_world_scale");
      this._bindings.method_set_world_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("XROrigin3D");
      let methodname = new StringName("get_world_scale");
      this._bindings.method_get_world_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("XROrigin3D");
      let methodname = new StringName("set_current");
      this._bindings.method_set_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("XROrigin3D");
      let methodname = new StringName("is_current");
      this._bindings.method_is_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_world_scale(_world_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_world_scale,
      this._owner,
      _world_scale
    );
    
  }
  get_world_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_world_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_current(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_current,
      this._owner,
      _enabled
    );
    
  }
  is_current() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get world_scale () {
  return this.get_world_scale();
}
set world_scale (new_value) {
  this.set_world_scale(new_value);
}
get current () {
  return this.is_current();
}
set current (new_value) {
  this.set_current(new_value);
}


  static {
    this._init_bindings();
  }
}