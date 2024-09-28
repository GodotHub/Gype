import * as internal from '__internal__';
import { Script } from '@js_godot/classes/script'
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
  method_new;
}
@GodotClass
export class GDScript extends Script{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GDScript");
    } else {
      super(godot_object);
    }
  }
  static init_method_new() {
    if (!this._bindings.method_new) {
      let classname = new StringName("GDScript");
      let methodname = new StringName("new");
      this._bindings.method_new = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1545262638
      );
    }
  }

  
  
  new() {
    GDScript.init_method_new();
    return _call_native_mb_ret(
      GDScript._bindings.method_new,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  

}