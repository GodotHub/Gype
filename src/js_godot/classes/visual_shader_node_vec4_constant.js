import * as internal from '__internal__';
import { VisualShaderNodeConstant } from 'src/js_godot/classes/visual_shader_node_constant'
import { Quaternion } from 'src/js_godot/variant/quaternion'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_constant;
    method_get_constant;
}


export class VisualShaderNodeVec4Constant extends VisualShaderNodeConstant{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVec4Constant");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeVec4Constant");
        let methodname = new StringName("set_constant");
        this._bindings.method_set_constant = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1727505552
        );
      }
      {
        let classname = new StringName("VisualShaderNodeVec4Constant");
        let methodname = new StringName("get_constant");
        this._bindings.method_get_constant = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1222331677
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
			Variant.Type.QUATERNION
    ,
      
    );
    
  }
}