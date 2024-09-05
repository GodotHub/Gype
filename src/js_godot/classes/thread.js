import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Callable } from '@js_godot/variant/callable'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_start;
  method_get_id;
  method_is_started;
  method_is_alive;
  method_wait_to_finish;
  method_set_thread_safety_checks_enabled;
}
export class Thread extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Thread");
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
      let classname = new StringName("Thread");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1327203254
      );
    }
    {
      let classname = new StringName("Thread");
      let methodname = new StringName("get_id");
      this._bindings.method_get_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Thread");
      let methodname = new StringName("is_started");
      this._bindings.method_is_started = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Thread");
      let methodname = new StringName("is_alive");
      this._bindings.method_is_alive = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Thread");
      let methodname = new StringName("wait_to_finish");
      this._bindings.method_wait_to_finish = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1460262497
      );
    }
    {
      let classname = new StringName("Thread");
      let methodname = new StringName("set_thread_safety_checks_enabled");
      this._bindings.method_set_thread_safety_checks_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
  }
  
  start(_callable, _priority) {
    return _call_native_mb_ret(
      Thread._bindings.method_start,
      this._owner,
			Variant.INT,
      _callable, _priority
    );
    
  }
  get_id() {
    return _call_native_mb_ret(
      Thread._bindings.method_get_id,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_started() {
    return _call_native_mb_ret(
      Thread._bindings.method_is_started,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_alive() {
    return _call_native_mb_ret(
      Thread._bindings.method_is_alive,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  wait_to_finish() {
    return _call_native_mb_ret(
      Thread._bindings.method_wait_to_finish,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  set_thread_safety_checks_enabled(_enabled) {
    return _call_native_mb_no_ret(
      Thread._bindings.method_set_thread_safety_checks_enabled,
      this._owner,
      _enabled
    );
    
  }
  

  static Priority = {
    PRIORITY_LOW: 0,
    PRIORITY_NORMAL: 1,
    PRIORITY_HIGH: 2,
  }

  static {
    this._init_bindings();
  }
}