import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
    method_set_source;
    method_get_source;
    method_set_texture;
    method_get_texture;
    method_set_texture_type;
    method_get_texture_type;
}


export class VisualShaderNodeTexture extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeTexture");
      let methodname = new StringName("set_source");
      this._bindings.method_set_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        905262939
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTexture");
      let methodname = new StringName("get_source");
      this._bindings.method_get_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2896297444
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTexture");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTexture");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTexture");
      let methodname = new StringName("set_texture_type");
      this._bindings.method_set_texture_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        986314081
      );
    }
    {
      let classname = new StringName("VisualShaderNodeTexture");
      let methodname = new StringName("get_texture_type");
      this._bindings.method_get_texture_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3290430153
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
  set_texture(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _value
    );
  }
  get_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
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
    SOURCE_SCREEN: 1,
    SOURCE_2D_TEXTURE: 2,
    SOURCE_2D_NORMAL: 3,
    SOURCE_DEPTH: 4,
    SOURCE_PORT: 5,
    SOURCE_3D_NORMAL: 6,
    SOURCE_ROUGHNESS: 7,
    SOURCE_MAX: 8,
  }
  static TextureType = {
    TYPE_DATA: 0,
    TYPE_COLOR: 1,
    TYPE_NORMAL_MAP: 2,
    TYPE_MAX: 3,
  }
}