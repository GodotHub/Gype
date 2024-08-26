import * as internal from '__internal__';
import { Texture } from 'src/js_godot/classestexture'
class _MethodBindings {
    method__get_format;
    method__get_width;
    method__get_height;
    method__get_depth;
    method__has_mipmaps;
    method__get_data;
    method_get_format;
    method_get_width;
    method_get_height;
    method_get_depth;
    method_has_mipmaps;
    method_get_data;
    method_create_placeholder;
}


export class Texture3D extends Texture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("_get_format");
      this._bindings.method__get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("_get_width");
      this._bindings.method__get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("_get_height");
      this._bindings.method__get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("_get_depth");
      this._bindings.method__get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("_has_mipmaps");
      this._bindings.method__has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("_get_data");
      this._bindings.method__get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3847873762
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("has_mipmaps");
      this._bindings.method_has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Texture3D");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_format,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_width,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_height,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_depth,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _has_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_data,
      this._owner,
			Variant.INT,
      
    );
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
  }
  get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  has_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data,
      this._owner,
			Variant.INT,
      
    );
  }
  create_placeholder() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_placeholder,
      this._owner,
			Variant.INT,
      
    );
  }
}