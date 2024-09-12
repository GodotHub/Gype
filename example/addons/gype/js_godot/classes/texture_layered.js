import * as internal from '__internal__';
import { Texture } from '@js_godot/classes/texture'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_format;
  method_get_layered_type;
  method_get_width;
  method_get_height;
  method_get_layers;
  method_has_mipmaps;
  method_get_layer_data;
}
export class TextureLayered extends Texture{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureLayered");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_format() {
    if (!this.#_bindings.method_get_format) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_format");
      this.#_bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3847873762
      );
    }
  }
  static init_method_get_layered_type() {
    if (!this.#_bindings.method_get_layered_type) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_layered_type");
      this.#_bindings.method_get_layered_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        518123893
      );
    }
  }
  static init_method_get_width() {
    if (!this.#_bindings.method_get_width) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_width");
      this.#_bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_height() {
    if (!this.#_bindings.method_get_height) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_height");
      this.#_bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_layers() {
    if (!this.#_bindings.method_get_layers) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_layers");
      this.#_bindings.method_get_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_mipmaps() {
    if (!this.#_bindings.method_has_mipmaps) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("has_mipmaps");
      this.#_bindings.method_has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_layer_data() {
    if (!this.#_bindings.method_get_layer_data) {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_layer_data");
      this.#_bindings.method_get_layer_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3655284255
      );
    }
  }

  
  
  _get_format() {
  }
  _get_layered_type() {
  }
  _get_width() {
  }
  _get_height() {
  }
  _get_layers() {
  }
  _has_mipmaps() {
  }
  _get_layer_data(_layer_index) {
  }
  get_format() {
    TextureLayered.init_method_get_format();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_layered_type() {
    TextureLayered.init_method_get_layered_type();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_get_layered_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_width() {
    TextureLayered.init_method_get_width();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_height() {
    TextureLayered.init_method_get_height();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_layers() {
    TextureLayered.init_method_get_layers();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_get_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_mipmaps() {
    TextureLayered.init_method_has_mipmaps();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_has_mipmaps,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_layer_data(_layer) {
    TextureLayered.init_method_get_layer_data();
    return _call_native_mb_ret(
      TextureLayered.#_bindings.method_get_layer_data,
      this._owner,
			Variant.Type.OBJECT,
      _layer
    );
    
  }
  

  static LayeredType = {
    LAYERED_TYPE_2D_ARRAY: 0,
    LAYERED_TYPE_CUBEMAP: 1,
    LAYERED_TYPE_CUBEMAP_ARRAY: 2,
  }
}