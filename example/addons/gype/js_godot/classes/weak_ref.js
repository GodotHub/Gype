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
  method_get_ref;
}
@GodotClass
export class WeakRef extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WeakRef");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_ref() {
    if (!this._bindings.method_get_ref) {
      let classname = new StringName("WeakRef");
      let methodname = new StringName("get_ref");
      this._bindings.method_get_ref = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1214101251
      );
    }
  }

  
  
  get_ref() {
    WeakRef.init_method_get_ref();
    return _call_native_mb_ret(
      WeakRef._bindings.method_get_ref,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  

}