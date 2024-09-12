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
  method_set_op_type;
  method_get_op_type;
  method_set_function;
  method_get_function;
  method_set_precision;
  method_get_precision;
}
export class VisualShaderNodeDerivativeFunc extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeDerivativeFunc");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_op_type() {
    if (!this.#_bindings.method_set_op_type) {
      let classname = new StringName("VisualShaderNodeDerivativeFunc");
      let methodname = new StringName("set_op_type");
      this.#_bindings.method_set_op_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        377800221
      );
    }
  }
  static init_method_get_op_type() {
    if (!this.#_bindings.method_get_op_type) {
      let classname = new StringName("VisualShaderNodeDerivativeFunc");
      let methodname = new StringName("get_op_type");
      this.#_bindings.method_get_op_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3997800514
      );
    }
  }
  static init_method_set_function() {
    if (!this.#_bindings.method_set_function) {
      let classname = new StringName("VisualShaderNodeDerivativeFunc");
      let methodname = new StringName("set_function");
      this.#_bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1944704156
      );
    }
  }
  static init_method_get_function() {
    if (!this.#_bindings.method_get_function) {
      let classname = new StringName("VisualShaderNodeDerivativeFunc");
      let methodname = new StringName("get_function");
      this.#_bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2389093396
      );
    }
  }
  static init_method_set_precision() {
    if (!this.#_bindings.method_set_precision) {
      let classname = new StringName("VisualShaderNodeDerivativeFunc");
      let methodname = new StringName("set_precision");
      this.#_bindings.method_set_precision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        797270566
      );
    }
  }
  static init_method_get_precision() {
    if (!this.#_bindings.method_get_precision) {
      let classname = new StringName("VisualShaderNodeDerivativeFunc");
      let methodname = new StringName("get_precision");
      this.#_bindings.method_get_precision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3822547323
      );
    }
  }

  
  
  set_op_type(_type) {
    VisualShaderNodeDerivativeFunc.init_method_set_op_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeDerivativeFunc.#_bindings.method_set_op_type,
      this._owner,
      _type
    );
    
  }
  get_op_type() {
    VisualShaderNodeDerivativeFunc.init_method_get_op_type();
    return _call_native_mb_ret(
      VisualShaderNodeDerivativeFunc.#_bindings.method_get_op_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_function(_func) {
    VisualShaderNodeDerivativeFunc.init_method_set_function();
    return _call_native_mb_no_ret(
      VisualShaderNodeDerivativeFunc.#_bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    VisualShaderNodeDerivativeFunc.init_method_get_function();
    return _call_native_mb_ret(
      VisualShaderNodeDerivativeFunc.#_bindings.method_get_function,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_precision(_precision) {
    VisualShaderNodeDerivativeFunc.init_method_set_precision();
    return _call_native_mb_no_ret(
      VisualShaderNodeDerivativeFunc.#_bindings.method_set_precision,
      this._owner,
      _precision
    );
    
  }
  get_precision() {
    VisualShaderNodeDerivativeFunc.init_method_get_precision();
    return _call_native_mb_ret(
      VisualShaderNodeDerivativeFunc.#_bindings.method_get_precision,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get op_type () {
  return this.get_op_type();
}
set op_type (new_value) {
  this.set_op_type(new_value);
}
get function () {
  return this.get_function();
}
set function (new_value) {
  this.set_function(new_value);
}
get precision () {
  return this.get_precision();
}
set precision (new_value) {
  this.set_precision(new_value);
}

  static OpType = {
    OP_TYPE_SCALAR: 0,
    OP_TYPE_VECTOR_2D: 1,
    OP_TYPE_VECTOR_3D: 2,
    OP_TYPE_VECTOR_4D: 3,
    OP_TYPE_MAX: 4,
  }
  static Function = {
    FUNC_SUM: 0,
    FUNC_X: 1,
    FUNC_Y: 2,
    FUNC_MAX: 3,
  }
  static Precision = {
    PRECISION_NONE: 0,
    PRECISION_COARSE: 1,
    PRECISION_FINE: 2,
    PRECISION_MAX: 3,
  }
}