import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_recognized_extensions;
    method__recognize_path;
    method__handles_type;
    method__get_resource_type;
    method__get_resource_script_class;
    method__get_resource_uid;
    method__get_dependencies;
    method__rename_dependencies;
    method__exists;
    method__get_classes_used;
    method__load;
}


export class ResourceFormatLoader extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceFormatLoader");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_get_recognized_extensions");
      this._bindings.method__get_recognized_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_recognize_path");
      this._bindings.method__recognize_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_handles_type");
      this._bindings.method__handles_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_get_resource_type");
      this._bindings.method__get_resource_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_get_resource_script_class");
      this._bindings.method__get_resource_script_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_get_resource_uid");
      this._bindings.method__get_resource_uid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_get_dependencies");
      this._bindings.method__get_dependencies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_rename_dependencies");
      this._bindings.method__rename_dependencies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_exists");
      this._bindings.method__exists = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_get_classes_used");
      this._bindings.method__get_classes_used = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatLoader");
      let methodname = new StringName("_load");
      this._bindings.method__load = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
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
  _recognize_path(_path, _type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__recognize_path,
      this._owner,
			Variant.Type.BOOL,
      _path, _type
    );
  }
  _handles_type(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handles_type,
      this._owner,
			Variant.Type.BOOL,
      _type
    );
  }
  _get_resource_type(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_resource_type,
      this._owner,
			Variant.Type.STRING
    ,
      _path
    );
  }
  _get_resource_script_class(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_resource_script_class,
      this._owner,
			Variant.Type.STRING
    ,
      _path
    );
  }
  _get_resource_uid(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_resource_uid,
      this._owner,
			Variant.Type.INT,
      _path
    );
  }
  _get_dependencies(_path, _add_types) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_dependencies,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _path, _add_types
    );
  }
  _rename_dependencies(_path, _renames) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__rename_dependencies,
      this._owner,
			Variant.INT,
      _path, _renames
    );
  }
  _exists(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__exists,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
  }
  _get_classes_used(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_classes_used,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _path
    );
  }
  _load(_path, _original_path, _use_sub_threads, _cache_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__load,
      this._owner,
			Variant.Type.VARIANT
    ,
      _path, _original_path, _use_sub_threads, _cache_mode
    );
  }
  static CacheMode = {
    CACHE_MODE_IGNORE: 0,
    CACHE_MODE_REUSE: 1,
    CACHE_MODE_REPLACE: 2,
    CACHE_MODE_IGNORE_DEEP: 3,
    CACHE_MODE_REPLACE_DEEP: 4,
  }
}