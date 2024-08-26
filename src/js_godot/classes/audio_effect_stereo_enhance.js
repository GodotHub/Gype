import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_pan_pullout;
    method_get_pan_pullout;
    method_set_time_pullout;
    method_get_time_pullout;
    method_set_surround;
    method_get_surround;
}


export class AudioEffectStereoEnhance extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectStereoEnhance");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("set_pan_pullout");
      this._bindings.method_set_pan_pullout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("get_pan_pullout");
      this._bindings.method_get_pan_pullout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("set_time_pullout");
      this._bindings.method_set_time_pullout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("get_time_pullout");
      this._bindings.method_get_time_pullout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("set_surround");
      this._bindings.method_set_surround = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("get_surround");
      this._bindings.method_get_surround = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_pan_pullout(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pan_pullout,
      this._owner,
      _amount
    );
  }
  get_pan_pullout() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pan_pullout,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_time_pullout(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_time_pullout,
      this._owner,
      _amount
    );
  }
  get_time_pullout() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_time_pullout,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_surround(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_surround,
      this._owner,
      _amount
    );
  }
  get_surround() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surround,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}