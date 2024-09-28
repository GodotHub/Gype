import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNodeConstant } from '@js_godot/classes/visual_shader_node_constant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_constant;
  method_get_constant;
}
@GodotClass
export class VisualShaderNodeVec3Constant extends VisualShaderNodeConstant{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVec3Constant");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_constant() {
    if (!this._bindings.method_set_constant) {
      let classname = new StringName("VisualShaderNodeVec3Constant");
      let methodname = new StringName("set_constant");
      this._bindings.method_set_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_constant() {
    if (!this._bindings.method_get_constant) {
      let classname = new StringName("VisualShaderNodeVec3Constant");
      let methodname = new StringName("get_constant");
      this._bindings.method_get_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }

  
  
  set_constant(_constant) {
    VisualShaderNodeVec3Constant.init_method_set_constant();
    return _call_native_mb_no_ret(
      VisualShaderNodeVec3Constant._bindings.method_set_constant,
      this._owner,
      _constant
    );
    
  }
  get_constant() {
    VisualShaderNodeVec3Constant.init_method_get_constant();
    return _call_native_mb_ret(
      VisualShaderNodeVec3Constant._bindings.method_get_constant,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  
get constant () {
  return this.get_constant();
}
set constant (new_value) {
  this.set_constant(new_value);
}

}