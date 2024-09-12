import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { AudioEffect } from '@js_godot/classes/audio_effect'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_volume_db;
  method_get_volume_db;
}
export class AudioEffectAmplify extends AudioEffect{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectAmplify");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_volume_db() {
    if (!this.#_bindings.method_set_volume_db) {
      let classname = new StringName("AudioEffectAmplify");
      let methodname = new StringName("set_volume_db");
      this.#_bindings.method_set_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volume_db() {
    if (!this.#_bindings.method_get_volume_db) {
      let classname = new StringName("AudioEffectAmplify");
      let methodname = new StringName("get_volume_db");
      this.#_bindings.method_get_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_volume_db(_volume) {
    AudioEffectAmplify.init_method_set_volume_db();
    return _call_native_mb_no_ret(
      AudioEffectAmplify.#_bindings.method_set_volume_db,
      this._owner,
      _volume
    );
    
  }
  get_volume_db() {
    AudioEffectAmplify.init_method_get_volume_db();
    return _call_native_mb_ret(
      AudioEffectAmplify.#_bindings.method_get_volume_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get volume_db () {
  return this.get_volume_db();
}
set volume_db (new_value) {
  this.set_volume_db(new_value);
}

}