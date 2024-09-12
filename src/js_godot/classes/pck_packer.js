import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_pck_start;
  method_add_file;
  method_flush;
}
export class PCKPacker extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PCKPacker");
    } else {
      super(godot_object);
    }
  }
  static init_method_pck_start() {
    if (!this.#_bindings.method_pck_start) {
      let classname = new StringName("PCKPacker");
      let methodname = new StringName("pck_start");
      this.#_bindings.method_pck_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        508410629
      );
    }
  }
  static init_method_add_file() {
    if (!this.#_bindings.method_add_file) {
      let classname = new StringName("PCKPacker");
      let methodname = new StringName("add_file");
      this.#_bindings.method_add_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2215643711
      );
    }
  }
  static init_method_flush() {
    if (!this.#_bindings.method_flush) {
      let classname = new StringName("PCKPacker");
      let methodname = new StringName("flush");
      this.#_bindings.method_flush = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1633102583
      );
    }
  }

  
  
  pck_start(_pck_name, _alignment, _key, _encrypt_directory) {
    PCKPacker.init_method_pck_start();
    return _call_native_mb_ret(
      PCKPacker.#_bindings.method_pck_start,
      this._owner,
			Variant.Type.INT,
    
      _pck_name, _alignment, _key, _encrypt_directory
    );
    
  }
  add_file(_pck_path, _source_path, _encrypt) {
    PCKPacker.init_method_add_file();
    return _call_native_mb_ret(
      PCKPacker.#_bindings.method_add_file,
      this._owner,
			Variant.Type.INT,
    
      _pck_path, _source_path, _encrypt
    );
    
  }
  flush(_verbose) {
    PCKPacker.init_method_flush();
    return _call_native_mb_ret(
      PCKPacker.#_bindings.method_flush,
      this._owner,
			Variant.Type.INT,
    
      _verbose
    );
    
  }
  

}