import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Thread");
    } else {
      super(godot_object);
    }
  }
  static init_method_start() {
    if (!this.#_bindings.method_start) {
      let classname = new StringName("Thread");
      let methodname = new StringName("start");
      this.#_bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1327203254
      );
    }
  }
  static init_method_get_id() {
    if (!this.#_bindings.method_get_id) {
      let classname = new StringName("Thread");
      let methodname = new StringName("get_id");
      this.#_bindings.method_get_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_started() {
    if (!this.#_bindings.method_is_started) {
      let classname = new StringName("Thread");
      let methodname = new StringName("is_started");
      this.#_bindings.method_is_started = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_alive() {
    if (!this.#_bindings.method_is_alive) {
      let classname = new StringName("Thread");
      let methodname = new StringName("is_alive");
      this.#_bindings.method_is_alive = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_wait_to_finish() {
    if (!this.#_bindings.method_wait_to_finish) {
      let classname = new StringName("Thread");
      let methodname = new StringName("wait_to_finish");
      this.#_bindings.method_wait_to_finish = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1460262497
      );
    }
  }
  static init_method_set_thread_safety_checks_enabled() {
    if (!this.#_bindings.method_set_thread_safety_checks_enabled) {
      let classname = new StringName("Thread");
      let methodname = new StringName("set_thread_safety_checks_enabled");
      this.#_bindings.method_set_thread_safety_checks_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }

  
  
  start(_callable, _priority) {
    Thread.init_method_start();
    return _call_native_mb_ret(
      Thread.#_bindings.method_start,
      this._owner,
			Variant.Type.INT,
    
      _callable, _priority
    );
    
  }
  get_id() {
    Thread.init_method_get_id();
    return _call_native_mb_ret(
      Thread.#_bindings.method_get_id,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_started() {
    Thread.init_method_is_started();
    return _call_native_mb_ret(
      Thread.#_bindings.method_is_started,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_alive() {
    Thread.init_method_is_alive();
    return _call_native_mb_ret(
      Thread.#_bindings.method_is_alive,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  wait_to_finish() {
    Thread.init_method_wait_to_finish();
    return _call_native_mb_ret(
      Thread.#_bindings.method_wait_to_finish,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  set_thread_safety_checks_enabled(_enabled) {
    Thread.init_method_set_thread_safety_checks_enabled();
    return _call_native_mb_no_ret(
      Thread.#_bindings.method_set_thread_safety_checks_enabled,
      this._owner,
      _enabled
    );
    
  }
  

  static Priority = {
    PRIORITY_LOW: 0,
    PRIORITY_NORMAL: 1,
    PRIORITY_HIGH: 2,
  }
}