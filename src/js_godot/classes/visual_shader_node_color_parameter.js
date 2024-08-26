import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { VisualShaderNodeParameter } from 'src/js_godot/classesvisual_shader_node_parameter'
class _MethodBindings {
    method_set_default_value_enabled;
    method_is_default_value_enabled;
    method_set_default_value;
    method_get_default_value;
}


export class VisualShaderNodeColorParameter extends VisualShaderNodeParameter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeColorParameter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeColorParameter");
      let methodname = new StringName("set_default_value_enabled");
      this._bindings.method_set_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeColorParameter");
      let methodname = new StringName("is_default_value_enabled");
      this._bindings.method_is_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VisualShaderNodeColorParameter");
      let methodname = new StringName("set_default_value");
      this._bindings.method_set_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("VisualShaderNodeColorParameter");
      let methodname = new StringName("get_default_value");
      this._bindings.method_get_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
  }
  set_default_value_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_value_enabled,
      this._owner,
      _enabled
    );
  }
  is_default_value_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_default_value_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_default_value(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_value,
      this._owner,
      _value
    );
  }
  get_default_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_value,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
}