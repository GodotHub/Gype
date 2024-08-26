import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_mode;
    method_get_mode;
}


export class VisualShaderNodeParticleAccelerator extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleAccelerator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeParticleAccelerator");
      let methodname = new StringName("set_mode");
      this._bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457585749
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mode,
      this._owner,
      _mode
    );
  }
  get_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  static Mode = {
    MODE_LINEAR: 0,
    MODE_RADIAL: 1,
    MODE_TANGENTIAL: 2,
    MODE_MAX: 3,
  }
}