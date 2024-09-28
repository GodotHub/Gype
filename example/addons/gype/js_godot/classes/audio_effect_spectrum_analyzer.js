import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { AudioEffect } from '@js_godot/classes/audio_effect'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_buffer_length;
  method_get_buffer_length;
  method_set_tap_back_pos;
  method_get_tap_back_pos;
  method_set_fft_size;
  method_get_fft_size;
}
@GodotClass
export class AudioEffectSpectrumAnalyzer extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectSpectrumAnalyzer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_buffer_length() {
    if (!this._bindings.method_set_buffer_length) {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("set_buffer_length");
      this._bindings.method_set_buffer_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_buffer_length() {
    if (!this._bindings.method_get_buffer_length) {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("get_buffer_length");
      this._bindings.method_get_buffer_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tap_back_pos() {
    if (!this._bindings.method_set_tap_back_pos) {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("set_tap_back_pos");
      this._bindings.method_set_tap_back_pos = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap_back_pos() {
    if (!this._bindings.method_get_tap_back_pos) {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("get_tap_back_pos");
      this._bindings.method_get_tap_back_pos = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fft_size() {
    if (!this._bindings.method_set_fft_size) {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("set_fft_size");
      this._bindings.method_set_fft_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1202879215
      );
    }
  }
  static init_method_get_fft_size() {
    if (!this._bindings.method_get_fft_size) {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("get_fft_size");
      this._bindings.method_get_fft_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3925405343
      );
    }
  }

  
  
  set_buffer_length(_seconds) {
    AudioEffectSpectrumAnalyzer.init_method_set_buffer_length();
    return _call_native_mb_no_ret(
      AudioEffectSpectrumAnalyzer._bindings.method_set_buffer_length,
      this._owner,
      _seconds
    );
    
  }
  get_buffer_length() {
    AudioEffectSpectrumAnalyzer.init_method_get_buffer_length();
    return _call_native_mb_ret(
      AudioEffectSpectrumAnalyzer._bindings.method_get_buffer_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap_back_pos(_seconds) {
    AudioEffectSpectrumAnalyzer.init_method_set_tap_back_pos();
    return _call_native_mb_no_ret(
      AudioEffectSpectrumAnalyzer._bindings.method_set_tap_back_pos,
      this._owner,
      _seconds
    );
    
  }
  get_tap_back_pos() {
    AudioEffectSpectrumAnalyzer.init_method_get_tap_back_pos();
    return _call_native_mb_ret(
      AudioEffectSpectrumAnalyzer._bindings.method_get_tap_back_pos,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fft_size(_size) {
    AudioEffectSpectrumAnalyzer.init_method_set_fft_size();
    return _call_native_mb_no_ret(
      AudioEffectSpectrumAnalyzer._bindings.method_set_fft_size,
      this._owner,
      _size
    );
    
  }
  get_fft_size() {
    AudioEffectSpectrumAnalyzer.init_method_get_fft_size();
    return _call_native_mb_ret(
      AudioEffectSpectrumAnalyzer._bindings.method_get_fft_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get buffer_length () {
  return this.get_buffer_length();
}
set buffer_length (new_value) {
  this.set_buffer_length(new_value);
}
get tap_back_pos () {
  return this.get_tap_back_pos();
}
set tap_back_pos (new_value) {
  this.set_tap_back_pos(new_value);
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