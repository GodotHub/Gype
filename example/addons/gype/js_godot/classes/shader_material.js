import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Material } from '@js_godot/classes/material'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_shader;
  method_get_shader;
  method_set_shader_parameter;
  method_get_shader_parameter;
}
export class ShaderMaterial extends Material{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ShaderMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
      ShaderMaterial._bindings.method_set_shader,
      this._owner,
      _shader
    );
    
  }
  get_shader() {
    return _call_native_mb_ret(
      ShaderMaterial._bindings.method_get_shader,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_shader_parameter(_param, _value) {
    return _call_native_mb_no_ret(
      ShaderMaterial._bindings.method_set_shader_parameter,
      this._owner,
      _param, _value
    );
    
  }
  get_shader_parameter(_param) {
    return _call_native_mb_ret(
      ShaderMaterial._bindings.method_get_shader_parameter,
      this._owner,
			Variant.Type.VARIANT,
    
      _param
    );
    
  }
  
get shader () {
  return this.get_shader();
}
set shader (new_value) {
  this.set_shader(new_value);
}


  static {
    this._init_bindings();
  }
}