import * as internal from '__internal__';
import { ImageTextureLayered } from 'src/js_godot/classes/image_texture_layered'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_create_placeholder;
}


export class Texture2DArray extends ImageTextureLayered{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture2DArray");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Texture2DArray");
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
      ClassDB._bindings.method_create_placeholder,
      this._owner,
			Variant.INT,
      
    );
    
  }
}