import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_set_format;
    method_get_format;
    method_set_width;
    method_get_width;
    method_set_height;
    method_get_height;
    method_set_depth;
    method_get_depth;
    method_set_array_layers;
    method_get_array_layers;
    method_set_mipmaps;
    method_get_mipmaps;
    method_set_texture_type;
    method_get_texture_type;
    method_set_samples;
    method_get_samples;
    method_set_usage_bits;
    method_get_usage_bits;
    method_add_shareable_format;
    method_remove_shareable_format;
}


export class RDTextureFormat extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDTextureFormat");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_format");
      this._bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        565531219
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2235804183
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_array_layers");
      this._bindings.method_set_array_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_array_layers");
      this._bindings.method_get_array_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_mipmaps");
      this._bindings.method_set_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_mipmaps");
      this._bindings.method_get_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_texture_type");
      this._bindings.method_set_texture_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        652343381
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_texture_type");
      this._bindings.method_get_texture_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4036357416
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_samples");
      this._bindings.method_set_samples = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3774171498
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_samples");
      this._bindings.method_get_samples = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        407791724
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_usage_bits");
      this._bindings.method_set_usage_bits = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        245642367
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_usage_bits");
      this._bindings.method_get_usage_bits = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1313398998
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("add_shareable_format");
      this._bindings.method_add_shareable_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        565531219
      );
    }
    {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("remove_shareable_format");
      this._bindings.method_remove_shareable_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        565531219
      );
    }
  }
  set_format(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_format,
      this._owner,
      _p_member
    );
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
  }
  set_width(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _p_member
    );
  }
  get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_height(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_height,
      this._owner,
      _p_member
    );
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_depth(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _p_member
    );
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_array_layers(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_array_layers,
      this._owner,
      _p_member
    );
  }
  get_array_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_array_layers,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_mipmaps(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mipmaps,
      this._owner,
      _p_member
    );
  }
  get_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mipmaps,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_texture_type(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_type,
      this._owner,
      _p_member
    );
  }
  get_texture_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_samples(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_samples,
      this._owner,
      _p_member
    );
  }
  get_samples() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_samples,
      this._owner,
			Variant.INT,
      
    );
  }
  set_usage_bits(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_usage_bits,
      this._owner,
      _p_member
    );
  }
  get_usage_bits() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_usage_bits,
      this._owner,
			Variant.INT,
      
    );
  }
  add_shareable_format(_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_shareable_format,
      this._owner,
      _format
    );
  }
  remove_shareable_format(_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_shareable_format,
      this._owner,
      _format
    );
  }
}