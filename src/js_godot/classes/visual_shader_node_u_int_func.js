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
  method_set_function;
  method_get_function;
}
export class VisualShaderNodeUIntFunc extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeUIntFunc");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_function() {
    if (!this.#_bindings.method_set_function) {
      let classname = new StringName("VisualShaderNodeUIntFunc");
      let methodname = new StringName("set_function");
      this.#_bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2273148961
      );
    }
  }
  static init_method_get_function() {
    if (!this.#_bindings.method_get_function) {
      let classname = new StringName("VisualShaderNodeUIntFunc");
      let methodname = new StringName("get_function");
      this.#_bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4187123296
      );
    }
  }

  
  
  set_function(_func) {
    VisualShaderNodeUIntFunc.init_method_set_function();
    return _call_native_mb_no_ret(
      VisualShaderNodeUIntFunc.#_bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    VisualShaderNodeUIntFunc.init_method_get_function();
    return _call_native_mb_ret(
      VisualShaderNodeUIntFunc.#_bindings.method_get_function,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get function () {
  return this.get_function();
}
set function (new_value) {
  this.set_function(new_value);
}

  static Function = {
    FUNC_NEGATE: 0,
    FUNC_BITWISE_NOT: 1,
    FUNC_MAX: 2,
  }
}