import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_op_type;
    method_get_op_type;
}


export class VisualShaderNodeStep extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeStep");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeStep");
      let methodname = new StringName("set_op_type");
      this._bindings.method_set_op_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        715172489
      );
    }
    {
      let classname = new StringName("VisualShaderNodeStep");
      let methodname = new StringName("get_op_type");
      this._bindings.method_get_op_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3274022781
      );
    }
  }
  set_op_type(_op_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_op_type,
      this._owner,
      _op_type
    );
  }
  get_op_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_op_type,
      this._owner,
			Variant.INT,
      
    );
  }
  static OpType = {
    OP_TYPE_SCALAR: 0,
    OP_TYPE_VECTOR_2D: 1,
    OP_TYPE_VECTOR_2D_SCALAR: 2,
    OP_TYPE_VECTOR_3D: 3,
    OP_TYPE_VECTOR_3D_SCALAR: 4,
    OP_TYPE_VECTOR_4D: 5,
    OP_TYPE_VECTOR_4D_SCALAR: 6,
    OP_TYPE_MAX: 7,
  }
}