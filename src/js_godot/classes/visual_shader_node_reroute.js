import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_get_port_type;
}


export class VisualShaderNodeReroute extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeReroute");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeReroute");
      let methodname = new StringName("get_port_type");
      this._bindings.method_get_port_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1287173294
      );
    }
  }
  get_port_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_port_type,
      this._owner,
			Variant.INT,
      
    );
  }
}