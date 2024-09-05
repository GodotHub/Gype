import * as internal from '__internal__';
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParameterRef");
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
      let classname = new StringName("VisualShaderNodeParameterRef");
      let methodname = new StringName("set_parameter_name");
      this._bindings.method_set_parameter_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeParameterRef");
      let methodname = new StringName("get_parameter_name");
      this._bindings.method_get_parameter_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  
  set_parameter_name(_name) {
    return _call_native_mb_no_ret(
      VisualShaderNodeParameterRef._bindings.method_set_parameter_name,
      this._owner,
      _name
    );
    
  }
  get_parameter_name() {
    return _call_native_mb_ret(
      VisualShaderNodeParameterRef._bindings.method_get_parameter_name,
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


  static {
    this._init_bindings();
  }
}