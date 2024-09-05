import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Texture3D } from '@js_godot/classes/texture3d'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create;
  method_update;
}
export class ImageTexture3D extends Texture3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageTexture3D");
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
      let classname = new StringName("ImageTexture3D");
      let methodname = new StringName("create");
      this._bindings.method_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130379827
      );
    }
    {
      let classname = new StringName("ImageTexture3D");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
  }
  
  create(_format, _width, _height, _depth, _use_mipmaps, _data) {
    return _call_native_mb_ret(
      ImageTexture3D._bindings.method_create,
      this._owner,
			Variant.INT,
      _format, _width, _height, _depth, _use_mipmaps, _data
    );
    
  }
  update(_data) {
    return _call_native_mb_no_ret(
      ImageTexture3D._bindings.method_update,
      this._owner,
      _data
    );
    
  }
  


  static {
    this._init_bindings();
  }
}