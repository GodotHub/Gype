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
  method_set_cutoff;
  method_get_cutoff;
  method_set_resonance;
  method_get_resonance;
  method_set_gain;
  method_get_gain;
  method_set_db;
  method_get_db;
}
@GodotClass
export class AudioEffectFilter extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectFilter");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_cutoff() {
    if (!this._bindings.method_set_cutoff) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("set_cutoff");
      this._bindings.method_set_cutoff = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_cutoff() {
    if (!this._bindings.method_get_cutoff) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("get_cutoff");
      this._bindings.method_get_cutoff = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_resonance() {
    if (!this._bindings.method_set_resonance) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("set_resonance");
      this._bindings.method_set_resonance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_resonance() {
    if (!this._bindings.method_get_resonance) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("get_resonance");
      this._bindings.method_get_resonance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_gain() {
    if (!this._bindings.method_set_gain) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("set_gain");
      this._bindings.method_set_gain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_gain() {
    if (!this._bindings.method_get_gain) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("get_gain");
      this._bindings.method_get_gain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_db() {
    if (!this._bindings.method_set_db) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("set_db");
      this._bindings.method_set_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        771740901
      );
    }
  }
  static init_method_get_db() {
    if (!this._bindings.method_get_db) {
      let classname = new StringName("AudioEffectFilter");
      let methodname = new StringName("get_db");
      this._bindings.method_get_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3981721890
      );
    }
  }

  
  
  set_cutoff(_freq) {
    AudioEffectFilter.init_method_set_cutoff();
    return _call_native_mb_no_ret(
      AudioEffectFilter._bindings.method_set_cutoff,
      this._owner,
      _freq
    );
    
  }
  get_cutoff() {
    AudioEffectFilter.init_method_get_cutoff();
    return _call_native_mb_ret(
      AudioEffectFilter._bindings.method_get_cutoff,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_resonance(_amount) {
    AudioEffectFilter.init_method_set_resonance();
    return _call_native_mb_no_ret(
      AudioEffectFilter._bindings.method_set_resonance,
      this._owner,
      _amount
    );
    
  }
  get_resonance() {
    AudioEffectFilter.init_method_get_resonance();
    return _call_native_mb_ret(
      AudioEffectFilter._bindings.method_get_resonance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_gain(_amount) {
    AudioEffectFilter.init_method_set_gain();
    return _call_native_mb_no_ret(
      AudioEffectFilter._bindings.method_set_gain,
      this._owner,
      _amount
    );
    
  }
  get_gain() {
    AudioEffectFilter.init_method_get_gain();
    return _call_native_mb_ret(
      AudioEffectFilter._bindings.method_get_gain,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_db(_amount) {
    AudioEffectFilter.init_method_set_db();
    return _call_native_mb_no_ret(
      AudioEffectFilter._bindings.method_set_db,
      this._owner,
      _amount
    );
    
  }
  get_db() {
    AudioEffectFilter.init_method_get_db();
    return _call_native_mb_ret(
      AudioEffectFilter._bindings.method_get_db,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get cutoff_hz () {
  return this.get_cutoff();
}
set cutoff_hz (new_value) {
  this.set_cutoff(new_value);
}
get resonance () {
  return this.get_resonance();
}
set resonance (new_value) {
  this.set_resonance(new_value);
}
get gain () {
  return this.get_gain();
}
set gain (new_value) {
  this.set_gain(new_value);
}
get db () {
  return this.get_db();
}
set db (new_value) {
  this.set_db(new_value);
}

  static FilterDB = {
    FILTER_6DB: 0,
    FILTER_12DB: 1,
    FILTER_18DB: 2,
    FILTER_24DB: 3,
  }
}