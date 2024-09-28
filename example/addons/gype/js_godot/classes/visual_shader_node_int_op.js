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
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_operator;
  method_get_operator;
}
@GodotClass
export class VisualShaderNodeIntOp extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeIntOp");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_operator() {
    if (!this._bindings.method_set_operator) {
      let classname = new StringName("VisualShaderNodeIntOp");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1677909323
      );
    }
  }
  static init_method_get_operator() {
    if (!this._bindings.method_get_operator) {
      let classname = new StringName("VisualShaderNodeIntOp");
      let methodname = new StringName("get_operator");
      this._bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1236987913
      );
    }
  }

  
  
  set_operator(_op) {
    VisualShaderNodeIntOp.init_method_set_operator();
    return _call_native_mb_no_ret(
      VisualShaderNodeIntOp._bindings.method_set_operator,
      this._owner,
      _op
    );
    
  }
  get_operator() {
    VisualShaderNodeIntOp.init_method_get_operator();
    return _call_native_mb_ret(
      VisualShaderNodeIntOp._bindings.method_get_operator,
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
    OP_ADD: 0,
    OP_SUB: 1,
    OP_MUL: 2,
    OP_DIV: 3,
    OP_MOD: 4,
    OP_MAX: 5,
    OP_MIN: 6,
    OP_BITWISE_AND: 7,
    OP_BITWISE_OR: 8,
    OP_BITWISE_XOR: 9,
    OP_BITWISE_LEFT_SHIFT: 10,
    OP_BITWISE_RIGHT_SHIFT: 11,
    OP_ENUM_SIZE: 12,
  }
}