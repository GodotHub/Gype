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
  method_set_qualifier;
  method_get_qualifier;
}
export class VisualShaderNodeParameter extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParameter");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_parameter_name() {
    if (!this.#_bindings.method_set_parameter_name) {
      let classname = new StringName("VisualShaderNodeParameter");
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
      let classname = new StringName("VisualShaderNodeParameter");
      let methodname = new StringName("get_parameter_name");
      this.#_bindings.method_get_parameter_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_qualifier() {
    if (!this.#_bindings.method_set_qualifier) {
      let classname = new StringName("VisualShaderNodeParameter");
      let methodname = new StringName("set_qualifier");
      this.#_bindings.method_set_qualifier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1276489447
      );
    }
  }
  static init_method_get_qualifier() {
    if (!this.#_bindings.method_get_qualifier) {
      let classname = new StringName("VisualShaderNodeParameter");
      let methodname = new StringName("get_qualifier");
      this.#_bindings.method_get_qualifier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3558406205
      );
    }
  }

  
  
  set_parameter_name(_name) {
    VisualShaderNodeParameter.init_method_set_parameter_name();
    return _call_native_mb_no_ret(
      VisualShaderNodeParameter.#_bindings.method_set_parameter_name,
      this._owner,
      _name
    );
    
  }
  get_parameter_name() {
    VisualShaderNodeParameter.init_method_get_parameter_name();
    return _call_native_mb_ret(
      VisualShaderNodeParameter.#_bindings.method_get_parameter_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_qualifier(_qualifier) {
    VisualShaderNodeParameter.init_method_set_qualifier();
    return _call_native_mb_no_ret(
      VisualShaderNodeParameter.#_bindings.method_set_qualifier,
      this._owner,
      _qualifier
    );
    
  }
  get_qualifier() {
    VisualShaderNodeParameter.init_method_get_qualifier();
    return _call_native_mb_ret(
      VisualShaderNodeParameter.#_bindings.method_get_qualifier,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get parameter_name () {
  return this.get_parameter_name();
}
set parameter_name (new_value) {
  this.set_parameter_name(new_value);
}
get qualifier () {
  return this.get_qualifier();
}
set qualifier (new_value) {
  this.set_qualifier(new_value);
}

  static Qualifier = {
    QUAL_NONE: 0,
    QUAL_GLOBAL: 1,
    QUAL_INSTANCE: 2,
    QUAL_MAX: 3,
  }
}