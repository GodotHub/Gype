import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Texture2D } from 'src/js_godot/classes/texture2d'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_diffuse_texture;
    method_get_diffuse_texture;
    method_set_normal_texture;
    method_get_normal_texture;
    method_set_specular_texture;
    method_get_specular_texture;
    method_set_specular_color;
    method_get_specular_color;
    method_set_specular_shininess;
    method_get_specular_shininess;
    method_set_texture_filter;
    method_get_texture_filter;
    method_set_texture_repeat;
    method_get_texture_repeat;
}


export class CanvasTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_diffuse_texture");
        this._bindings.method_set_diffuse_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4051416890
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_diffuse_texture");
        this._bindings.method_get_diffuse_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3635182373
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_normal_texture");
        this._bindings.method_set_normal_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4051416890
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_normal_texture");
        this._bindings.method_get_normal_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3635182373
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_specular_texture");
        this._bindings.method_set_specular_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4051416890
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_specular_texture");
        this._bindings.method_get_specular_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3635182373
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_specular_color");
        this._bindings.method_set_specular_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_specular_color");
        this._bindings.method_get_specular_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_specular_shininess");
        this._bindings.method_set_specular_shininess = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_specular_shininess");
        this._bindings.method_get_specular_shininess = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_texture_filter");
        this._bindings.method_set_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1037999706
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_texture_filter");
        this._bindings.method_get_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          121960042
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("set_texture_repeat");
        this._bindings.method_set_texture_repeat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1716472974
        );
      }
      {
        let classname = new StringName("CanvasTexture");
        let methodname = new StringName("get_texture_repeat");
        this._bindings.method_get_texture_repeat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2667158319
        );
      }
  }
  set_diffuse_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_diffuse_texture,
      this._owner,
      _texture
    );
    
  }
  get_diffuse_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_diffuse_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_normal_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal_texture,
      this._owner,
      _texture
    );
    
  }
  get_normal_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normal_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_specular_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_specular_texture,
      this._owner,
      _texture
    );
    
  }
  get_specular_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_specular_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_specular_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_specular_color,
      this._owner,
      _color
    );
    
  }
  get_specular_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_specular_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_specular_shininess(_shininess) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_specular_shininess,
      this._owner,
      _shininess
    );
    
  }
  get_specular_shininess() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_specular_shininess,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_texture_filter(_filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_filter,
      this._owner,
      _filter
    );
    
  }
  get_texture_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_filter,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_repeat(_repeat) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_repeat,
      this._owner,
      _repeat
    );
    
  }
  get_texture_repeat() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_repeat,
      this._owner,
			Variant.INT,
      
    );
    
  }
}