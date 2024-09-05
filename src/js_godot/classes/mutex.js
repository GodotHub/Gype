import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_lock;
  method_try_lock;
  method_unlock;
}
export class Mutex extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Mutex");
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
      let classname = new StringName("Mutex");
      let methodname = new StringName("lock");
      this._bindings.method_lock = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Mutex");
      let methodname = new StringName("try_lock");
      this._bindings.method_try_lock = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("Mutex");
      let methodname = new StringName("unlock");
      this._bindings.method_unlock = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  lock() {
    return _call_native_mb_no_ret(
      Mutex._bindings.method_lock,
      this._owner,
      
    );
    
  }
  try_lock() {
    return _call_native_mb_ret(
      Mutex._bindings.method_try_lock,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  unlock() {
    return _call_native_mb_no_ret(
      Mutex._bindings.method_unlock,
      this._owner,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}