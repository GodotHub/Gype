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
  method_get_port_type;
}
@GodotClass
export class VisualShaderNodeReroute extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeReroute");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_port_type() {
    if (!this._bindings.method_get_port_type) {
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
    VisualShaderNodeReroute.init_method_get_port_type();
    return _call_native_mb_ret(
      VisualShaderNodeReroute._bindings.method_get_port_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get port_type () {
  return this.get_port_type();
}
set port_type (new_value) {
  this._set_port_type(new_value);
}

}