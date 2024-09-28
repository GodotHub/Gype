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
export class VisualShaderNodeIs extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeIs");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_function() {
    if (!this._bindings.method_set_function) {
      let classname = new StringName("VisualShaderNodeIs");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1438374690
      );
    }
  }
  static init_method_get_function() {
    if (!this._bindings.method_get_function) {
      let classname = new StringName("VisualShaderNodeIs");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        580678557
      );
    }
  }

  
  
  set_function(_func) {
    VisualShaderNodeIs.init_method_set_function();
    return _call_native_mb_no_ret(
      VisualShaderNodeIs._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    VisualShaderNodeIs.init_method_get_function();
    return _call_native_mb_ret(
      VisualShaderNodeIs._bindings.method_get_function,
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
    FUNC_IS_INF: 0,
    FUNC_IS_NAN: 1,
    FUNC_MAX: 2,
  }
}