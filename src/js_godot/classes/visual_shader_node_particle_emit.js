import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_flags;
    method_get_flags;
}


export class VisualShaderNodeParticleEmit extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleEmit");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_flags,
      this._owner,
      _flags
    );
  }
  get_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flags,
      this._owner,
			Variant.INT,
      
    );
  }
  static EmitFlags = {
    EMIT_FLAG_POSITION: 1,
    EMIT_FLAG_ROT_SCALE: 2,
    EMIT_FLAG_VELOCITY: 4,
    EMIT_FLAG_COLOR: 8,
    EMIT_FLAG_CUSTOM: 16,
  }
}