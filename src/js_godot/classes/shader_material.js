import * as internal from '__internal__';
import { Material } from 'src/js_godot/classes/material'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_shader;
    method_get_shader;
    method_set_shader_parameter;
    method_get_shader_parameter;
}


export class ShaderMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ShaderMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ShaderMaterial");
        let methodname = new StringName("set_shader");
        this._bindings.method_set_shader = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341921675
        );
      }
      {
        let classname = new StringName("ShaderMaterial");
        let methodname = new StringName("get_shader");
        this._bindings.method_get_shader = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2078273437
        );
      }
      {
        let classname = new StringName("ShaderMaterial");
        let methodname = new StringName("set_shader_parameter");
        this._bindings.method_set_shader_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3776071444
        );
      }
      {
        let classname = new StringName("ShaderMaterial");
        let methodname = new StringName("get_shader_parameter");
        this._bindings.method_get_shader_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2760726917
        );
      }
  }
  set_shader(_shader) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shader,
      this._owner,
      _shader
    );
    
  }
  get_shader() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shader,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_shader_parameter(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shader_parameter,
      this._owner,
      _param, _value
    );
    
  }
  get_shader_parameter(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shader_parameter,
      this._owner,
			Variant.Type.VARIANT
    ,
      _param
    );
    
  }
}