import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeVectorBase } from '@js_godot/classes/visual_shader_node_vector_base'
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
export class VisualShaderNodeVectorOp extends VisualShaderNodeVectorBase{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVectorOp");
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
      let classname = new StringName("VisualShaderNodeVectorOp");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3371507302
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVectorOp");
      let methodname = new StringName("get_operator");
      this._bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        11793929
      );
    }
  }
  
  set_operator(_op) {
    return _call_native_mb_no_ret(
      VisualShaderNodeVectorOp._bindings.method_set_operator,
      this._owner,
      _op
    );
    
  }
  get_operator() {
    return _call_native_mb_ret(
      VisualShaderNodeVectorOp._bindings.method_get_operator,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get operator () {
  return this.get_operator();
}
set operator (new_value) {
  this.set_operator(new_value);
}

  static Operator = {
    OP_ADD: 0,
    OP_SUB: 1,
    OP_MUL: 2,
    OP_DIV: 3,
    OP_MOD: 4,
    OP_POW: 5,
    OP_MAX: 6,
    OP_MIN: 7,
    OP_CROSS: 8,
    OP_ATAN2: 9,
    OP_REFLECT: 10,
    OP_STEP: 11,
    OP_ENUM_SIZE: 12,
  }

  static {
    this._init_bindings();
  }
}