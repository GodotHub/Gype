import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Transform3D } from '@js_godot/variant/transform3d'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_make_current;
  method_clear_current;
  method_is_current;
  method_get_listener_transform;
}
export class AudioListener3D extends Node3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioListener3D");
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
      let classname = new StringName("AudioListener3D");
      let methodname = new StringName("make_current");
      this._bindings.method_make_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AudioListener3D");
      let methodname = new StringName("clear_current");
      this._bindings.method_clear_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AudioListener3D");
      let methodname = new StringName("is_current");
      this._bindings.method_is_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioListener3D");
      let methodname = new StringName("get_listener_transform");
      this._bindings.method_get_listener_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
  }
  
  make_current() {
    return _call_native_mb_no_ret(
      AudioListener3D._bindings.method_make_current,
      this._owner,
      
    );
    
  }
  clear_current() {
    return _call_native_mb_no_ret(
      AudioListener3D._bindings.method_clear_current,
      this._owner,
      
    );
    
  }
  is_current() {
    return _call_native_mb_ret(
      AudioListener3D._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_listener_transform() {
    return _call_native_mb_ret(
      AudioListener3D._bindings.method_get_listener_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}