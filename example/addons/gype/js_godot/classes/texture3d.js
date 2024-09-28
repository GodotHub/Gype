import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Texture } from '@js_godot/classes/texture'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_format;
  method_get_width;
  method_get_height;
  method_get_depth;
  method_has_mipmaps;
  method_get_data;
  method_create_placeholder;
}
@GodotClass
export class Texture3D extends Texture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_format() {
    if (!this._bindings.method_get_format) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3847873762
      );
    }
  }
  static init_method_get_width() {
    if (!this._bindings.method_get_width) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_height() {
    if (!this._bindings.method_get_height) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_depth() {
    if (!this._bindings.method_get_depth) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_mipmaps() {
    if (!this._bindings.method_has_mipmaps) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("has_mipmaps");
      this._bindings.method_has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_data() {
    if (!this._bindings.method_get_data) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_create_placeholder() {
    if (!this._bindings.method_create_placeholder) {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("create_placeholder");
      this._bindings.method_create_placeholder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        121922552
      );
    }
  }

  
  
  _get_format() {
  }
  _get_width() {
  }
  _get_height() {
  }
  _get_depth() {
  }
  _has_mipmaps() {
  }
  _get_data() {
  }
  get_format() {
    Texture3D.init_method_get_format();
    return _call_native_mb_ret(
      Texture3D._bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_width() {
    Texture3D.init_method_get_width();
    return _call_native_mb_ret(
      Texture3D._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_height() {
    Texture3D.init_method_get_height();
    return _call_native_mb_ret(
      Texture3D._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_depth() {
    Texture3D.init_method_get_depth();
    return _call_native_mb_ret(
      Texture3D._bindings.method_get_depth,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_mipmaps() {
    Texture3D.init_method_has_mipmaps();
    return _call_native_mb_ret(
      Texture3D._bindings.method_has_mipmaps,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_data() {
    Texture3D.init_method_get_data();
    return _call_native_mb_ret(
      Texture3D._bindings.method_get_data,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  create_placeholder() {
    Texture3D.init_method_create_placeholder();
    return _call_native_mb_ret(
      Texture3D._bindings.method_create_placeholder,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  

}