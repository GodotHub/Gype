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
    method_set_source;
    method_get_source;
    method_set_cube_map;
    method_get_cube_map;
    method_set_texture_type;
    method_get_texture_type;
}


export class VisualShaderNodeCubemap extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCubemap");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeCubemap");
        let methodname = new StringName("set_source");
        this._bindings.method_set_source = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1625400621
        );
      }
      {
        let classname = new StringName("VisualShaderNodeCubemap");
        let methodname = new StringName("get_source");
        this._bindings.method_get_source = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2222048781
        );
      }
      {
        let classname = new StringName("VisualShaderNodeCubemap");
        let methodname = new StringName("set_cube_map");
        this._bindings.method_set_cube_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2219800736
        );
      }
      {
        let classname = new StringName("VisualShaderNodeCubemap");
        let methodname = new StringName("get_cube_map");
        this._bindings.method_get_cube_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1772111058
        );
      }
      {
        let classname = new StringName("VisualShaderNodeCubemap");
        let methodname = new StringName("set_texture_type");
        this._bindings.method_set_texture_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1899718876
        );
      }
      {
        let classname = new StringName("VisualShaderNodeCubemap");
        let methodname = new StringName("get_texture_type");
        this._bindings.method_get_texture_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3356498888
        );
      }
  }
  set_source(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_source,
      this._owner,
      _value
    );
    
  }
  get_source() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_cube_map(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cube_map,
      this._owner,
      _value
    );
    
  }
  get_cube_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cube_map,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_type(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_type,
      this._owner,
      _value
    );
    
  }
  get_texture_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static Source = {
    SOURCE_TEXTURE: 0,
    SOURCE_PORT: 1,
    SOURCE_MAX: 2,
  }
  static TextureType = {
    TYPE_DATA: 0,
    TYPE_COLOR: 1,
    TYPE_NORMAL_MAP: 2,
    TYPE_MAX: 3,
  }
}