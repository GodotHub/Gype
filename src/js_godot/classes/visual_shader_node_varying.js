import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_varying_name;
    method_get_varying_name;
    method_set_varying_type;
    method_get_varying_type;
}


export class VisualShaderNodeVarying extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVarying");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("set_varying_name");
      this._bindings.method_set_varying_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("get_varying_name");
      this._bindings.method_get_varying_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVarying");
      let methodname = new StringName("set_varying_type");
      this._bindings.method_set_varying_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3565867981
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_varying_name,
      this._owner,
      _name
    );
  }
  get_varying_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_varying_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_varying_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_varying_type,
      this._owner,
      _type
    );
  }
  get_varying_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_varying_type,
      this._owner,
			Variant.INT,
      
    );
  }
}