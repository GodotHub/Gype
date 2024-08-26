import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__save;
    method__set_uid;
    method__recognize;
    method__get_recognized_extensions;
    method__recognize_path;
}


export class ResourceFormatSaver extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceFormatSaver");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ResourceFormatSaver");
      let methodname = new StringName("_save");
      this._bindings.method__save = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatSaver");
      let methodname = new StringName("_set_uid");
      this._bindings.method__set_uid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatSaver");
      let methodname = new StringName("_recognize");
      this._bindings.method__recognize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatSaver");
      let methodname = new StringName("_get_recognized_extensions");
      this._bindings.method__get_recognized_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ResourceFormatSaver");
      let methodname = new StringName("_recognize_path");
      this._bindings.method__recognize_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _save(_resource, _path, _flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__save,
      this._owner,
			Variant.INT,
      _resource, _path, _flags
    );
  }
  _set_uid(_path, _uid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_uid,
      this._owner,
			Variant.INT,
      _path, _uid
    );
  }
  _recognize(_resource) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__recognize,
      this._owner,
			Variant.Type.BOOL,
      _resource
    );
  }
  _get_recognized_extensions(_resource) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_recognized_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _resource
    );
  }
  _recognize_path(_resource, _path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__recognize_path,
      this._owner,
			Variant.Type.BOOL,
      _resource, _path
    );
  }
}