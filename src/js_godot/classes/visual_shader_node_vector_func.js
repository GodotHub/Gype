import * as internal from '__internal__';
import { VisualShaderNodeVectorBase } from 'src/js_godot/classes/visual_shader_node_vector_base'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_function;
    method_get_function;
}


export class VisualShaderNodeVectorFunc extends VisualShaderNodeVectorBase{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVectorFunc");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeVectorFunc");
        let methodname = new StringName("set_function");
        this._bindings.method_set_function = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          629964457
        );
      }
      {
        let classname = new StringName("VisualShaderNodeVectorFunc");
        let methodname = new StringName("get_function");
        this._bindings.method_get_function = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4047776843
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
  static Function = {
    FUNC_NORMALIZE: 0,
    FUNC_SATURATE: 1,
    FUNC_NEGATE: 2,
    FUNC_RECIPROCAL: 3,
    FUNC_ABS: 4,
    FUNC_ACOS: 5,
    FUNC_ACOSH: 6,
    FUNC_ASIN: 7,
    FUNC_ASINH: 8,
    FUNC_ATAN: 9,
    FUNC_ATANH: 10,
    FUNC_CEIL: 11,
    FUNC_COS: 12,
    FUNC_COSH: 13,
    FUNC_DEGREES: 14,
    FUNC_EXP: 15,
    FUNC_EXP2: 16,
    FUNC_FLOOR: 17,
    FUNC_FRACT: 18,
    FUNC_INVERSE_SQRT: 19,
    FUNC_LOG: 20,
    FUNC_LOG2: 21,
    FUNC_RADIANS: 22,
    FUNC_ROUND: 23,
    FUNC_ROUNDEVEN: 24,
    FUNC_SIGN: 25,
    FUNC_SIN: 26,
    FUNC_SINH: 27,
    FUNC_SQRT: 28,
    FUNC_TAN: 29,
    FUNC_TANH: 30,
    FUNC_TRUNC: 31,
    FUNC_ONEMINUS: 32,
    FUNC_MAX: 33,
  }
}