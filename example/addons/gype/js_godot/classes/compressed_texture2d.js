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
  method_load;
  method_get_load_path;
}
export class CompressedTexture2D extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CompressedTexture2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_load() {
    if (!this.#_bindings.method_load) {
      let classname = new StringName("CompressedTexture2D");
      let methodname = new StringName("load");
      this.#_bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_get_load_path() {
    if (!this.#_bindings.method_get_load_path) {
      let classname = new StringName("CompressedTexture2D");
      let methodname = new StringName("get_load_path");
      this.#_bindings.method_get_load_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  load(_path) {
    CompressedTexture2D.init_method_load();
    return _call_native_mb_ret(
      CompressedTexture2D.#_bindings.method_load,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  get_load_path() {
    CompressedTexture2D.init_method_get_load_path();
    return _call_native_mb_ret(
      CompressedTexture2D.#_bindings.method_get_load_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get load_path () {
  return this.get_load_path();
}
set load_path (new_value) {
  this.load(new_value);
}

}