import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Script } from '@js_godot/classes/script'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_new;
}
export class GDScript extends Script{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GDScript");
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_new,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}