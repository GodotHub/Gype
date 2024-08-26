import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { Resource } from 'src/js_godot/classesresource'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__import_preflight;
    method__get_supported_extensions;
    method__parse_node_extensions;
    method__parse_image_data;
    method__get_image_file_extension;
    method__parse_texture_json;
    method__generate_scene_node;
    method__import_post_parse;
    method__import_node;
    method__import_post;
    method__export_preflight;
    method__convert_scene_node;
    method__export_preserialize;
    method__get_saveable_image_formats;
    method__serialize_image_to_bytes;
    method__save_image_at_path;
    method__serialize_texture_json;
    method__export_node;
    method__export_post;
}


export class GLTFDocumentExtension extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFDocumentExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_import_preflight");
      this._bindings.method__import_preflight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_get_supported_extensions");
      this._bindings.method__get_supported_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_parse_node_extensions");
      this._bindings.method__parse_node_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_parse_image_data");
      this._bindings.method__parse_image_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_get_image_file_extension");
      this._bindings.method__get_image_file_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_parse_texture_json");
      this._bindings.method__parse_texture_json = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_generate_scene_node");
      this._bindings.method__generate_scene_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_import_post_parse");
      this._bindings.method__import_post_parse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_import_node");
      this._bindings.method__import_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_import_post");
      this._bindings.method__import_post = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_export_preflight");
      this._bindings.method__export_preflight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_convert_scene_node");
      this._bindings.method__convert_scene_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_export_preserialize");
      this._bindings.method__export_preserialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_get_saveable_image_formats");
      this._bindings.method__get_saveable_image_formats = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_serialize_image_to_bytes");
      this._bindings.method__serialize_image_to_bytes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_save_image_at_path");
      this._bindings.method__save_image_at_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_serialize_texture_json");
      this._bindings.method__serialize_texture_json = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_export_node");
      this._bindings.method__export_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("GLTFDocumentExtension");
      let methodname = new StringName("_export_post");
      this._bindings.method__export_post = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _import_preflight(_state, _extensions) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__import_preflight,
      this._owner,
			Variant.INT,
      _state, _extensions
    );
  }
  _get_supported_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_supported_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _parse_node_extensions(_state, _gltf_node, _extensions) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__parse_node_extensions,
      this._owner,
			Variant.INT,
      _state, _gltf_node, _extensions
    );
  }
  _parse_image_data(_state, _image_data, _mime_type, _ret_image) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__parse_image_data,
      this._owner,
			Variant.INT,
      _state, _image_data, _mime_type, _ret_image
    );
  }
  _get_image_file_extension() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_image_file_extension,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _parse_texture_json(_state, _texture_json, _ret_gltf_texture) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__parse_texture_json,
      this._owner,
			Variant.INT,
      _state, _texture_json, _ret_gltf_texture
    );
  }
  _generate_scene_node(_state, _gltf_node, _scene_parent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__generate_scene_node,
      this._owner,
			Variant.INT,
      _state, _gltf_node, _scene_parent
    );
  }
  _import_post_parse(_state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__import_post_parse,
      this._owner,
			Variant.INT,
      _state
    );
  }
  _import_node(_state, _gltf_node, _json, _node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__import_node,
      this._owner,
			Variant.INT,
      _state, _gltf_node, _json, _node
    );
  }
  _import_post(_state, _root) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__import_post,
      this._owner,
			Variant.INT,
      _state, _root
    );
  }
  _export_preflight(_state, _root) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__export_preflight,
      this._owner,
			Variant.INT,
      _state, _root
    );
  }
  _convert_scene_node(_state, _gltf_node, _scene_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__convert_scene_node,
      this._owner,
      _state, _gltf_node, _scene_node
    );
  }
  _export_preserialize(_state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__export_preserialize,
      this._owner,
			Variant.INT,
      _state
    );
  }
  _get_saveable_image_formats() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_saveable_image_formats,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _serialize_image_to_bytes(_state, _image, _image_dict, _image_format, _lossy_quality) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__serialize_image_to_bytes,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _state, _image, _image_dict, _image_format, _lossy_quality
    );
  }
  _save_image_at_path(_state, _image, _file_path, _image_format, _lossy_quality) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__save_image_at_path,
      this._owner,
			Variant.INT,
      _state, _image, _file_path, _image_format, _lossy_quality
    );
  }
  _serialize_texture_json(_state, _texture_json, _gltf_texture, _image_format) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__serialize_texture_json,
      this._owner,
			Variant.INT,
      _state, _texture_json, _gltf_texture, _image_format
    );
  }
  _export_node(_state, _gltf_node, _json, _node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__export_node,
      this._owner,
			Variant.INT,
      _state, _gltf_node, _json, _node
    );
  }
  _export_post(_state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__export_post,
      this._owner,
			Variant.INT,
      _state
    );
  }
}