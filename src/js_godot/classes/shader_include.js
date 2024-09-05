import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_code;
  method_get_code;
}
export class ShaderInclude extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ShaderInclude");
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
      let classname = new StringName("ShaderInclude");
      let methodname = new StringName("set_code");
      this._bindings.method_set_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("ShaderInclude");
      let methodname = new StringName("get_code");
      this._bindings.method_get_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  
  set_code(_code) {
    return _call_native_mb_no_ret(
      ShaderInclude._bindings.method_set_code,
      this._owner,
      _code
    );
    
  }
  get_code() {
    return _call_native_mb_ret(
      ShaderInclude._bindings.method_get_code,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get code () {
  return this.get_code();
}
set code (new_value) {
  this.set_code(new_value);
}


  static {
    this._init_bindings();
  }
}