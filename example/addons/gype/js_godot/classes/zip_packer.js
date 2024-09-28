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
  method_start_file;
  method_write_file;
  method_close_file;
  method_close;
}
@GodotClass
export class ZIPPacker extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ZIPPacker");
    } else {
      super(godot_object);
    }
  }
  static init_method_open() {
    if (!this._bindings.method_open) {
      let classname = new StringName("ZIPPacker");
      let methodname = new StringName("open");
      this._bindings.method_open = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1936816515
      );
    }
  }
  static init_method_start_file() {
    if (!this._bindings.method_start_file) {
      let classname = new StringName("ZIPPacker");
      let methodname = new StringName("start_file");
      this._bindings.method_start_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_write_file() {
    if (!this._bindings.method_write_file) {
      let classname = new StringName("ZIPPacker");
      let methodname = new StringName("write_file");
      this._bindings.method_write_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        680677267
      );
    }
  }
  static init_method_close_file() {
    if (!this._bindings.method_close_file) {
      let classname = new StringName("ZIPPacker");
      let methodname = new StringName("close_file");
      this._bindings.method_close_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_close() {
    if (!this._bindings.method_close) {
      let classname = new StringName("ZIPPacker");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }

  
  
  open(_path, _append) {
    ZIPPacker.init_method_open();
    return _call_native_mb_ret(
      ZIPPacker._bindings.method_open,
      this._owner,
			Variant.Type.INT,
    
      _path, _append
    );
    
  }
  start_file(_path) {
    ZIPPacker.init_method_start_file();
    return _call_native_mb_ret(
      ZIPPacker._bindings.method_start_file,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  write_file(_data) {
    ZIPPacker.init_method_write_file();
    return _call_native_mb_ret(
      ZIPPacker._bindings.method_write_file,
      this._owner,
			Variant.Type.INT,
    
      _data
    );
    
  }
  close_file() {
    ZIPPacker.init_method_close_file();
    return _call_native_mb_ret(
      ZIPPacker._bindings.method_close_file,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  close() {
    ZIPPacker.init_method_close();
    return _call_native_mb_ret(
      ZIPPacker._bindings.method_close,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

  static ZipAppend = {
    APPEND_CREATE: 0,
    APPEND_CREATEAFTER: 1,
    APPEND_ADDINZIP: 2,
  }
}