import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { TextureLayered } from '@js_godot/classes/texture_layered'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_size;
  method_get_size;
  method_set_layers;
}
export class PlaceholderTextureLayered extends TextureLayered{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderTextureLayered");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this.#_bindings.method_set_size) {
      let classname = new StringName("PlaceholderTextureLayered");
      let methodname = new StringName("set_size");
      this.#_bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("PlaceholderTextureLayered");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_layers() {
    if (!this.#_bindings.method_set_layers) {
      let classname = new StringName("PlaceholderTextureLayered");
      let methodname = new StringName("set_layers");
      this.#_bindings.method_set_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  set_size(_size) {
    PlaceholderTextureLayered.init_method_set_size();
    return _call_native_mb_no_ret(
      PlaceholderTextureLayered.#_bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    PlaceholderTextureLayered.init_method_get_size();
    return _call_native_mb_ret(
      PlaceholderTextureLayered.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_layers(_layers) {
    PlaceholderTextureLayered.init_method_set_layers();
    return _call_native_mb_no_ret(
      PlaceholderTextureLayered.#_bindings.method_set_layers,
      this._owner,
      _layers
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get layers () {
  return this.get_layers();
}
set layers (new_value) {
  this.set_layers(new_value);
}

}