import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classes/visual_shader_node'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_function;
    method_get_function;
}


export class VisualShaderNodeUVFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeUVFunc");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeUVFunc");
        let methodname = new StringName("set_function");
        this._bindings.method_set_function = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          765791915
        );
      }
      {
        let classname = new StringName("VisualShaderNodeUVFunc");
        let methodname = new StringName("get_function");
        this._bindings.method_get_function = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3772902164
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
    FUNC_PANNING: 0,
    FUNC_SCALING: 1,
    FUNC_MAX: 2,
  }
}