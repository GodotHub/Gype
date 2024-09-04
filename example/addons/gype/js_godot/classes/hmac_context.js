import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_finish;
}
export class HMACContext extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("HMACContext");
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
      let classname = new StringName("HMACContext");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3537364598
      );
    }
    {
      let classname = new StringName("HMACContext");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("HMACContext");
      let methodname = new StringName("finish");
      this._bindings.method_finish = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2115431945
      );
    }
  }
  start(_hash_type, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_start,
      this._owner,
			Variant.INT,
      _hash_type, _key
    );
    
  }
  update(_data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_update,
      this._owner,
			Variant.INT,
      _data
    );
    
  }
  finish() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_finish,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}