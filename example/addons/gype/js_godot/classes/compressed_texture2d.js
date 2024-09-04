import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Variant } from '@js_godot/variant/variant'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CompressedTexture2D");
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
      let classname = new StringName("CompressedTexture2D");
      let methodname = new StringName("load");
      this._bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166001499
      );
    }
    {
      let classname = new StringName("CompressedTexture2D");
      let methodname = new StringName("get_load_path");
      this._bindings.method_get_load_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  load(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  get_load_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_load_path,
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


  static {
    this._init_bindings();
  }
}