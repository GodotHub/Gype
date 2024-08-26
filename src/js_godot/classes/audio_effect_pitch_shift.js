import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_pitch_scale;
    method_get_pitch_scale;
    method_set_oversampling;
    method_get_oversampling;
    method_set_fft_size;
    method_get_fft_size;
}


export class AudioEffectPitchShift extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectPitchShift");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("set_pitch_scale");
      this._bindings.method_set_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("get_pitch_scale");
      this._bindings.method_get_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("set_oversampling");
      this._bindings.method_set_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("get_oversampling");
      this._bindings.method_get_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("set_fft_size");
      this._bindings.method_set_fft_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2323518741
      );
    }
    {
      let classname = new StringName("AudioEffectPitchShift");
      let methodname = new StringName("get_fft_size");
      this._bindings.method_get_fft_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2361246789
      );
    }
  }
  set_pitch_scale(_rate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pitch_scale,
      this._owner,
      _rate
    );
  }
  get_pitch_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pitch_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_oversampling(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_oversampling,
      this._owner,
      _amount
    );
  }
  get_oversampling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_oversampling,
      this._owner,
			Variant.Type.INT,
      
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