import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_function;
    method_get_function;
}


export class VisualShaderNodeIntFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeIntFunc");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeIntFunc");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        424195284
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntFunc");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2753496911
      );
    }
  }
  set_function(_func) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_function,
      this._owner,
      _func
    );
  }
  get_function() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_function,
      this._owner,
			Variant.INT,
      
    );
  }
  static Function = {
    FUNC_ABS: 0,
    FUNC_NEGATE: 1,
    FUNC_SIGN: 2,
    FUNC_BITWISE_NOT: 3,
    FUNC_MAX: 4,
  }
}