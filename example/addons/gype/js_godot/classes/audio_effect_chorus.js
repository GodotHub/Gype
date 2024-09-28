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
@GodotClass
export class AudioEffectChorus extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectChorus");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_voice_count() {
    if (!this._bindings.method_set_voice_count) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_count");
      this._bindings.method_set_voice_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_voice_count() {
    if (!this._bindings.method_get_voice_count) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_count");
      this._bindings.method_get_voice_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_voice_delay_ms() {
    if (!this._bindings.method_set_voice_delay_ms) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_delay_ms");
      this._bindings.method_set_voice_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_voice_delay_ms() {
    if (!this._bindings.method_get_voice_delay_ms) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_delay_ms");
      this._bindings.method_get_voice_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_voice_rate_hz() {
    if (!this._bindings.method_set_voice_rate_hz) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_rate_hz");
      this._bindings.method_set_voice_rate_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_voice_rate_hz() {
    if (!this._bindings.method_get_voice_rate_hz) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_rate_hz");
      this._bindings.method_get_voice_rate_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_voice_depth_ms() {
    if (!this._bindings.method_set_voice_depth_ms) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_depth_ms");
      this._bindings.method_set_voice_depth_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_voice_depth_ms() {
    if (!this._bindings.method_get_voice_depth_ms) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_depth_ms");
      this._bindings.method_get_voice_depth_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_voice_level_db() {
    if (!this._bindings.method_set_voice_level_db) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_level_db");
      this._bindings.method_set_voice_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_voice_level_db() {
    if (!this._bindings.method_get_voice_level_db) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_level_db");
      this._bindings.method_get_voice_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_voice_cutoff_hz() {
    if (!this._bindings.method_set_voice_cutoff_hz) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_cutoff_hz");
      this._bindings.method_set_voice_cutoff_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_voice_cutoff_hz() {
    if (!this._bindings.method_get_voice_cutoff_hz) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_cutoff_hz");
      this._bindings.method_get_voice_cutoff_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_voice_pan() {
    if (!this._bindings.method_set_voice_pan) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_voice_pan");
      this._bindings.method_set_voice_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_voice_pan() {
    if (!this._bindings.method_get_voice_pan) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_voice_pan");
      this._bindings.method_get_voice_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_wet() {
    if (!this._bindings.method_set_wet) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_wet");
      this._bindings.method_set_wet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_wet() {
    if (!this._bindings.method_get_wet) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("get_wet");
      this._bindings.method_get_wet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_dry() {
    if (!this._bindings.method_set_dry) {
      let classname = new StringName("AudioEffectChorus");
      let methodname = new StringName("set_dry");
      this._bindings.method_set_dry = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_dry() {
    if (!this._bindings.method_get_dry) {
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
    AudioEffectChorus.init_method_set_voice_count();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_count,
      this._owner,
      _voices
    );
    
  }
  get_voice_count() {
    AudioEffectChorus.init_method_get_voice_count();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_voice_delay_ms(_voice_idx, _delay_ms) {
    AudioEffectChorus.init_method_set_voice_delay_ms();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_delay_ms,
      this._owner,
      _voice_idx, _delay_ms
    );
    
  }
  get_voice_delay_ms(_voice_idx) {
    AudioEffectChorus.init_method_get_voice_delay_ms();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
    
      _voice_idx
    );
    
  }
  set_voice_rate_hz(_voice_idx, _rate_hz) {
    AudioEffectChorus.init_method_set_voice_rate_hz();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_rate_hz,
      this._owner,
      _voice_idx, _rate_hz
    );
    
  }
  get_voice_rate_hz(_voice_idx) {
    AudioEffectChorus.init_method_get_voice_rate_hz();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_rate_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      _voice_idx
    );
    
  }
  set_voice_depth_ms(_voice_idx, _depth_ms) {
    AudioEffectChorus.init_method_set_voice_depth_ms();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_depth_ms,
      this._owner,
      _voice_idx, _depth_ms
    );
    
  }
  get_voice_depth_ms(_voice_idx) {
    AudioEffectChorus.init_method_get_voice_depth_ms();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_depth_ms,
      this._owner,
			Variant.Type.FLOAT,
    
      _voice_idx
    );
    
  }
  set_voice_level_db(_voice_idx, _level_db) {
    AudioEffectChorus.init_method_set_voice_level_db();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_level_db,
      this._owner,
      _voice_idx, _level_db
    );
    
  }
  get_voice_level_db(_voice_idx) {
    AudioEffectChorus.init_method_get_voice_level_db();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_level_db,
      this._owner,
			Variant.Type.FLOAT,
    
      _voice_idx
    );
    
  }
  set_voice_cutoff_hz(_voice_idx, _cutoff_hz) {
    AudioEffectChorus.init_method_set_voice_cutoff_hz();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_cutoff_hz,
      this._owner,
      _voice_idx, _cutoff_hz
    );
    
  }
  get_voice_cutoff_hz(_voice_idx) {
    AudioEffectChorus.init_method_get_voice_cutoff_hz();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_cutoff_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      _voice_idx
    );
    
  }
  set_voice_pan(_voice_idx, _pan) {
    AudioEffectChorus.init_method_set_voice_pan();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_voice_pan,
      this._owner,
      _voice_idx, _pan
    );
    
  }
  get_voice_pan(_voice_idx) {
    AudioEffectChorus.init_method_get_voice_pan();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_voice_pan,
      this._owner,
			Variant.Type.FLOAT,
    
      _voice_idx
    );
    
  }
  set_wet(_amount) {
    AudioEffectChorus.init_method_set_wet();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_wet,
      this._owner,
      _amount
    );
    
  }
  get_wet() {
    AudioEffectChorus.init_method_get_wet();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_wet,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_dry(_amount) {
    AudioEffectChorus.init_method_set_dry();
    return _call_native_mb_no_ret(
      AudioEffectChorus._bindings.method_set_dry,
      this._owner,
      _amount
    );
    
  }
  get_dry() {
    AudioEffectChorus.init_method_get_dry();
    return _call_native_mb_ret(
      AudioEffectChorus._bindings.method_get_dry,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get voice_count () {
  return this.get_voice_count();
}
set voice_count (new_value) {
  this.set_voice_count(new_value);
}
get dry () {
  return this.get_dry();
}
set dry (new_value) {
  this.set_dry(new_value);
}
get wet () {
  return this.get_wet();
}
set wet (new_value) {
  this.set_wet(new_value);
}

}