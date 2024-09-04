import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
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
export class VisualShaderNodeFloatFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeFloatFunc");
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
      let classname = new StringName("VisualShaderNodeFloatFunc");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        536026177
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFloatFunc");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2033948868
      );
    }
  }
  set_function(_func) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_function,
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
    FUNC_SIN: 0,
    FUNC_COS: 1,
    FUNC_TAN: 2,
    FUNC_ASIN: 3,
    FUNC_ACOS: 4,
    FUNC_ATAN: 5,
    FUNC_SINH: 6,
    FUNC_COSH: 7,
    FUNC_TANH: 8,
    FUNC_LOG: 9,
    FUNC_EXP: 10,
    FUNC_SQRT: 11,
    FUNC_ABS: 12,
    FUNC_SIGN: 13,
    FUNC_FLOOR: 14,
    FUNC_ROUND: 15,
    FUNC_CEIL: 16,
    FUNC_FRACT: 17,
    FUNC_SATURATE: 18,
    FUNC_NEGATE: 19,
    FUNC_ACOSH: 20,
    FUNC_ASINH: 21,
    FUNC_ATANH: 22,
    FUNC_DEGREES: 23,
    FUNC_EXP2: 24,
    FUNC_INVERSE_SQRT: 25,
    FUNC_LOG2: 26,
    FUNC_RADIANS: 27,
    FUNC_RECIPROCAL: 28,
    FUNC_ROUNDEVEN: 29,
    FUNC_TRUNC: 30,
    FUNC_ONEMINUS: 31,
    FUNC_MAX: 32,
  }

  static {
    this._init_bindings();
  }
}