import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PCKPacker");
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
      let classname = new StringName("PCKPacker");
      let methodname = new StringName("pck_start");
      this._bindings.method_pck_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        508410629
      );
    }
    {
      let classname = new StringName("PCKPacker");
      let methodname = new StringName("add_file");
      this._bindings.method_add_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2215643711
      );
    }
    {
      let classname = new StringName("PCKPacker");
      let methodname = new StringName("flush");
      this._bindings.method_flush = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1633102583
      );
    }
  }
  pck_start(_pck_name, _alignment, _key, _encrypt_directory) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pck_start,
      this._owner,
			Variant.INT,
      _pck_name, _alignment, _key, _encrypt_directory
    );
    
  }
  add_file(_pck_path, _source_path, _encrypt) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_file,
      this._owner,
			Variant.INT,
      _pck_path, _source_path, _encrypt
    );
    
  }
  flush(_verbose) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_flush,
      this._owner,
			Variant.INT,
      _verbose
    );
    
  }
  


  static {
    this._init_bindings();
  }
}