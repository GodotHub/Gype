import * as internal from '__internal__';
import { ImageFormatLoader } from '@js_godot/classes/image_format_loader'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_format_loader;
  method_remove_format_loader;
}
export class ImageFormatLoaderExtension extends ImageFormatLoader{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageFormatLoaderExtension");
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
      let classname = new StringName("ImageFormatLoaderExtension");
      let methodname = new StringName("add_format_loader");
      this._bindings.method_add_format_loader = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ImageFormatLoaderExtension");
      let methodname = new StringName("remove_format_loader");
      this._bindings.method_remove_format_loader = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  _get_recognized_extensions() {
  }
  _load_image(_image, _fileaccess, _flags, _scale) {
  }
  add_format_loader() {
    return _call_native_mb_no_ret(
      ImageFormatLoaderExtension._bindings.method_add_format_loader,
      this._owner,
      
    );
    
  }
  remove_format_loader() {
    return _call_native_mb_no_ret(
      ImageFormatLoaderExtension._bindings.method_remove_format_loader,
      this._owner,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}