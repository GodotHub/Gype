import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_wait;
  method_try_wait;
  method_post;
}
@GodotClass
export class Semaphore extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Semaphore");
    } else {
      super(godot_object);
    }
  }
  static init_method_wait() {
    if (!this._bindings.method_wait) {
      let classname = new StringName("Semaphore");
      let methodname = new StringName("wait");
      this._bindings.method_wait = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_try_wait() {
    if (!this._bindings.method_try_wait) {
      let classname = new StringName("Semaphore");
      let methodname = new StringName("try_wait");
      this._bindings.method_try_wait = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_post() {
    if (!this._bindings.method_post) {
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
    Semaphore.init_method_wait();
    return _call_native_mb_no_ret(
      Semaphore._bindings.method_wait,
      this._owner,
      
    );
    
  }
  try_wait() {
    Semaphore.init_method_try_wait();
    return _call_native_mb_ret(
      Semaphore._bindings.method_try_wait,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  post() {
    Semaphore.init_method_post();
    return _call_native_mb_no_ret(
      Semaphore._bindings.method_post,
      this._owner,
      
    );
    
  }
  

}