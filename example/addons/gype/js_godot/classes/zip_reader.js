import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_open;
  method_close;
  method_get_files;
  method_read_file;
  method_file_exists;
}
@GodotClass
export class ZIPReader extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ZIPReader");
    } else {
      super(godot_object);
    }
  }
  static init_method_open() {
    if (!this._bindings.method_open) {
      let classname = new StringName("ZIPReader");
      let methodname = new StringName("open");
      this._bindings.method_open = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_close() {
    if (!this._bindings.method_close) {
      let classname = new StringName("ZIPReader");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_get_files() {
    if (!this._bindings.method_get_files) {
      let classname = new StringName("ZIPReader");
      let methodname = new StringName("get_files");
      this._bindings.method_get_files = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_read_file() {
    if (!this._bindings.method_read_file) {
      let classname = new StringName("ZIPReader");
      let methodname = new StringName("read_file");
      this._bindings.method_read_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        740857591
      );
    }
  }
  static init_method_file_exists() {
    if (!this._bindings.method_file_exists) {
      let classname = new StringName("ZIPReader");
      let methodname = new StringName("file_exists");
      this._bindings.method_file_exists = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        35364943
      );
    }
  }

  
  
  open(_path) {
    ZIPReader.init_method_open();
    return _call_native_mb_ret(
      ZIPReader._bindings.method_open,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  close() {
    ZIPReader.init_method_close();
    return _call_native_mb_ret(
      ZIPReader._bindings.method_close,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_files() {
    ZIPReader.init_method_get_files();
    return _call_native_mb_ret(
      ZIPReader._bindings.method_get_files,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  read_file(_path, _case_sensitive) {
    ZIPReader.init_method_read_file();
    return _call_native_mb_ret(
      ZIPReader._bindings.method_read_file,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _path, _case_sensitive
    );
    
  }
  file_exists(_path, _case_sensitive) {
    ZIPReader.init_method_file_exists();
    return _call_native_mb_ret(
      ZIPReader._bindings.method_file_exists,
      this._owner,
			Variant.Type.BOOL,
    
      _path, _case_sensitive
    );
    
  }
  

}