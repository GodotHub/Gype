import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_mode;
    method_set_code;
    method_get_code;
    method_set_default_texture_parameter;
    method_get_default_texture_parameter;
    method_get_shader_uniform_list;
}


export class Shader extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Shader");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Shader");
        let methodname = new StringName("get_mode");
        this._bindings.method_get_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3392948163
        );
      }
      {
        let classname = new StringName("Shader");
        let methodname = new StringName("set_code");
        this._bindings.method_set_code = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("Shader");
        let methodname = new StringName("get_code");
        this._bindings.method_get_code = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Shader");
        let methodname = new StringName("set_default_texture_parameter");
        this._bindings.method_set_default_texture_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2750740428
        );
      }
      {
        let classname = new StringName("Shader");
        let methodname = new StringName("get_default_texture_parameter");
        this._bindings.method_get_default_texture_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3090538643
        );
      }
      {
        let classname = new StringName("Shader");
        let methodname = new StringName("get_shader_uniform_list");
        this._bindings.method_get_shader_uniform_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1230511656
        );
      }
  }
  get_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_code(_code) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_code,
      this._owner,
      _code
    );
    
  }
  get_code() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_code,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_default_texture_parameter(_name, _texture, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_texture_parameter,
      this._owner,
      _name, _texture, _index
    );
    
  }
  get_default_texture_parameter(_name, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_texture_parameter,
      this._owner,
			Variant.INT,
      _name, _index
    );
    
  }
  get_shader_uniform_list(_get_groups) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shader_uniform_list,
      this._owner,
			Variant.Type.ARRAY
    ,
      _get_groups
    );
    
  }
  static Mode = {
    MODE_SPATIAL: 0,
    MODE_CANVAS_ITEM: 1,
    MODE_PARTICLES: 2,
    MODE_SKY: 3,
    MODE_FOG: 4,
  }
}