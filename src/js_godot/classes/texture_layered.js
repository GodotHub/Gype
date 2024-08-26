import * as internal from '__internal__';
import { Texture } from 'src/js_godot/classestexture'
class _MethodBindings {
    method__get_format;
    method__get_layered_type;
    method__get_width;
    method__get_height;
    method__get_layers;
    method__has_mipmaps;
    method__get_layer_data;
    method_get_format;
    method_get_layered_type;
    method_get_width;
    method_get_height;
    method_get_layers;
    method_has_mipmaps;
    method_get_layer_data;
}


export class TextureLayered extends Texture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureLayered");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_get_format");
      this._bindings.method__get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_get_layered_type");
      this._bindings.method__get_layered_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_get_width");
      this._bindings.method__get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_get_height");
      this._bindings.method__get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_get_layers");
      this._bindings.method__get_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_has_mipmaps");
      this._bindings.method__has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("_get_layer_data");
      this._bindings.method__get_layer_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3847873762
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_layered_type");
      this._bindings.method_get_layered_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        518123893
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_layers");
      this._bindings.method_get_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("has_mipmaps");
      this._bindings.method_has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextureLayered");
      let methodname = new StringName("get_layer_data");
      this._bindings.method_get_layer_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3655284255
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
  _get_layered_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_layered_type,
      this._owner,
			Variant.Type.INT,
      
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
  _get_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_layers,
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
  _get_layer_data(_layer_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_layer_data,
      this._owner,
			Variant.INT,
      _layer_index
    );
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
  }
  get_layered_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layered_type,
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
  get_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layers,
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
  get_layer_data(_layer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layer_data,
      this._owner,
			Variant.INT,
      _layer
    );
  }
  static LayeredType = {
    LAYERED_TYPE_2D_ARRAY: 0,
    LAYERED_TYPE_CUBEMAP: 1,
    LAYERED_TYPE_CUBEMAP_ARRAY: 2,
  }
}