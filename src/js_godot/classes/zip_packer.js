import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_open;
    method_start_file;
    method_write_file;
    method_close_file;
    method_close;
}


export class ZIPPacker extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ZIPPacker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ZIPPacker");
        let methodname = new StringName("open");
        this._bindings.method_open = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1936816515
        );
      }
      {
        let classname = new StringName("ZIPPacker");
        let methodname = new StringName("start_file");
        this._bindings.method_start_file = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("ZIPPacker");
        let methodname = new StringName("write_file");
        this._bindings.method_write_file = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          680677267
        );
      }
      {
        let classname = new StringName("ZIPPacker");
        let methodname = new StringName("close_file");
        this._bindings.method_close_file = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_open,
      this._owner,
			Variant.INT,
      _path, _append
    );
    
  }
  start_file(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_start_file,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  write_file(_data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_write_file,
      this._owner,
			Variant.INT,
      _data
    );
    
  }
  close_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_close_file,
      this._owner,
			Variant.INT,
      
    );
    
  }
  close() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_close,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static ZipAppend = {
    APPEND_CREATE: 0,
    APPEND_CREATEAFTER: 1,
    APPEND_ADDINZIP: 2,
  }
}