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
export class VisualShaderNodeColorOp extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeColorOp");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_operator() {
    if (!this._bindings.method_set_operator) {
      let classname = new StringName("VisualShaderNodeColorOp");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4260370673
      );
    }
  }
  static init_method_get_operator() {
    if (!this._bindings.method_get_operator) {
      let classname = new StringName("VisualShaderNodeColorOp");
      let methodname = new StringName("get_operator");
      this._bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1950956529
      );
    }
  }

  
  
  set_operator(_op) {
    VisualShaderNodeColorOp.init_method_set_operator();
    return _call_native_mb_no_ret(
      VisualShaderNodeColorOp._bindings.method_set_operator,
      this._owner,
      _op
    );
    
  }
  get_operator() {
    VisualShaderNodeColorOp.init_method_get_operator();
    return _call_native_mb_ret(
      VisualShaderNodeColorOp._bindings.method_get_operator,
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
    OP_SCREEN: 0,
    OP_DIFFERENCE: 1,
    OP_DARKEN: 2,
    OP_LIGHTEN: 3,
    OP_OVERLAY: 4,
    OP_DODGE: 5,
    OP_BURN: 6,
    OP_SOFT_LIGHT: 7,
    OP_HARD_LIGHT: 8,
    OP_MAX: 9,
  }
}