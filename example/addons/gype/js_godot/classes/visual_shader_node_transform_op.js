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
export class VisualShaderNodeTransformOp extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTransformOp");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_operator() {
    if (!this._bindings.method_set_operator) {
      let classname = new StringName("VisualShaderNodeTransformOp");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2287310733
      );
    }
  }
  static init_method_get_operator() {
    if (!this._bindings.method_get_operator) {
      let classname = new StringName("VisualShaderNodeTransformOp");
      let methodname = new StringName("get_operator");
      this._bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1238663601
      );
    }
  }

  
  
  set_operator(_op) {
    VisualShaderNodeTransformOp.init_method_set_operator();
    return _call_native_mb_no_ret(
      VisualShaderNodeTransformOp._bindings.method_set_operator,
      this._owner,
      _op
    );
    
  }
  get_operator() {
    VisualShaderNodeTransformOp.init_method_get_operator();
    return _call_native_mb_ret(
      VisualShaderNodeTransformOp._bindings.method_get_operator,
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
    OP_AxB_COMP: 2,
    OP_BxA_COMP: 3,
    OP_ADD: 4,
    OP_A_MINUS_B: 5,
    OP_B_MINUS_A: 6,
    OP_A_DIV_B: 7,
    OP_B_DIV_A: 8,
    OP_MAX: 9,
  }
}