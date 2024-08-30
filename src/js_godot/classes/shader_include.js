import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_code;
    method_get_code;
}


export class ShaderInclude extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ShaderInclude");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_code,
      this._owner,
      _code
    );
    
  }
  get_code() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_code,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
}