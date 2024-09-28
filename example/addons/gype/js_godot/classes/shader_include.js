import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_code;
  method_get_code;
}
@GodotClass
export class ShaderInclude extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ShaderInclude");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_code() {
    if (!this._bindings.method_set_code) {
      let classname = new StringName("ShaderInclude");
      let methodname = new StringName("set_code");
      this._bindings.method_set_code = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_code() {
    if (!this._bindings.method_get_code) {
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
    ShaderInclude.init_method_set_code();
    return _call_native_mb_no_ret(
      ShaderInclude._bindings.method_set_code,
      this._owner,
      _code
    );
    
  }
  get_code() {
    ShaderInclude.init_method_get_code();
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

}