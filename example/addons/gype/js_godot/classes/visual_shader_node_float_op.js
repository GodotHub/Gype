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
export class VisualShaderNodeFloatOp extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeFloatOp");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_operator() {
    if (!this._bindings.method_set_operator) {
      let classname = new StringName("VisualShaderNodeFloatOp");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2488468047
      );
    }
  }
  static init_method_get_operator() {
    if (!this._bindings.method_get_operator) {
      let classname = new StringName("VisualShaderNodeFloatOp");
      let methodname = new StringName("get_operator");
      this._bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1867979390
      );
    }
  }

  
  
  set_operator(_op) {
    VisualShaderNodeFloatOp.init_method_set_operator();
    return _call_native_mb_no_ret(
      VisualShaderNodeFloatOp._bindings.method_set_operator,
      this._owner,
      _op
    );
    
  }
  get_operator() {
    VisualShaderNodeFloatOp.init_method_get_operator();
    return _call_native_mb_ret(
      VisualShaderNodeFloatOp._bindings.method_get_operator,
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
    OP_POW: 5,
    OP_MAX: 6,
    OP_MIN: 7,
    OP_ATAN2: 8,
    OP_STEP: 9,
    OP_ENUM_SIZE: 10,
  }
}