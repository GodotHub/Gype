import * as internal from '__internal__';
import { VisualShaderNodeFrame } from '@js_godot/classes/visual_shader_node_frame'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_description;
  method_get_description;
}
export class VisualShaderNodeComment extends VisualShaderNodeFrame{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeComment");
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
      let classname = new StringName("VisualShaderNodeComment");
      let methodname = new StringName("set_description");
      this._bindings.method_set_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeComment");
      let methodname = new StringName("get_description");
      this._bindings.method_get_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  set_description(_description) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_description,
      this._owner,
      _description
    );
    
  }
  get_description() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_description,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get description () {
  return this.get_description();
}
set description (new_value) {
  this.set_description(new_value);
}


  static {
    this._init_bindings();
  }
}