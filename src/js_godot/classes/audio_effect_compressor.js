import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
import { StringName } from 'src/js_godot/variant/string_name'
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

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectCompressor");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_threshold,
      this._owner,
      _threshold
    );
  }
  get_threshold() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_threshold,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ratio,
      this._owner,
      _ratio
    );
  }
  get_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_gain(_gain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gain,
      this._owner,
      _gain
    );
  }
  get_gain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_attack_us(_attack_us) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_attack_us,
      this._owner,
      _attack_us
    );
  }
  get_attack_us() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_attack_us,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_release_ms(_release_ms) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_release_ms,
      this._owner,
      _release_ms
    );
  }
  get_release_ms() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_release_ms,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_mix(_mix) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mix,
      this._owner,
      _mix
    );
  }
  get_mix() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mix,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sidechain(_sidechain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sidechain,
      this._owner,
      _sidechain
    );
  }
  get_sidechain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sidechain,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
}