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
  method_set_source;
  method_get_source;
  method_set_cube_map;
  method_get_cube_map;
  method_set_texture_type;
  method_get_texture_type;
}
@GodotClass
export class VisualShaderNodeCubemap extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCubemap");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_source() {
    if (!this._bindings.method_set_source) {
      let classname = new StringName("VisualShaderNodeCubemap");
      let methodname = new StringName("set_source");
      this._bindings.method_set_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1625400621
      );
    }
  }
  static init_method_get_source() {
    if (!this._bindings.method_get_source) {
      let classname = new StringName("VisualShaderNodeCubemap");
      let methodname = new StringName("get_source");
      this._bindings.method_get_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2222048781
      );
    }
  }
  static init_method_set_cube_map() {
    if (!this._bindings.method_set_cube_map) {
      let classname = new StringName("VisualShaderNodeCubemap");
      let methodname = new StringName("set_cube_map");
      this._bindings.method_set_cube_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2219800736
      );
    }
  }
  static init_method_get_cube_map() {
    if (!this._bindings.method_get_cube_map) {
      let classname = new StringName("VisualShaderNodeCubemap");
      let methodname = new StringName("get_cube_map");
      this._bindings.method_get_cube_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1772111058
      );
    }
  }
  static init_method_set_texture_type() {
    if (!this._bindings.method_set_texture_type) {
      let classname = new StringName("VisualShaderNodeCubemap");
      let methodname = new StringName("set_texture_type");
      this._bindings.method_set_texture_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1899718876
      );
    }
  }
  static init_method_get_texture_type() {
    if (!this._bindings.method_get_texture_type) {
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
    VisualShaderNodeCubemap.init_method_set_source();
    return _call_native_mb_no_ret(
      VisualShaderNodeCubemap._bindings.method_set_source,
      this._owner,
      _value
    );
    
  }
  get_source() {
    VisualShaderNodeCubemap.init_method_get_source();
    return _call_native_mb_ret(
      VisualShaderNodeCubemap._bindings.method_get_source,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_cube_map(_value) {
    VisualShaderNodeCubemap.init_method_set_cube_map();
    return _call_native_mb_no_ret(
      VisualShaderNodeCubemap._bindings.method_set_cube_map,
      this._owner,
      _value
    );
    
  }
  get_cube_map() {
    VisualShaderNodeCubemap.init_method_get_cube_map();
    return _call_native_mb_ret(
      VisualShaderNodeCubemap._bindings.method_get_cube_map,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture_type(_value) {
    VisualShaderNodeCubemap.init_method_set_texture_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeCubemap._bindings.method_set_texture_type,
      this._owner,
      _value
    );
    
  }
  get_texture_type() {
    VisualShaderNodeCubemap.init_method_get_texture_type();
    return _call_native_mb_ret(
      VisualShaderNodeCubemap._bindings.method_get_texture_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get source () {
  return this.get_source();
}
set source (new_value) {
  this.set_source(new_value);
}
get cube_map () {
  return this.get_cube_map();
}
set cube_map (new_value) {
  this.set_cube_map(new_value);
}
get texture_type () {
  return this.get_texture_type();
}
set texture_type (new_value) {
  this.set_texture_type(new_value);
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