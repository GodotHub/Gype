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
    method_set_degrees_mode;
    method_is_degrees_mode;
}


export class VisualShaderNodeParticleMultiplyByAxisAngle extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleMultiplyByAxisAngle");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeParticleMultiplyByAxisAngle");
        let methodname = new StringName("set_degrees_mode");
        this._bindings.method_set_degrees_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_degrees_mode,
      this._owner,
      _enabled
    );
    
  }
  is_degrees_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_degrees_mode,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}