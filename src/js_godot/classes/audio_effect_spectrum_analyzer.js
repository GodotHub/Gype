import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_buffer_length;
    method_get_buffer_length;
    method_set_tap_back_pos;
    method_get_tap_back_pos;
    method_set_fft_size;
    method_get_fft_size;
}


export class AudioEffectSpectrumAnalyzer extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectSpectrumAnalyzer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("set_buffer_length");
      this._bindings.method_set_buffer_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("get_buffer_length");
      this._bindings.method_get_buffer_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("set_tap_back_pos");
      this._bindings.method_set_tap_back_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("get_tap_back_pos");
      this._bindings.method_get_tap_back_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectSpectrumAnalyzer");
      let methodname = new StringName("set_fft_size");
      this._bindings.method_set_fft_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1202879215
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_buffer_length,
      this._owner,
      _seconds
    );
  }
  get_buffer_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buffer_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tap_back_pos(_seconds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap_back_pos,
      this._owner,
      _seconds
    );
  }
  get_tap_back_pos() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap_back_pos,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fft_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fft_size,
      this._owner,
      _size
    );
  }
  get_fft_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fft_size,
      this._owner,
			Variant.INT,
      
    );
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