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
  method_set_degrees_mode;
  method_is_degrees_mode;
}
@GodotClass
export class VisualShaderNodeParticleMultiplyByAxisAngle extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleMultiplyByAxisAngle");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_degrees_mode() {
    if (!this._bindings.method_set_degrees_mode) {
      let classname = new StringName("VisualShaderNodeParticleMultiplyByAxisAngle");
      let methodname = new StringName("set_degrees_mode");
      this._bindings.method_set_degrees_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_degrees_mode() {
    if (!this._bindings.method_is_degrees_mode) {
      let classname = new StringName("VisualShaderNodeParticleMultiplyByAxisAngle");
      let methodname = new StringName("is_degrees_mode");
      this._bindings.method_is_degrees_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_degrees_mode(_enabled) {
    VisualShaderNodeParticleMultiplyByAxisAngle.init_method_set_degrees_mode();
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleMultiplyByAxisAngle._bindings.method_set_degrees_mode,
      this._owner,
      _enabled
    );
    
  }
  is_degrees_mode() {
    VisualShaderNodeParticleMultiplyByAxisAngle.init_method_is_degrees_mode();
    return _call_native_mb_ret(
      VisualShaderNodeParticleMultiplyByAxisAngle._bindings.method_is_degrees_mode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get degrees_mode () {
  return this.is_degrees_mode();
}
set degrees_mode (new_value) {
  this.set_degrees_mode(new_value);
}

}