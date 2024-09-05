import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { TextureLayered } from '@js_godot/classes/texture_layered'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_from_images;
  method_update_layer;
}
export class ImageTextureLayered extends TextureLayered{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageTextureLayered");
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
      let classname = new StringName("ImageTextureLayered");
      let methodname = new StringName("create_from_images");
      this._bindings.method_create_from_images = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2785773503
      );
    }
    {
      let classname = new StringName("ImageTextureLayered");
      let methodname = new StringName("update_layer");
      this._bindings.method_update_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3331733361
      );
    }
  }
  
  create_from_images(_images) {
    return _call_native_mb_ret(
      ImageTextureLayered._bindings.method_create_from_images,
      this._owner,
			Variant.INT,
      _images
    );
    
  }
  update_layer(_image, _layer) {
    return _call_native_mb_no_ret(
      ImageTextureLayered._bindings.method_update_layer,
      this._owner,
      _image, _layer
    );
    
  }
  


  static {
    this._init_bindings();
  }
}