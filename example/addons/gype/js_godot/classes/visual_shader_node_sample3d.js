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
  method_set_source;
  method_get_source;
}
@GodotClass
export class VisualShaderNodeSample3D extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeSample3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_source() {
    if (!this._bindings.method_set_source) {
      let classname = new StringName("VisualShaderNodeSample3D");
      let methodname = new StringName("set_source");
      this._bindings.method_set_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3315130991
      );
    }
  }
  static init_method_get_source() {
    if (!this._bindings.method_get_source) {
      let classname = new StringName("VisualShaderNodeSample3D");
      let methodname = new StringName("get_source");
      this._bindings.method_get_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1079494121
      );
    }
  }

  
  
  set_source(_value) {
    VisualShaderNodeSample3D.init_method_set_source();
    return _call_native_mb_no_ret(
      VisualShaderNodeSample3D._bindings.method_set_source,
      this._owner,
      _value
    );
    
  }
  get_source() {
    VisualShaderNodeSample3D.init_method_get_source();
    return _call_native_mb_ret(
      VisualShaderNodeSample3D._bindings.method_get_source,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get source () {
  return this.get_source();
}
set source (new_value) {
  this.set_source(new_value);
}

  static Source = {
    SOURCE_TEXTURE: 0,
    SOURCE_PORT: 1,
    SOURCE_MAX: 2,
  }
}