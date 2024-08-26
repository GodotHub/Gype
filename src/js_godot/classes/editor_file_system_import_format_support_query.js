import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method__is_active;
    method__get_file_extensions;
    method__query;
}


export class EditorFileSystemImportFormatSupportQuery extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorFileSystemImportFormatSupportQuery");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorFileSystemImportFormatSupportQuery");
      let methodname = new StringName("_is_active");
      this._bindings.method__is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorFileSystemImportFormatSupportQuery");
      let methodname = new StringName("_get_file_extensions");
      this._bindings.method__get_file_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorFileSystemImportFormatSupportQuery");
      let methodname = new StringName("_query");
      this._bindings.method__query = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _is_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_file_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_file_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _query() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__query,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}