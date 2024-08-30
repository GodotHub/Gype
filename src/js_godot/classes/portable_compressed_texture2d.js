import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Texture2D } from 'src/js_godot/classes/texture2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_create_from_image;
    method_get_format;
    method_get_compression_mode;
    method_set_size_override;
    method_get_size_override;
    method_set_keep_compressed_buffer;
    method_is_keeping_compressed_buffer;
    method_set_keep_all_compressed_buffers;
    method_is_keeping_all_compressed_buffers;
}


export class PortableCompressedTexture2D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PortableCompressedTexture2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("create_from_image");
        this._bindings.method_create_from_image = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3679243433
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("get_format");
        this._bindings.method_get_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3847873762
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("get_compression_mode");
        this._bindings.method_get_compression_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3265612739
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("set_size_override");
        this._bindings.method_set_size_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("get_size_override");
        this._bindings.method_get_size_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("set_keep_compressed_buffer");
        this._bindings.method_set_keep_compressed_buffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("is_keeping_compressed_buffer");
        this._bindings.method_is_keeping_compressed_buffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("set_keep_all_compressed_buffers");
        this._bindings.method_set_keep_all_compressed_buffers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PortableCompressedTexture2D");
        let methodname = new StringName("is_keeping_all_compressed_buffers");
        this._bindings.method_is_keeping_all_compressed_buffers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
  }
  create_from_image(_image, _compression_mode, _normal_map, _lossy_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_from_image,
      this._owner,
      _image, _compression_mode, _normal_map, _lossy_quality
    );
    
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_compression_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_compression_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_size_override(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size_override,
      this._owner,
      _size
    );
    
  }
  get_size_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size_override,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_keep_compressed_buffer(_keep) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_compressed_buffer,
      this._owner,
      _keep
    );
    
  }
  is_keeping_compressed_buffer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_keeping_compressed_buffer,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_keep_all_compressed_buffers(_keep) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_all_compressed_buffers,
      this._owner,
      _keep
    );
    
  }
  is_keeping_all_compressed_buffers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_keeping_all_compressed_buffers,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static CompressionMode = {
    COMPRESSION_MODE_LOSSLESS: 0,
    COMPRESSION_MODE_LOSSY: 1,
    COMPRESSION_MODE_BASIS_UNIVERSAL: 2,
    COMPRESSION_MODE_S3TC: 3,
    COMPRESSION_MODE_ETC2: 4,
    COMPRESSION_MODE_BPTC: 5,
  }
}