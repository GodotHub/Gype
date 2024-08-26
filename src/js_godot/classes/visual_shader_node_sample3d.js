import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_source;
    method_get_source;
}


export class VisualShaderNodeSample3D extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeSample3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeSample3D");
      let methodname = new StringName("set_source");
      this._bindings.method_set_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3315130991
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_source,
      this._owner,
      _value
    );
  }
  get_source() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source,
      this._owner,
			Variant.INT,
      
    );
  }
  static Source = {
    SOURCE_TEXTURE: 0,
    SOURCE_PORT: 1,
    SOURCE_MAX: 2,
  }
}