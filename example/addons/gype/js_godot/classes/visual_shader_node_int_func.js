import * as internal from '__internal__';
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
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
export class VisualShaderNodeIntFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeIntFunc");
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
      let classname = new StringName("VisualShaderNodeIntFunc");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        424195284
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntFunc");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2753496911
      );
    }
  }
  
  set_function(_func) {
    return _call_native_mb_no_ret(
      VisualShaderNodeIntFunc._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    return _call_native_mb_ret(
      VisualShaderNodeIntFunc._bindings.method_get_function,
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
    FUNC_ABS: 0,
    FUNC_NEGATE: 1,
    FUNC_SIGN: 2,
    FUNC_BITWISE_NOT: 3,
    FUNC_MAX: 4,
  }

  static {
    this._init_bindings();
  }
}