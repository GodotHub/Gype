import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_parameter_name;
    method_get_parameter_name;
}


export class VisualShaderNodeParameterRef extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParameterRef");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeParameterRef");
      let methodname = new StringName("set_parameter_name");
      this._bindings.method_set_parameter_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeParameterRef");
      let methodname = new StringName("get_parameter_name");
      this._bindings.method_get_parameter_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  set_parameter_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parameter_name,
      this._owner,
      _name
    );
  }
  get_parameter_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parameter_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}