import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classes/texture2d'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_create_from_image;
    method_get_format;
    method_set_image;
    method_update;
    method_set_size_override;
}


export class ImageTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ImageTexture");
        let methodname = new StringName("create_from_image");
        this._bindings.method_create_from_image = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2775144163
        );
      }
      {
        let classname = new StringName("ImageTexture");
        let methodname = new StringName("get_format");
        this._bindings.method_get_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3847873762
        );
      }
      {
        let classname = new StringName("ImageTexture");
        let methodname = new StringName("set_image");
        this._bindings.method_set_image = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          532598488
        );
      }
      {
        let classname = new StringName("ImageTexture");
        let methodname = new StringName("update");
        this._bindings.method_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          532598488
        );
      }
      {
        let classname = new StringName("ImageTexture");
        let methodname = new StringName("set_size_override");
        this._bindings.method_set_size_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1130785943
        );
      }
  }
  create_from_image(_image) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_from_image,
      this._owner,
			Variant.INT,
      _image
    );
    
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_image(_image) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_image,
      this._owner,
      _image
    );
    
  }
  update(_image) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update,
      this._owner,
      _image
    );
    
  }
  set_size_override(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size_override,
      this._owner,
      _size
    );
    
  }
}