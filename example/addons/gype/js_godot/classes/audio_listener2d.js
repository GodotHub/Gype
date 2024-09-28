import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_make_current;
  method_clear_current;
  method_is_current;
}
@GodotClass
export class AudioListener2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioListener2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_make_current() {
    if (!this._bindings.method_make_current) {
      let classname = new StringName("AudioListener2D");
      let methodname = new StringName("make_current");
      this._bindings.method_make_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_clear_current() {
    if (!this._bindings.method_clear_current) {
      let classname = new StringName("AudioListener2D");
      let methodname = new StringName("clear_current");
      this._bindings.method_clear_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_current() {
    if (!this._bindings.method_is_current) {
      let classname = new StringName("AudioListener2D");
      let methodname = new StringName("is_current");
      this._bindings.method_is_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  make_current() {
    AudioListener2D.init_method_make_current();
    return _call_native_mb_no_ret(
      AudioListener2D._bindings.method_make_current,
      this._owner,
      
    );
    
  }
  clear_current() {
    AudioListener2D.init_method_clear_current();
    return _call_native_mb_no_ret(
      AudioListener2D._bindings.method_clear_current,
      this._owner,
      
    );
    
  }
  is_current() {
    AudioListener2D.init_method_is_current();
    return _call_native_mb_ret(
      AudioListener2D._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  

}