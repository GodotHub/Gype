import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_function;
  method_get_function;
}
export class VisualShaderNodeTransformFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTransformFunc");
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
      let classname = new StringName("VisualShaderNodeTransformFunc");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2900990409
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTransformFunc");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2839926569
      );
    }
  }
  
  set_function(_func) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTransformFunc._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    return _call_native_mb_ret(
      VisualShaderNodeTransformFunc._bindings.method_get_function,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get function () {
  return this.get_function();
}
set function (new_value) {
  this.set_function(new_value);
}

  static Function = {
    FUNC_INVERSE: 0,
    FUNC_TRANSPOSE: 1,
    FUNC_MAX: 2,
  }

  static {
    this._init_bindings();
  }
}