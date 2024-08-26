import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { VisualShaderNodeConstant } from 'src/js_godot/classesvisual_shader_node_constant'
class _MethodBindings {
    method_set_constant;
    method_get_constant;
}


export class VisualShaderNodeVec2Constant extends VisualShaderNodeConstant{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVec2Constant");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeVec2Constant");
      let methodname = new StringName("set_constant");
      this._bindings.method_set_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec2Constant");
      let methodname = new StringName("get_constant");
      this._bindings.method_get_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  set_constant(_constant) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant,
      this._owner,
      _constant
    );
  }
  get_constant() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
}