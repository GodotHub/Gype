import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_dry;
    method_get_dry;
    method_set_tap1_active;
    method_is_tap1_active;
    method_set_tap1_delay_ms;
    method_get_tap1_delay_ms;
    method_set_tap1_level_db;
    method_get_tap1_level_db;
    method_set_tap1_pan;
    method_get_tap1_pan;
    method_set_tap2_active;
    method_is_tap2_active;
    method_set_tap2_delay_ms;
    method_get_tap2_delay_ms;
    method_set_tap2_level_db;
    method_get_tap2_level_db;
    method_set_tap2_pan;
    method_get_tap2_pan;
    method_set_feedback_active;
    method_is_feedback_active;
    method_set_feedback_delay_ms;
    method_get_feedback_delay_ms;
    method_set_feedback_level_db;
    method_get_feedback_level_db;
    method_set_feedback_lowpass;
    method_get_feedback_lowpass;
}


export class AudioEffectDelay extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectDelay");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_dry");
      this._bindings.method_set_dry = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_dry");
      this._bindings.method_get_dry = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_active");
      this._bindings.method_set_tap1_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("is_tap1_active");
      this._bindings.method_is_tap1_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_delay_ms");
      this._bindings.method_set_tap1_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap1_delay_ms");
      this._bindings.method_get_tap1_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_level_db");
      this._bindings.method_set_tap1_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap1_level_db");
      this._bindings.method_get_tap1_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_pan");
      this._bindings.method_set_tap1_pan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap1_pan");
      this._bindings.method_get_tap1_pan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_active");
      this._bindings.method_set_tap2_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("is_tap2_active");
      this._bindings.method_is_tap2_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_delay_ms");
      this._bindings.method_set_tap2_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap2_delay_ms");
      this._bindings.method_get_tap2_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_level_db");
      this._bindings.method_set_tap2_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap2_level_db");
      this._bindings.method_get_tap2_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_pan");
      this._bindings.method_set_tap2_pan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap2_pan");
      this._bindings.method_get_tap2_pan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_active");
      this._bindings.method_set_feedback_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("is_feedback_active");
      this._bindings.method_is_feedback_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_delay_ms");
      this._bindings.method_set_feedback_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_feedback_delay_ms");
      this._bindings.method_get_feedback_delay_ms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_level_db");
      this._bindings.method_set_feedback_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_feedback_level_db");
      this._bindings.method_get_feedback_level_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_lowpass");
      this._bindings.method_set_feedback_lowpass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_feedback_lowpass");
      this._bindings.method_get_feedback_lowpass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
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
  set_tap1_active(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap1_active,
      this._owner,
      _amount
    );
  }
  is_tap1_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_tap1_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_tap1_delay_ms(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap1_delay_ms,
      this._owner,
      _amount
    );
  }
  get_tap1_delay_ms() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap1_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tap1_level_db(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap1_level_db,
      this._owner,
      _amount
    );
  }
  get_tap1_level_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap1_level_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tap1_pan(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap1_pan,
      this._owner,
      _amount
    );
  }
  get_tap1_pan() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap1_pan,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tap2_active(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap2_active,
      this._owner,
      _amount
    );
  }
  is_tap2_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_tap2_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_tap2_delay_ms(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap2_delay_ms,
      this._owner,
      _amount
    );
  }
  get_tap2_delay_ms() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap2_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tap2_level_db(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap2_level_db,
      this._owner,
      _amount
    );
  }
  get_tap2_level_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap2_level_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tap2_pan(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tap2_pan,
      this._owner,
      _amount
    );
  }
  get_tap2_pan() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tap2_pan,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_feedback_active(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_feedback_active,
      this._owner,
      _amount
    );
  }
  is_feedback_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_feedback_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_feedback_delay_ms(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_feedback_delay_ms,
      this._owner,
      _amount
    );
  }
  get_feedback_delay_ms() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feedback_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_feedback_level_db(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_feedback_level_db,
      this._owner,
      _amount
    );
  }
  get_feedback_level_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feedback_level_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_feedback_lowpass(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_feedback_lowpass,
      this._owner,
      _amount
    );
  }
  get_feedback_lowpass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feedback_lowpass,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}