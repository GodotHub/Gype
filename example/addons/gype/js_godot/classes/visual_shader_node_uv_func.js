import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_function;
  method_get_function;
}
@GodotClass
export class VisualShaderNodeUVFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeUVFunc");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_function() {
    if (!this._bindings.method_set_function) {
      let classname = new StringName("VisualShaderNodeUVFunc");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        765791915
      );
    }
  }
  static init_method_get_function() {
    if (!this._bindings.method_get_function) {
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
    VisualShaderNodeUVFunc.init_method_set_function();
    return _call_native_mb_no_ret(
      VisualShaderNodeUVFunc._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    VisualShaderNodeUVFunc.init_method_get_function();
    return _call_native_mb_ret(
      VisualShaderNodeUVFunc._bindings.method_get_function,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get function () {
  return this.get_function();
}
set function (new_value) {
  this.set_function(new_value);
}

  static Function = {
    FUNC_PANNING: 0,
    FUNC_SCALING: 1,
    FUNC_MAX: 2,
  }
}