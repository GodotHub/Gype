import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeParameter } from '@js_godot/classes/visual_shader_node_parameter'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_default_value_enabled;
  method_is_default_value_enabled;
  method_set_default_value;
  method_get_default_value;
}
export class VisualShaderNodeTransformParameter extends VisualShaderNodeParameter{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTransformParameter");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_default_value_enabled() {
    if (!this.#_bindings.method_set_default_value_enabled) {
      let classname = new StringName("VisualShaderNodeTransformParameter");
      let methodname = new StringName("set_default_value_enabled");
      this.#_bindings.method_set_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_default_value_enabled() {
    if (!this.#_bindings.method_is_default_value_enabled) {
      let classname = new StringName("VisualShaderNodeTransformParameter");
      let methodname = new StringName("is_default_value_enabled");
      this.#_bindings.method_is_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_default_value() {
    if (!this.#_bindings.method_set_default_value) {
      let classname = new StringName("VisualShaderNodeTransformParameter");
      let methodname = new StringName("set_default_value");
      this.#_bindings.method_set_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_default_value() {
    if (!this.#_bindings.method_get_default_value) {
      let classname = new StringName("VisualShaderNodeTransformParameter");
      let methodname = new StringName("get_default_value");
      this.#_bindings.method_get_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }

  
  
  set_default_value_enabled(_enabled) {
    VisualShaderNodeTransformParameter.init_method_set_default_value_enabled();
    return _call_native_mb_no_ret(
      VisualShaderNodeTransformParameter.#_bindings.method_set_default_value_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_default_value_enabled() {
    VisualShaderNodeTransformParameter.init_method_is_default_value_enabled();
    return _call_native_mb_ret(
      VisualShaderNodeTransformParameter.#_bindings.method_is_default_value_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_default_value(_value) {
    VisualShaderNodeTransformParameter.init_method_set_default_value();
    return _call_native_mb_no_ret(
      VisualShaderNodeTransformParameter.#_bindings.method_set_default_value,
      this._owner,
      _value
    );
    
  }
  get_default_value() {
    VisualShaderNodeTransformParameter.init_method_get_default_value();
    return _call_native_mb_ret(
      VisualShaderNodeTransformParameter.#_bindings.method_get_default_value,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  
get default_value_enabled () {
  return this.is_default_value_enabled();
}
set default_value_enabled (new_value) {
  this.set_default_value_enabled(new_value);
}
get default_value () {
  return this.get_default_value();
}
set default_value (new_value) {
  this.set_default_value(new_value);
}

}