import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_operator;
    method_get_operator;
}


export class VisualShaderNodeColorOp extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeColorOp");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeColorOp");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4260370673
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_operator,
      this._owner,
      _op
    );
  }
  get_operator() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_operator,
      this._owner,
			Variant.INT,
      
    );
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