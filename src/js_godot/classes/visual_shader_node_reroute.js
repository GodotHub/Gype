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