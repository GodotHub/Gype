import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeParameter } from '@js_godot/classes/visual_shader_node_parameter'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture_type;
  method_get_texture_type;
  method_set_color_default;
  method_get_color_default;
  method_set_texture_filter;
  method_get_texture_filter;
  method_set_texture_repeat;
  method_get_texture_repeat;
  method_set_texture_source;
  method_get_texture_source;
}
export class VisualShaderNodeTextureParameter extends VisualShaderNodeParameter{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTextureParameter");
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
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("set_texture_type");
      this._bindings.method_set_texture_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2227296876
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("get_texture_type");
      this._bindings.method_get_texture_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        367922070
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("set_color_default");
      this._bindings.method_set_color_default = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4217624432
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("get_color_default");
      this._bindings.method_get_color_default = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3837060134
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("set_texture_filter");
      this._bindings.method_set_texture_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2147684752
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("get_texture_filter");
      this._bindings.method_get_texture_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4184490817
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("set_texture_repeat");
      this._bindings.method_set_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2036143070
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("get_texture_repeat");
      this._bindings.method_get_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1690132794
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("set_texture_source");
      this._bindings.method_set_texture_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1212687372
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTextureParameter");
      let methodname = new StringName("get_texture_source");
      this._bindings.method_get_texture_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2039092262
      );
    }
  }
  
  set_texture_type(_type) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTextureParameter._bindings.method_set_texture_type,
      this._owner,
      _type
    );
    
  }
  get_texture_type() {
    return _call_native_mb_ret(
      VisualShaderNodeTextureParameter._bindings.method_get_texture_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_color_default(_color) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTextureParameter._bindings.method_set_color_default,
      this._owner,
      _color
    );
    
  }
  get_color_default() {
    return _call_native_mb_ret(
      VisualShaderNodeTextureParameter._bindings.method_get_color_default,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_filter(_filter) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTextureParameter._bindings.method_set_texture_filter,
      this._owner,
      _filter
    );
    
  }
  get_texture_filter() {
    return _call_native_mb_ret(
      VisualShaderNodeTextureParameter._bindings.method_get_texture_filter,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_repeat(_repeat) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTextureParameter._bindings.method_set_texture_repeat,
      this._owner,
      _repeat
    );
    
  }
  get_texture_repeat() {
    return _call_native_mb_ret(
      VisualShaderNodeTextureParameter._bindings.method_get_texture_repeat,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_source(_source) {
    return _call_native_mb_no_ret(
      VisualShaderNodeTextureParameter._bindings.method_set_texture_source,
      this._owner,
      _source
    );
    
  }
  get_texture_source() {
    return _call_native_mb_ret(
      VisualShaderNodeTextureParameter._bindings.method_get_texture_source,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get texture_type () {
  return this.get_texture_type();
}
set texture_type (new_value) {
  this.set_texture_type(new_value);
}
get color_default () {
  return this.get_color_default();
}
set color_default (new_value) {
  this.set_color_default(new_value);
}
get texture_filter () {
  return this.get_texture_filter();
}
set texture_filter (new_value) {
  this.set_texture_filter(new_value);
}
get texture_repeat () {
  return this.get_texture_repeat();
}
set texture_repeat (new_value) {
  this.set_texture_repeat(new_value);
}
get texture_source () {
  return this.get_texture_source();
}
set texture_source (new_value) {
  this.set_texture_source(new_value);
}

  static TextureType = {
    TYPE_DATA: 0,
    TYPE_COLOR: 1,
    TYPE_NORMAL_MAP: 2,
    TYPE_ANISOTROPY: 3,
    TYPE_MAX: 4,
  }
  static ColorDefault = {
    COLOR_DEFAULT_WHITE: 0,
    COLOR_DEFAULT_BLACK: 1,
    COLOR_DEFAULT_TRANSPARENT: 2,
    COLOR_DEFAULT_MAX: 3,
  }
  static TextureFilter = {
    FILTER_DEFAULT: 0,
    FILTER_NEAREST: 1,
    FILTER_LINEAR: 2,
    FILTER_NEAREST_MIPMAP: 3,
    FILTER_LINEAR_MIPMAP: 4,
    FILTER_NEAREST_MIPMAP_ANISOTROPIC: 5,
    FILTER_LINEAR_MIPMAP_ANISOTROPIC: 6,
    FILTER_MAX: 7,
  }
  static TextureRepeat = {
    REPEAT_DEFAULT: 0,
    REPEAT_ENABLED: 1,
    REPEAT_DISABLED: 2,
    REPEAT_MAX: 3,
  }
  static TextureSource = {
    SOURCE_NONE: 0,
    SOURCE_SCREEN: 1,
    SOURCE_DEPTH: 2,
    SOURCE_NORMAL_ROUGHNESS: 3,
    SOURCE_MAX: 4,
  }

  static {
    this._init_bindings();
  }
}