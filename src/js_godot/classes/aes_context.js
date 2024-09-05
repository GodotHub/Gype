import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_start;
  method_update;
  method_get_iv_state;
  method_finish;
}
export class AESContext extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AESContext");
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
      let classname = new StringName("AESContext");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3122411423
      );
    }
    {
      let classname = new StringName("AESContext");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        527836100
      );
    }
    {
      let classname = new StringName("AESContext");
      let methodname = new StringName("get_iv_state");
      this._bindings.method_get_iv_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2115431945
      );
    }
    {
      let classname = new StringName("AESContext");
      let methodname = new StringName("finish");
      this._bindings.method_finish = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  start(_mode, _key, _iv) {
    return _call_native_mb_ret(
      AESContext._bindings.method_start,
      this._owner,
			Variant.INT,
      _mode, _key, _iv
    );
    
  }
  update(_src) {
    return _call_native_mb_ret(
      AESContext._bindings.method_update,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _src
    );
    
  }
  get_iv_state() {
    return _call_native_mb_ret(
      AESContext._bindings.method_get_iv_state,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  finish() {
    return _call_native_mb_no_ret(
      AESContext._bindings.method_finish,
      this._owner,
      
    );
    
  }
  

  static Mode = {
    MODE_ECB_ENCRYPT: 0,
    MODE_ECB_DECRYPT: 1,
    MODE_CBC_ENCRYPT: 2,
    MODE_CBC_DECRYPT: 3,
    MODE_MAX: 4,
  }

  static {
    this._init_bindings();
  }
}