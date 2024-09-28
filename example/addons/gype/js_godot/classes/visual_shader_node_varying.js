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
  method_set_varying_name;
  method_get_varying_name;
  method_set_varying_type;
  method_get_varying_type;
}
@GodotClass
export class VisualShaderNodeVarying extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVarying");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_varying_name() {
    if (!this._bindings.method_set_varying_name) {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("set_varying_name");
      this._bindings.method_set_varying_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_varying_name() {
    if (!this._bindings.method_get_varying_name) {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("get_varying_name");
      this._bindings.method_get_varying_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_varying_type() {
    if (!this._bindings.method_set_varying_type) {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("set_varying_type");
      this._bindings.method_set_varying_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3565867981
      );
    }
  }
  static init_method_get_varying_type() {
    if (!this._bindings.method_get_varying_type) {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("get_varying_type");
      this._bindings.method_get_varying_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        523183580
      );
    }
  }

  
  
  set_varying_name(_name) {
    VisualShaderNodeVarying.init_method_set_varying_name();
    return _call_native_mb_no_ret(
      VisualShaderNodeVarying._bindings.method_set_varying_name,
      this._owner,
      _name
    );
    
  }
  get_varying_name() {
    VisualShaderNodeVarying.init_method_get_varying_name();
    return _call_native_mb_ret(
      VisualShaderNodeVarying._bindings.method_get_varying_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_varying_type(_type) {
    VisualShaderNodeVarying.init_method_set_varying_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeVarying._bindings.method_set_varying_type,
      this._owner,
      _type
    );
    
  }
  get_varying_type() {
    VisualShaderNodeVarying.init_method_get_varying_type();
    return _call_native_mb_ret(
      VisualShaderNodeVarying._bindings.method_get_varying_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get varying_name () {
  return this.get_varying_name();
}
set varying_name (new_value) {
  this.set_varying_name(new_value);
}
get varying_type () {
  return this.get_varying_type();
}
set varying_type (new_value) {
  this.set_varying_type(new_value);
}

}