import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_input_name;
  method_get_input_name;
  method_get_input_real_name;
}
export class VisualShaderNodeInput extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeInput");
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
      let classname = new StringName("VisualShaderNodeInput");
      let methodname = new StringName("set_input_name");
      this._bindings.method_set_input_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeInput");
      let methodname = new StringName("get_input_name");
      this._bindings.method_get_input_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("VisualShaderNodeInput");
      let methodname = new StringName("get_input_real_name");
      this._bindings.method_get_input_real_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  set_input_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_input_name,
      this._owner,
      _name
    );
    
  }
  get_input_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_input_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_input_real_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_input_real_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get input_name () {
  return this.get_input_name();
}
set input_name (new_value) {
  this.set_input_name(new_value);
}


  static {
    this._init_bindings();
  }
}