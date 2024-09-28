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
  method_set_mode;
  method_get_mode;
}
@GodotClass
export class VisualShaderNodeParticleAccelerator extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleAccelerator");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mode() {
    if (!this._bindings.method_set_mode) {
      let classname = new StringName("VisualShaderNodeParticleAccelerator");
      let methodname = new StringName("set_mode");
      this._bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457585749
      );
    }
  }
  static init_method_get_mode() {
    if (!this._bindings.method_get_mode) {
      let classname = new StringName("VisualShaderNodeParticleAccelerator");
      let methodname = new StringName("get_mode");
      this._bindings.method_get_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2660365633
      );
    }
  }

  
  
  set_mode(_mode) {
    VisualShaderNodeParticleAccelerator.init_method_set_mode();
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleAccelerator._bindings.method_set_mode,
      this._owner,
      _mode
    );
    
  }
  get_mode() {
    VisualShaderNodeParticleAccelerator.init_method_get_mode();
    return _call_native_mb_ret(
      VisualShaderNodeParticleAccelerator._bindings.method_get_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get mode () {
  return this.get_mode();
}
set mode (new_value) {
  this.set_mode(new_value);
}

  static Mode = {
    MODE_LINEAR: 0,
    MODE_RADIAL: 1,
    MODE_TANGENTIAL: 2,
    MODE_MAX: 3,
  }
}