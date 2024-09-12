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
  method_set_pan;
  method_get_pan;
}
export class AudioEffectPanner extends AudioEffect{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectPanner");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pan() {
    if (!this.#_bindings.method_set_pan) {
      let classname = new StringName("AudioEffectPanner");
      let methodname = new StringName("set_pan");
      this.#_bindings.method_set_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pan() {
    if (!this.#_bindings.method_get_pan) {
      let classname = new StringName("AudioEffectPanner");
      let methodname = new StringName("get_pan");
      this.#_bindings.method_get_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_pan(_cpanume) {
    AudioEffectPanner.init_method_set_pan();
    return _call_native_mb_no_ret(
      AudioEffectPanner.#_bindings.method_set_pan,
      this._owner,
      _cpanume
    );
    
  }
  get_pan() {
    AudioEffectPanner.init_method_get_pan();
    return _call_native_mb_ret(
      AudioEffectPanner.#_bindings.method_get_pan,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get pan () {
  return this.get_pan();
}
set pan (new_value) {
  this.set_pan(new_value);
}

}