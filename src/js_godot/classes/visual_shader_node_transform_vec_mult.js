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
  method_set_operator;
  method_get_operator;
}
export class VisualShaderNodeTransformVecMult extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTransformVecMult");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_operator() {
    if (!this.#_bindings.method_set_operator) {
      let classname = new StringName("VisualShaderNodeTransformVecMult");
      let methodname = new StringName("set_operator");
      this.#_bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1785665912
      );
    }
  }
  static init_method_get_operator() {
    if (!this.#_bindings.method_get_operator) {
      let classname = new StringName("VisualShaderNodeTransformVecMult");
      let methodname = new StringName("get_operator");
      this.#_bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1622088722
      );
    }
  }

  
  
  set_operator(_op) {
    VisualShaderNodeTransformVecMult.init_method_set_operator();
    return _call_native_mb_no_ret(
      VisualShaderNodeTransformVecMult.#_bindings.method_set_operator,
      this._owner,
      _op
    );
    
  }
  get_operator() {
    VisualShaderNodeTransformVecMult.init_method_get_operator();
    return _call_native_mb_ret(
      VisualShaderNodeTransformVecMult.#_bindings.method_get_operator,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get operator () {
  return this.get_operator();
}
set operator (new_value) {
  this.set_operator(new_value);
}

  static Operator = {
    OP_AxB: 0,
    OP_BxA: 1,
    OP_3x3_AxB: 2,
    OP_3x3_BxA: 3,
    OP_MAX: 4,
  }
}