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
  method_set_pitch_scale;
  method_get_pitch_scale;
  method_set_oversampling;
  method_get_oversampling;
  method_set_fft_size;
  method_get_fft_size;
}
export class AudioEffectPitchShift extends AudioEffect{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectPitchShift");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pitch_scale() {
    if (!this.#_bindings.method_set_pitch_scale) {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("set_pitch_scale");
      this.#_bindings.method_set_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pitch_scale() {
    if (!this.#_bindings.method_get_pitch_scale) {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("get_pitch_scale");
      this.#_bindings.method_get_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_oversampling() {
    if (!this.#_bindings.method_set_oversampling) {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("set_oversampling");
      this.#_bindings.method_set_oversampling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_oversampling() {
    if (!this.#_bindings.method_get_oversampling) {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("get_oversampling");
      this.#_bindings.method_get_oversampling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_fft_size() {
    if (!this.#_bindings.method_set_fft_size) {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("set_fft_size");
      this.#_bindings.method_set_fft_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2323518741
      );
    }
  }
  static init_method_get_fft_size() {
    if (!this.#_bindings.method_get_fft_size) {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("get_fft_size");
      this.#_bindings.method_get_fft_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2361246789
      );
    }
  }

  
  
  set_pitch_scale(_rate) {
    AudioEffectPitchShift.init_method_set_pitch_scale();
    return _call_native_mb_no_ret(
      AudioEffectPitchShift.#_bindings.method_set_pitch_scale,
      this._owner,
      _rate
    );
    
  }
  get_pitch_scale() {
    AudioEffectPitchShift.init_method_get_pitch_scale();
    return _call_native_mb_ret(
      AudioEffectPitchShift.#_bindings.method_get_pitch_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_oversampling(_amount) {
    AudioEffectPitchShift.init_method_set_oversampling();
    return _call_native_mb_no_ret(
      AudioEffectPitchShift.#_bindings.method_set_oversampling,
      this._owner,
      _amount
    );
    
  }
  get_oversampling() {
    AudioEffectPitchShift.init_method_get_oversampling();
    return _call_native_mb_ret(
      AudioEffectPitchShift.#_bindings.method_get_oversampling,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_fft_size(_size) {
    AudioEffectPitchShift.init_method_set_fft_size();
    return _call_native_mb_no_ret(
      AudioEffectPitchShift.#_bindings.method_set_fft_size,
      this._owner,
      _size
    );
    
  }
  get_fft_size() {
    AudioEffectPitchShift.init_method_get_fft_size();
    return _call_native_mb_ret(
      AudioEffectPitchShift.#_bindings.method_get_fft_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get pitch_scale () {
  return this.get_pitch_scale();
}
set pitch_scale (new_value) {
  this.set_pitch_scale(new_value);
}
get oversampling () {
  return this.get_oversampling();
}
set oversampling (new_value) {
  this.set_oversampling(new_value);
}
get fft_size () {
  return this.get_fft_size();
}
set fft_size (new_value) {
  this.set_fft_size(new_value);
}

  static FFTSize = {
    FFT_SIZE_256: 0,
    FFT_SIZE_512: 1,
    FFT_SIZE_1024: 2,
    FFT_SIZE_2048: 3,
    FFT_SIZE_4096: 4,
    FFT_SIZE_MAX: 5,
  }
}