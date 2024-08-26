import * as internal from '__internal__';
import { ImageFormatLoader } from 'src/js_godot/classesimage_format_loader'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
class _MethodBindings {
    method__get_recognized_extensions;
    method__load_image;
    method_add_format_loader;
    method_remove_format_loader;
}


export class ImageFormatLoaderExtension extends ImageFormatLoader{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageFormatLoaderExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ImageFormatLoaderExtension");
      let methodname = new StringName("_get_recognized_extensions");
      this._bindings.method__get_recognized_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ImageFormatLoaderExtension");
      let methodname = new StringName("_load_image");
      this._bindings.method__load_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_recognized_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _load_image(_image, _fileaccess, _flags, _scale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__load_image,
      this._owner,
			Variant.INT,
      _image, _fileaccess, _flags, _scale
    );
  }
  add_format_loader() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_format_loader,
      this._owner,
      
    );
  }
  remove_format_loader() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_format_loader,
      this._owner,
      
    );
  }
}