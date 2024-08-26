import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_voice_count;
    method_get_voice_count;
    method_set_voice_delay_ms;
    method_get_voice_delay_ms;
    method_set_voice_rate_hz;
    method_get_voice_rate_hz;
    method_set_voice_depth_ms;
    method_get_voice_depth_ms;
    method_set_voice_level_db;
    method_get_voice_level_db;
    method_set_voice_cutoff_hz;
    method_get_voice_cutoff_hz;
    method_set_voice_pan;
    method_get_voice_pan;
    method_set_wet;
    method_get_wet;
    method_set_dry;
    method_get_dry;
}


export class AudioEffectChorus extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectChorus");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_count");
      this._bindings.method_set_voice_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_count");
      this._bindings.method_get_voice_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_delay_ms");
      this._bindings.method_set_voice_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_delay_ms");
      this._bindings.method_get_voice_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_rate_hz");
      this._bindings.method_set_voice_rate_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_rate_hz");
      this._bindings.method_get_voice_rate_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_depth_ms");
      this._bindings.method_set_voice_depth_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_depth_ms");
      this._bindings.method_get_voice_depth_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_level_db");
      this._bindings.method_set_voice_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_level_db");
      this._bindings.method_get_voice_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_cutoff_hz");
      this._bindings.method_set_voice_cutoff_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_cutoff_hz");
      this._bindings.method_get_voice_cutoff_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_pan");
      this._bindings.method_set_voice_pan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_pan");
      this._bindings.method_get_voice_pan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_wet");
      this._bindings.method_set_wet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_wet");
      this._bindings.method_get_wet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_dry");
      this._bindings.method_set_dry = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_dry");
      this._bindings.method_get_dry = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_voice_count(_voices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_count,
      this._owner,
      _voices
    );
  }
  get_voice_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_voice_delay_ms(_voice_idx, _delay_ms) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_delay_ms,
      this._owner,
      _voice_idx, _delay_ms
    );
  }
  get_voice_delay_ms(_voice_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
      _voice_idx
    );
  }
  set_voice_rate_hz(_voice_idx, _rate_hz) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_rate_hz,
      this._owner,
      _voice_idx, _rate_hz
    );
  }
  get_voice_rate_hz(_voice_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_rate_hz,
      this._owner,
			Variant.Type.FLOAT,
      _voice_idx
    );
  }
  set_voice_depth_ms(_voice_idx, _depth_ms) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_depth_ms,
      this._owner,
      _voice_idx, _depth_ms
    );
  }
  get_voice_depth_ms(_voice_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_depth_ms,
      this._owner,
			Variant.Type.FLOAT,
      _voice_idx
    );
  }
  set_voice_level_db(_voice_idx, _level_db) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_level_db,
      this._owner,
      _voice_idx, _level_db
    );
  }
  get_voice_level_db(_voice_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_level_db,
      this._owner,
			Variant.Type.FLOAT,
      _voice_idx
    );
  }
  set_voice_cutoff_hz(_voice_idx, _cutoff_hz) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_cutoff_hz,
      this._owner,
      _voice_idx, _cutoff_hz
    );
  }
  get_voice_cutoff_hz(_voice_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_cutoff_hz,
      this._owner,
			Variant.Type.FLOAT,
      _voice_idx
    );
  }
  set_voice_pan(_voice_idx, _pan) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_voice_pan,
      this._owner,
      _voice_idx, _pan
    );
  }
  get_voice_pan(_voice_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_voice_pan,
      this._owner,
			Variant.Type.FLOAT,
      _voice_idx
    );
  }
  set_wet(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wet,
      this._owner,
      _amount
    );
  }
  get_wet() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wet,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_dry(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dry,
      this._owner,
      _amount
    );
  }
  get_dry() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dry,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}