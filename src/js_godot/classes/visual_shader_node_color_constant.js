import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { VisualShaderNodeConstant } from 'src/js_godot/classes/visual_shader_node_constant'
import { Color } from 'src/js_godot/variant/color'
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


export class VisualShaderNodeColorConstant extends VisualShaderNodeConstant{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeColorConstant");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeColorConstant");
        let methodname = new StringName("set_constant");
        this._bindings.method_set_constant = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("VisualShaderNodeColorConstant");
        let methodname = new StringName("get_constant");
        this._bindings.method_get_constant = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
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
			Variant.Type.COLOR
    ,
      
    );
    
  }
}