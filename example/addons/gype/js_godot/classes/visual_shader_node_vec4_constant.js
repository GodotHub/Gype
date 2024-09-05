import * as internal from '__internal__';
import { VisualShaderNodeConstant } from '@js_godot/classes/visual_shader_node_constant'
import { StringName } from '@js_godot/variant/string_name'
import { Quaternion } from '@js_godot/variant/quaternion'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_constant;
  method_get_constant;
}
export class VisualShaderNodeVec4Constant extends VisualShaderNodeConstant{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVec4Constant");
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
      let classname = new StringName("VisualShaderNodeVec4Constant");
      let methodname = new StringName("set_constant");
      this._bindings.method_set_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1727505552
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec4Constant");
      let methodname = new StringName("get_constant");
      this._bindings.method_get_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1222331677
      );
    }
  }
  
  set_constant(_constant) {
    return _call_native_mb_no_ret(
      VisualShaderNodeVec4Constant._bindings.method_set_constant,
      this._owner,
      _constant
    );
    
  }
  get_constant() {
    return _call_native_mb_ret(
      VisualShaderNodeVec4Constant._bindings.method_get_constant,
      this._owner,
			Variant.Type.QUATERNION,
    
      
    );
    
  }
  
get constant () {
  return this.get_constant();
}
set constant (new_value) {
  this.set_constant(new_value);
}


  static {
    this._init_bindings();
  }
}