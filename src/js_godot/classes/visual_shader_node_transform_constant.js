import * as internal from '__internal__';
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { VisualShaderNodeConstant } from 'src/js_godot/classes/visual_shader_node_constant'
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


export class VisualShaderNodeTransformConstant extends VisualShaderNodeConstant{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTransformConstant");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeTransformConstant");
        let methodname = new StringName("set_constant");
        this._bindings.method_set_constant = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2952846383
        );
      }
      {
        let classname = new StringName("VisualShaderNodeTransformConstant");
        let methodname = new StringName("get_constant");
        this._bindings.method_get_constant = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3229777777
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
			Variant.Type.TRANSFORM3D
    ,
      
    );
    
  }
}