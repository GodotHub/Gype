import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_operator;
    method_get_operator;
}


export class VisualShaderNodeTransformVecMult extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTransformVecMult");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeTransformVecMult");
      let methodname = new StringName("set_operator");
      this._bindings.method_set_operator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1785665912
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTransformVecMult");
      let methodname = new StringName("get_operator");
      this._bindings.method_get_operator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1622088722
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
    OP_AxB: 0,
    OP_BxA: 1,
    OP_3x3_AxB: 2,
    OP_3x3_BxA: 3,
    OP_MAX: 4,
  }
}