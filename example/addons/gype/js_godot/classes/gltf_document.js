import * as internal from '__internal__';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_image_format;
  method_get_image_format;
  method_set_lossy_quality;
  method_get_lossy_quality;
  method_set_root_node_mode;
  method_get_root_node_mode;
  method_append_from_file;
  method_append_from_buffer;
  method_append_from_scene;
  method_generate_scene;
  method_generate_buffer;
  method_write_to_filesystem;
  method_register_gltf_document_extension;
  method_unregister_gltf_document_extension;
}
export class GLTFDocument extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFDocument");
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
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("set_image_format");
      this._bindings.method_set_image_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("get_image_format");
      this._bindings.method_get_image_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("set_lossy_quality");
      this._bindings.method_set_lossy_quality = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("get_lossy_quality");
      this._bindings.method_get_lossy_quality = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("set_root_node_mode");
      this._bindings.method_set_root_node_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        463633402
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("get_root_node_mode");
      this._bindings.method_get_root_node_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        948057992
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("append_from_file");
      this._bindings.method_append_from_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866380864
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("append_from_buffer");
      this._bindings.method_append_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1616081266
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("append_from_scene");
      this._bindings.method_append_from_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1622574258
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("generate_scene");
      this._bindings.method_generate_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        596118388
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("generate_buffer");
      this._bindings.method_generate_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        741783455
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("write_to_filesystem");
      this._bindings.method_write_to_filesystem = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1784551478
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("register_gltf_document_extension");
      this._bindings.method_register_gltf_document_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3752678331
      );
    }
    {
      let classname = new StringName("GLTFDocument");
      let methodname = new StringName("unregister_gltf_document_extension");
      this._bindings.method_unregister_gltf_document_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2684415758
      );
    }
  }
  
  set_image_format(_image_format) {
    return _call_native_mb_no_ret(
      GLTFDocument._bindings.method_set_image_format,
      this._owner,
      _image_format
    );
    
  }
  get_image_format() {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_get_image_format,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_lossy_quality(_lossy_quality) {
    return _call_native_mb_no_ret(
      GLTFDocument._bindings.method_set_lossy_quality,
      this._owner,
      _lossy_quality
    );
    
  }
  get_lossy_quality() {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_get_lossy_quality,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_root_node_mode(_root_node_mode) {
    return _call_native_mb_no_ret(
      GLTFDocument._bindings.method_set_root_node_mode,
      this._owner,
      _root_node_mode
    );
    
  }
  get_root_node_mode() {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_get_root_node_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  append_from_file(_path, _state, _flags, _base_path) {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_append_from_file,
      this._owner,
			Variant.INT,
      _path, _state, _flags, _base_path
    );
    
  }
  append_from_buffer(_bytes, _base_path, _state, _flags) {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_append_from_buffer,
      this._owner,
			Variant.INT,
      _bytes, _base_path, _state, _flags
    );
    
  }
  append_from_scene(_node, _state, _flags) {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_append_from_scene,
      this._owner,
			Variant.INT,
      _node, _state, _flags
    );
    
  }
  generate_scene(_state, _bake_fps, _trimming, _remove_immutable_tracks) {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_generate_scene,
      this._owner,
			Variant.INT,
      _state, _bake_fps, _trimming, _remove_immutable_tracks
    );
    
  }
  generate_buffer(_state) {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_generate_buffer,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _state
    );
    
  }
  write_to_filesystem(_state, _path) {
    return _call_native_mb_ret(
      GLTFDocument._bindings.method_write_to_filesystem,
      this._owner,
			Variant.INT,
      _state, _path
    );
    
  }
  register_gltf_document_extension(_extension, _first_priority) {
    return _call_native_mb_no_ret(
      GLTFDocument._bindings.method_register_gltf_document_extension,
      this._owner,
      _extension, _first_priority
    );
    
  }
  unregister_gltf_document_extension(_extension) {
    return _call_native_mb_no_ret(
      GLTFDocument._bindings.method_unregister_gltf_document_extension,
      this._owner,
      _extension
    );
    
  }
  
get image_format () {
  return this.get_image_format();
}
set image_format (new_value) {
  this.set_image_format(new_value);
}
get lossy_quality () {
  return this.get_lossy_quality();
}
set lossy_quality (new_value) {
  this.set_lossy_quality(new_value);
}
get root_node_mode () {
  return this.get_root_node_mode();
}
set root_node_mode (new_value) {
  this.set_root_node_mode(new_value);
}

  static RootNodeMode = {
    ROOT_NODE_MODE_SINGLE_ROOT: 0,
    ROOT_NODE_MODE_KEEP_ROOT: 1,
    ROOT_NODE_MODE_MULTI_ROOT: 2,
  }

  static {
    this._init_bindings();
  }
}