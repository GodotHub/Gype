import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_wait;
    method_try_wait;
    method_post;
}


export class Semaphore extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Semaphore");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Semaphore");
        let methodname = new StringName("wait");
        this._bindings.method_wait = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("Semaphore");
        let methodname = new StringName("try_wait");
        this._bindings.method_try_wait = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("Semaphore");
        let methodname = new StringName("post");
        this._bindings.method_post = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  wait() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_wait,
      this._owner,
      
    );
    
  }
  try_wait() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_try_wait,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  post() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_post,
      this._owner,
      
    );
    
  }
}