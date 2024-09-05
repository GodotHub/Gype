import * as internal from '__internal__';
import { AudioEffect } from '@js_godot/classes/audio_effect'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_threshold;
  method_get_threshold;
  method_set_ratio;
  method_get_ratio;
  method_set_gain;
  method_get_gain;
  method_set_attack_us;
  method_get_attack_us;
  method_set_release_ms;
  method_get_release_ms;
  method_set_mix;
  method_get_mix;
  method_set_sidechain;
  method_get_sidechain;
}
export class AudioEffectCompressor extends AudioEffect{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectCompressor");
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
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_threshold");
      this._bindings.method_set_threshold = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_threshold");
      this._bindings.method_get_threshold = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_ratio");
      this._bindings.method_set_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_ratio");
      this._bindings.method_get_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_gain");
      this._bindings.method_set_gain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_gain");
      this._bindings.method_get_gain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_attack_us");
      this._bindings.method_set_attack_us = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_attack_us");
      this._bindings.method_get_attack_us = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_release_ms");
      this._bindings.method_set_release_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_release_ms");
      this._bindings.method_get_release_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_mix");
      this._bindings.method_set_mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_mix");
      this._bindings.method_get_mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("set_sidechain");
      this._bindings.method_set_sidechain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("AudioEffectCompressor");
      let methodname = new StringName("get_sidechain");
      this._bindings.method_get_sidechain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
  }
  
  set_threshold(_threshold) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_threshold,
      this._owner,
      _threshold
    );
    
  }
  get_threshold() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_threshold,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_ratio(_ratio) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_ratio() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_gain(_gain) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_gain,
      this._owner,
      _gain
    );
    
  }
  get_gain() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_attack_us(_attack_us) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_attack_us,
      this._owner,
      _attack_us
    );
    
  }
  get_attack_us() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_attack_us,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_release_ms(_release_ms) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_release_ms,
      this._owner,
      _release_ms
    );
    
  }
  get_release_ms() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_release_ms,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_mix(_mix) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_mix,
      this._owner,
      _mix
    );
    
  }
  get_mix() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_mix,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_sidechain(_sidechain) {
    return _call_native_mb_no_ret(
      AudioEffectCompressor._bindings.method_set_sidechain,
      this._owner,
      _sidechain
    );
    
  }
  get_sidechain() {
    return _call_native_mb_ret(
      AudioEffectCompressor._bindings.method_get_sidechain,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  
get threshold () {
  return this.get_threshold();
}
set threshold (new_value) {
  this.set_threshold(new_value);
}
get ratio () {
  return this.get_ratio();
}
set ratio (new_value) {
  this.set_ratio(new_value);
}
get gain () {
  return this.get_gain();
}
set gain (new_value) {
  this.set_gain(new_value);
}
get attack_us () {
  return this.get_attack_us();
}
set attack_us (new_value) {
  this.set_attack_us(new_value);
}
get release_ms () {
  return this.get_release_ms();
}
set release_ms (new_value) {
  this.set_release_ms(new_value);
}
get mix () {
  return this.get_mix();
}
set mix (new_value) {
  this.set_mix(new_value);
}
get sidechain () {
  return this.get_sidechain();
}
set sidechain (new_value) {
  this.set_sidechain(new_value);
}


  static {
    this._init_bindings();
  }
}