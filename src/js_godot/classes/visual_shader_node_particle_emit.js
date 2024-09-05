import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_flags;
  method_get_flags;
}
export class VisualShaderNodeParticleEmit extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleEmit");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("VisualShaderNodeParticleEmit");
      let methodname = new StringName("set_flags");
      this._bindings.method_set_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3960756792
      );
    }
    {
      let classname = new StringName("VisualShaderNodeParticleEmit");
      let methodname = new StringName("get_flags");
      this._bindings.method_get_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        171277835
      );
    }
  }
  
  set_flags(_flags) {
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleEmit._bindings.method_set_flags,
      this._owner,
      _flags
    );
    
  }
  get_flags() {
    return _call_native_mb_ret(
      VisualShaderNodeParticleEmit._bindings.method_get_flags,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get flags () {
  return this.get_flags();
}
set flags (new_value) {
  this.set_flags(new_value);
}

  static EmitFlags = {
    EMIT_FLAG_POSITION: 1,
    EMIT_FLAG_ROT_SCALE: 2,
    EMIT_FLAG_VELOCITY: 4,
    EMIT_FLAG_COLOR: 8,
    EMIT_FLAG_CUSTOM: 16,
  }

  static {
    this._init_bindings();
  }
}