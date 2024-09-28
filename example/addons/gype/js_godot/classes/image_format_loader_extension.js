import * as internal from '__internal__';
import { ImageFormatLoader } from '@js_godot/classes/image_format_loader'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_add_format_loader;
  method_remove_format_loader;
}
@GodotClass
export class ImageFormatLoaderExtension extends ImageFormatLoader{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageFormatLoaderExtension");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_format_loader() {
    if (!this._bindings.method_add_format_loader) {
      let classname = new StringName("ImageFormatLoaderExtension");
      let methodname = new StringName("add_format_loader");
      this._bindings.method_add_format_loader = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_remove_format_loader() {
    if (!this._bindings.method_remove_format_loader) {
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
    ImageFormatLoaderExtension.init_method_add_format_loader();
    return _call_native_mb_no_ret(
      ImageFormatLoaderExtension._bindings.method_add_format_loader,
      this._owner,
      
    );
    
  }
  remove_format_loader() {
    ImageFormatLoaderExtension.init_method_remove_format_loader();
    return _call_native_mb_no_ret(
      ImageFormatLoaderExtension._bindings.method_remove_format_loader,
      this._owner,
      
    );
    
  }
  

}