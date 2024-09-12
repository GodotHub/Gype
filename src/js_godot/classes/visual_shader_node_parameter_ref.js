import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_parameter_name;
  method_get_parameter_name;
}
export class VisualShaderNodeParameterRef extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParameterRef");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_parameter_name() {
    if (!this.#_bindings.method_set_parameter_name) {
      let classname = new StringName("VisualShaderNodeParameterRef");
      let methodname = new StringName("set_parameter_name");
      this.#_bindings.method_set_parameter_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_parameter_name() {
    if (!this.#_bindings.method_get_parameter_name) {
      let classname = new StringName("VisualShaderNodeParameterRef");
      let methodname = new StringName("get_parameter_name");
      this.#_bindings.method_get_parameter_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  set_parameter_name(_name) {
    VisualShaderNodeParameterRef.init_method_set_parameter_name();
    return _call_native_mb_no_ret(
      VisualShaderNodeParameterRef.#_bindings.method_set_parameter_name,
      this._owner,
      _name
    );
    
  }
  get_parameter_name() {
    VisualShaderNodeParameterRef.init_method_get_parameter_name();
    return _call_native_mb_ret(
      VisualShaderNodeParameterRef.#_bindings.method_get_parameter_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get parameter_name () {
  return this.get_parameter_name();
}
set parameter_name (new_value) {
  this.set_parameter_name(new_value);
}
get param_type () {
  return this._get_parameter_type();
}
set param_type (new_value) {
  this._set_parameter_type(new_value);
}

}