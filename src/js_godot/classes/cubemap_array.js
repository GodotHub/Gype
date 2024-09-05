import * as internal from '__internal__';
import { ImageTextureLayered } from '@js_godot/classes/image_texture_layered'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_placeholder;
}
export class CubemapArray extends ImageTextureLayered{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CubemapArray");
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
      let classname = new StringName("CubemapArray");
      let methodname = new StringName("create_placeholder");
      this._bindings.method_create_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        121922552
      );
    }
  }
  
  create_placeholder() {
    return _call_native_mb_ret(
      CubemapArray._bindings.method_create_placeholder,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}