import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_varying_name;
  method_get_varying_name;
  method_set_varying_type;
  method_get_varying_type;
}
export class VisualShaderNodeVarying extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVarying");
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
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("set_varying_name");
      this._bindings.method_set_varying_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("get_varying_name");
      this._bindings.method_get_varying_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("set_varying_type");
      this._bindings.method_set_varying_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3565867981
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("get_varying_type");
      this._bindings.method_get_varying_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        523183580
      );
    }
  }
  
  set_varying_name(_name) {
    return _call_native_mb_no_ret(
      VisualShaderNodeVarying._bindings.method_set_varying_name,
      this._owner,
      _name
    );
    
  }
  get_varying_name() {
    return _call_native_mb_ret(
      VisualShaderNodeVarying._bindings.method_get_varying_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_varying_type(_type) {
    return _call_native_mb_no_ret(
      VisualShaderNodeVarying._bindings.method_set_varying_type,
      this._owner,
      _type
    );
    
  }
  get_varying_type() {
    return _call_native_mb_ret(
      VisualShaderNodeVarying._bindings.method_get_varying_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get varying_name () {
  return this.get_varying_name();
}
set varying_name (new_value) {
  this.set_varying_name(new_value);
}
get varying_type () {
  return this.get_varying_type();
}
set varying_type (new_value) {
  this.set_varying_type(new_value);
}


  static {
    this._init_bindings();
  }
}