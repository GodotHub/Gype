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
  method_set_ceiling_db;
  method_get_ceiling_db;
  method_set_pre_gain_db;
  method_get_pre_gain_db;
  method_set_release;
  method_get_release;
}
export class AudioEffectHardLimiter extends AudioEffect{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectHardLimiter");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_ceiling_db() {
    if (!this.#_bindings.method_set_ceiling_db) {
      let classname = new StringName("AudioEffectHardLimiter");
      let methodname = new StringName("set_ceiling_db");
      this.#_bindings.method_set_ceiling_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ceiling_db() {
    if (!this.#_bindings.method_get_ceiling_db) {
      let classname = new StringName("AudioEffectHardLimiter");
      let methodname = new StringName("get_ceiling_db");
      this.#_bindings.method_get_ceiling_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pre_gain_db() {
    if (!this.#_bindings.method_set_pre_gain_db) {
      let classname = new StringName("AudioEffectHardLimiter");
      let methodname = new StringName("set_pre_gain_db");
      this.#_bindings.method_set_pre_gain_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pre_gain_db() {
    if (!this.#_bindings.method_get_pre_gain_db) {
      let classname = new StringName("AudioEffectHardLimiter");
      let methodname = new StringName("get_pre_gain_db");
      this.#_bindings.method_get_pre_gain_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_release() {
    if (!this.#_bindings.method_set_release) {
      let classname = new StringName("AudioEffectHardLimiter");
      let methodname = new StringName("set_release");
      this.#_bindings.method_set_release = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_release() {
    if (!this.#_bindings.method_get_release) {
      let classname = new StringName("AudioEffectHardLimiter");
      let methodname = new StringName("get_release");
      this.#_bindings.method_get_release = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_ceiling_db(_ceiling) {
    AudioEffectHardLimiter.init_method_set_ceiling_db();
    return _call_native_mb_no_ret(
      AudioEffectHardLimiter.#_bindings.method_set_ceiling_db,
      this._owner,
      _ceiling
    );
    
  }
  get_ceiling_db() {
    AudioEffectHardLimiter.init_method_get_ceiling_db();
    return _call_native_mb_ret(
      AudioEffectHardLimiter.#_bindings.method_get_ceiling_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pre_gain_db(_p_pre_gain) {
    AudioEffectHardLimiter.init_method_set_pre_gain_db();
    return _call_native_mb_no_ret(
      AudioEffectHardLimiter.#_bindings.method_set_pre_gain_db,
      this._owner,
      _p_pre_gain
    );
    
  }
  get_pre_gain_db() {
    AudioEffectHardLimiter.init_method_get_pre_gain_db();
    return _call_native_mb_ret(
      AudioEffectHardLimiter.#_bindings.method_get_pre_gain_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_release(_p_release) {
    AudioEffectHardLimiter.init_method_set_release();
    return _call_native_mb_no_ret(
      AudioEffectHardLimiter.#_bindings.method_set_release,
      this._owner,
      _p_release
    );
    
  }
  get_release() {
    AudioEffectHardLimiter.init_method_get_release();
    return _call_native_mb_ret(
      AudioEffectHardLimiter.#_bindings.method_get_release,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get pre_gain_db () {
  return this.get_pre_gain_db();
}
set pre_gain_db (new_value) {
  this.set_pre_gain_db(new_value);
}
get ceiling_db () {
  return this.get_ceiling_db();
}
set ceiling_db (new_value) {
  this.set_ceiling_db(new_value);
}
get release () {
  return this.get_release();
}
set release (new_value) {
  this.set_release(new_value);
}

}