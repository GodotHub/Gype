import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_from_image;
  method_get_format;
  method_set_image;
  method_update;
  method_set_size_override;
}
export class ImageTexture extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_from_image() {
    if (!this.#_bindings.method_create_from_image) {
      let classname = new StringName("ImageTexture");
      let methodname = new StringName("create_from_image");
      this.#_bindings.method_create_from_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2775144163
      );
    }
  }
  static init_method_get_format() {
    if (!this.#_bindings.method_get_format) {
      let classname = new StringName("ImageTexture");
      let methodname = new StringName("get_format");
      this.#_bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3847873762
      );
    }
  }
  static init_method_set_image() {
    if (!this.#_bindings.method_set_image) {
      let classname = new StringName("ImageTexture");
      let methodname = new StringName("set_image");
      this.#_bindings.method_set_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        532598488
      );
    }
  }
  static init_method_update() {
    if (!this.#_bindings.method_update) {
      let classname = new StringName("ImageTexture");
      let methodname = new StringName("update");
      this.#_bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        532598488
      );
    }
  }
  static init_method_set_size_override() {
    if (!this.#_bindings.method_set_size_override) {
      let classname = new StringName("ImageTexture");
      let methodname = new StringName("set_size_override");
      this.#_bindings.method_set_size_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }

  
  
  create_from_image(_image) {
    ImageTexture.init_method_create_from_image();
    return _call_native_mb_ret(
      ImageTexture.#_bindings.method_create_from_image,
      this._owner,
			Variant.Type.OBJECT,
      _image
    );
    
  }
  get_format() {
    ImageTexture.init_method_get_format();
    return _call_native_mb_ret(
      ImageTexture.#_bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_image(_image) {
    ImageTexture.init_method_set_image();
    return _call_native_mb_no_ret(
      ImageTexture.#_bindings.method_set_image,
      this._owner,
      _image
    );
    
  }
  update(_image) {
    ImageTexture.init_method_update();
    return _call_native_mb_no_ret(
      ImageTexture.#_bindings.method_update,
      this._owner,
      _image
    );
    
  }
  set_size_override(_size) {
    ImageTexture.init_method_set_size_override();
    return _call_native_mb_no_ret(
      ImageTexture.#_bindings.method_set_size_override,
      this._owner,
      _size
    );
    
  }
  

}