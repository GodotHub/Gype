import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mode_2d;
  method_is_mode_2d;
}
export class VisualShaderNodeParticleEmitter extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleEmitter");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mode_2d() {
    if (!this.#_bindings.method_set_mode_2d) {
      let classname = new StringName("VisualShaderNodeParticleEmitter");
      let methodname = new StringName("set_mode_2d");
      this.#_bindings.method_set_mode_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_mode_2d() {
    if (!this.#_bindings.method_is_mode_2d) {
      let classname = new StringName("VisualShaderNodeParticleEmitter");
      let methodname = new StringName("is_mode_2d");
      this.#_bindings.method_is_mode_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_mode_2d(_enabled) {
    VisualShaderNodeParticleEmitter.init_method_set_mode_2d();
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleEmitter.#_bindings.method_set_mode_2d,
      this._owner,
      _enabled
    );
    
  }
  is_mode_2d() {
    VisualShaderNodeParticleEmitter.init_method_is_mode_2d();
    return _call_native_mb_ret(
      VisualShaderNodeParticleEmitter.#_bindings.method_is_mode_2d,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get mode_2d () {
  return this.is_mode_2d();
}
set mode_2d (new_value) {
  this.set_mode_2d(new_value);
}

}