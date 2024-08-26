import * as internal from '__internal__';
import { VisualShaderNodeParameter } from 'src/js_godot/classesvisual_shader_node_parameter'
import { Vector3 } from 'src/js_godot/variant/vector3'
class _MethodBindings {
    method_set_default_value_enabled;
    method_is_default_value_enabled;
    method_set_default_value;
    method_get_default_value;
}


export class VisualShaderNodeVec3Parameter extends VisualShaderNodeParameter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVec3Parameter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeVec3Parameter");
      let methodname = new StringName("set_default_value_enabled");
      this._bindings.method_set_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec3Parameter");
      let methodname = new StringName("is_default_value_enabled");
      this._bindings.method_is_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec3Parameter");
      let methodname = new StringName("set_default_value");
      this._bindings.method_set_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("VisualShaderNodeVec3Parameter");
      let methodname = new StringName("get_default_value");
      this._bindings.method_get_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
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
			Variant.Type.VECTOR3
    ,
      
    );
  }
}