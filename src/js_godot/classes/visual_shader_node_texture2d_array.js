import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeSample3D } from '@js_godot/classes/visual_shader_node_sample3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture_array;
  method_get_texture_array;
}
export class VisualShaderNodeTexture2DArray extends VisualShaderNodeSample3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTexture2DArray");
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
      let classname = new StringName("VisualShaderNodeTexture2DArray");
      let methodname = new StringName("set_texture_array");
      this._bindings.method_set_texture_array = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2206200446
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTexture2DArray");
      let methodname = new StringName("get_texture_array");
      this._bindings.method_get_texture_array = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        146117123
      );
    }
  }
  
  set_texture_array(_value) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTexture2DArray._bindings.method_set_texture_array,
      this._owner,
      _value
    );
    
  }
  get_texture_array() {
    return _call_native_mb_ret(
      VisualShaderNodeTexture2DArray._bindings.method_get_texture_array,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get texture_array () {
  return this.get_texture_array();
}
set texture_array (new_value) {
  this.set_texture_array(new_value);
}


  static {
    this._init_bindings();
  }
}