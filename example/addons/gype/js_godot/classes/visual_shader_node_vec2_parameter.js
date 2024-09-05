import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeParameter } from '@js_godot/classes/visual_shader_node_parameter'
import { Vector2 } from '@js_godot/variant/vector2'
import { Variant } from '@js_godot/variant/variant'
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
export class VisualShaderNodeVec2Parameter extends VisualShaderNodeParameter{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVec2Parameter");
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
      let classname = new StringName("VisualShaderNodeVec2Parameter");
      let methodname = new StringName("set_default_value_enabled");
      this._bindings.method_set_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec2Parameter");
      let methodname = new StringName("is_default_value_enabled");
      this._bindings.method_is_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec2Parameter");
      let methodname = new StringName("set_default_value");
      this._bindings.method_set_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec2Parameter");
      let methodname = new StringName("get_default_value");
      this._bindings.method_get_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  
  set_default_value_enabled(_enabled) {
    return _call_native_mb_no_ret(
      VisualShaderNodeVec2Parameter._bindings.method_set_default_value_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_default_value_enabled() {
    return _call_native_mb_ret(
      VisualShaderNodeVec2Parameter._bindings.method_is_default_value_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_default_value(_value) {
    return _call_native_mb_no_ret(
      VisualShaderNodeVec2Parameter._bindings.method_set_default_value,
      this._owner,
      _value
    );
    
  }
  get_default_value() {
    return _call_native_mb_ret(
      VisualShaderNodeVec2Parameter._bindings.method_get_default_value,
      this._owner,
			Variant.Type.VECTOR2,
    
      
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


  static {
    this._init_bindings();
  }
}