import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_function;
    method_get_function;
}


export class VisualShaderNodeColorFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeColorFunc");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeColorFunc");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3973396138
      );
    }
    {
      let classname = new StringName("VisualShaderNodeColorFunc");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        554863321
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
    FUNC_GRAYSCALE: 0,
    FUNC_HSV2RGB: 1,
    FUNC_RGB2HSV: 2,
    FUNC_SEPIA: 3,
    FUNC_MAX: 4,
  }
}