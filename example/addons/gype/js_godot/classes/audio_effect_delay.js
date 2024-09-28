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
@GodotClass
export class AudioEffectDelay extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectDelay");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_dry() {
    if (!this._bindings.method_set_dry) {
      let classname = new StringName("AudioEffectDelay");
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
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_dry");
      this._bindings.method_get_dry = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_tap1_active() {
    if (!this._bindings.method_set_tap1_active) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_active");
      this._bindings.method_set_tap1_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_tap1_active() {
    if (!this._bindings.method_is_tap1_active) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("is_tap1_active");
      this._bindings.method_is_tap1_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tap1_delay_ms() {
    if (!this._bindings.method_set_tap1_delay_ms) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_delay_ms");
      this._bindings.method_set_tap1_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap1_delay_ms() {
    if (!this._bindings.method_get_tap1_delay_ms) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap1_delay_ms");
      this._bindings.method_get_tap1_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tap1_level_db() {
    if (!this._bindings.method_set_tap1_level_db) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_level_db");
      this._bindings.method_set_tap1_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap1_level_db() {
    if (!this._bindings.method_get_tap1_level_db) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap1_level_db");
      this._bindings.method_get_tap1_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tap1_pan() {
    if (!this._bindings.method_set_tap1_pan) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap1_pan");
      this._bindings.method_set_tap1_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap1_pan() {
    if (!this._bindings.method_get_tap1_pan) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap1_pan");
      this._bindings.method_get_tap1_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tap2_active() {
    if (!this._bindings.method_set_tap2_active) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_active");
      this._bindings.method_set_tap2_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_tap2_active() {
    if (!this._bindings.method_is_tap2_active) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("is_tap2_active");
      this._bindings.method_is_tap2_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tap2_delay_ms() {
    if (!this._bindings.method_set_tap2_delay_ms) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_delay_ms");
      this._bindings.method_set_tap2_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap2_delay_ms() {
    if (!this._bindings.method_get_tap2_delay_ms) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap2_delay_ms");
      this._bindings.method_get_tap2_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tap2_level_db() {
    if (!this._bindings.method_set_tap2_level_db) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_level_db");
      this._bindings.method_set_tap2_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap2_level_db() {
    if (!this._bindings.method_get_tap2_level_db) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap2_level_db");
      this._bindings.method_get_tap2_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tap2_pan() {
    if (!this._bindings.method_set_tap2_pan) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_tap2_pan");
      this._bindings.method_set_tap2_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tap2_pan() {
    if (!this._bindings.method_get_tap2_pan) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_tap2_pan");
      this._bindings.method_get_tap2_pan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_feedback_active() {
    if (!this._bindings.method_set_feedback_active) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_active");
      this._bindings.method_set_feedback_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_feedback_active() {
    if (!this._bindings.method_is_feedback_active) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("is_feedback_active");
      this._bindings.method_is_feedback_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_feedback_delay_ms() {
    if (!this._bindings.method_set_feedback_delay_ms) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_delay_ms");
      this._bindings.method_set_feedback_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_feedback_delay_ms() {
    if (!this._bindings.method_get_feedback_delay_ms) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_feedback_delay_ms");
      this._bindings.method_get_feedback_delay_ms = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_feedback_level_db() {
    if (!this._bindings.method_set_feedback_level_db) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_level_db");
      this._bindings.method_set_feedback_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_feedback_level_db() {
    if (!this._bindings.method_get_feedback_level_db) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("get_feedback_level_db");
      this._bindings.method_get_feedback_level_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_feedback_lowpass() {
    if (!this._bindings.method_set_feedback_lowpass) {
      let classname = new StringName("AudioEffectDelay");
      let methodname = new StringName("set_feedback_lowpass");
      this._bindings.method_set_feedback_lowpass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_feedback_lowpass() {
    if (!this._bindings.method_get_feedback_lowpass) {
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
    AudioEffectDelay.init_method_set_dry();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_dry,
      this._owner,
      _amount
    );
    
  }
  get_dry() {
    AudioEffectDelay.init_method_get_dry();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_dry,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap1_active(_amount) {
    AudioEffectDelay.init_method_set_tap1_active();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap1_active,
      this._owner,
      _amount
    );
    
  }
  is_tap1_active() {
    AudioEffectDelay.init_method_is_tap1_active();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_is_tap1_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tap1_delay_ms(_amount) {
    AudioEffectDelay.init_method_set_tap1_delay_ms();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap1_delay_ms,
      this._owner,
      _amount
    );
    
  }
  get_tap1_delay_ms() {
    AudioEffectDelay.init_method_get_tap1_delay_ms();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_tap1_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap1_level_db(_amount) {
    AudioEffectDelay.init_method_set_tap1_level_db();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap1_level_db,
      this._owner,
      _amount
    );
    
  }
  get_tap1_level_db() {
    AudioEffectDelay.init_method_get_tap1_level_db();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_tap1_level_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap1_pan(_amount) {
    AudioEffectDelay.init_method_set_tap1_pan();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap1_pan,
      this._owner,
      _amount
    );
    
  }
  get_tap1_pan() {
    AudioEffectDelay.init_method_get_tap1_pan();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_tap1_pan,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap2_active(_amount) {
    AudioEffectDelay.init_method_set_tap2_active();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap2_active,
      this._owner,
      _amount
    );
    
  }
  is_tap2_active() {
    AudioEffectDelay.init_method_is_tap2_active();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_is_tap2_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tap2_delay_ms(_amount) {
    AudioEffectDelay.init_method_set_tap2_delay_ms();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap2_delay_ms,
      this._owner,
      _amount
    );
    
  }
  get_tap2_delay_ms() {
    AudioEffectDelay.init_method_get_tap2_delay_ms();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_tap2_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap2_level_db(_amount) {
    AudioEffectDelay.init_method_set_tap2_level_db();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap2_level_db,
      this._owner,
      _amount
    );
    
  }
  get_tap2_level_db() {
    AudioEffectDelay.init_method_get_tap2_level_db();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_tap2_level_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tap2_pan(_amount) {
    AudioEffectDelay.init_method_set_tap2_pan();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_tap2_pan,
      this._owner,
      _amount
    );
    
  }
  get_tap2_pan() {
    AudioEffectDelay.init_method_get_tap2_pan();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_tap2_pan,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_feedback_active(_amount) {
    AudioEffectDelay.init_method_set_feedback_active();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_feedback_active,
      this._owner,
      _amount
    );
    
  }
  is_feedback_active() {
    AudioEffectDelay.init_method_is_feedback_active();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_is_feedback_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_feedback_delay_ms(_amount) {
    AudioEffectDelay.init_method_set_feedback_delay_ms();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_feedback_delay_ms,
      this._owner,
      _amount
    );
    
  }
  get_feedback_delay_ms() {
    AudioEffectDelay.init_method_get_feedback_delay_ms();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_feedback_delay_ms,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_feedback_level_db(_amount) {
    AudioEffectDelay.init_method_set_feedback_level_db();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_feedback_level_db,
      this._owner,
      _amount
    );
    
  }
  get_feedback_level_db() {
    AudioEffectDelay.init_method_get_feedback_level_db();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_feedback_level_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_feedback_lowpass(_amount) {
    AudioEffectDelay.init_method_set_feedback_lowpass();
    return _call_native_mb_no_ret(
      AudioEffectDelay._bindings.method_set_feedback_lowpass,
      this._owner,
      _amount
    );
    
  }
  get_feedback_lowpass() {
    AudioEffectDelay.init_method_get_feedback_lowpass();
    return _call_native_mb_ret(
      AudioEffectDelay._bindings.method_get_feedback_lowpass,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get dry () {
  return this.get_dry();
}
set dry (new_value) {
  this.set_dry(new_value);
}
get tap1_active () {
  return this.is_tap1_active();
}
set tap1_active (new_value) {
  this.set_tap1_active(new_value);
}
get tap1_delay_ms () {
  return this.get_tap1_delay_ms();
}
set tap1_delay_ms (new_value) {
  this.set_tap1_delay_ms(new_value);
}
get tap1_level_db () {
  return this.get_tap1_level_db();
}
set tap1_level_db (new_value) {
  this.set_tap1_level_db(new_value);
}
get tap1_pan () {
  return this.get_tap1_pan();
}
set tap1_pan (new_value) {
  this.set_tap1_pan(new_value);
}
get tap2_active () {
  return this.is_tap2_active();
}
set tap2_active (new_value) {
  this.set_tap2_active(new_value);
}
get tap2_delay_ms () {
  return this.get_tap2_delay_ms();
}
set tap2_delay_ms (new_value) {
  this.set_tap2_delay_ms(new_value);
}
get tap2_level_db () {
  return this.get_tap2_level_db();
}
set tap2_level_db (new_value) {
  this.set_tap2_level_db(new_value);
}
get tap2_pan () {
  return this.get_tap2_pan();
}
set tap2_pan (new_value) {
  this.set_tap2_pan(new_value);
}
get feedback_active () {
  return this.is_feedback_active();
}
set feedback_active (new_value) {
  this.set_feedback_active(new_value);
}
get feedback_delay_ms () {
  return this.get_feedback_delay_ms();
}
set feedback_delay_ms (new_value) {
  this.set_feedback_delay_ms(new_value);
}
get feedback_level_db () {
  return this.get_feedback_level_db();
}
set feedback_level_db (new_value) {
  this.set_feedback_level_db(new_value);
}
get feedback_lowpass () {
  return this.get_feedback_lowpass();
}
set feedback_lowpass (new_value) {
  this.set_feedback_lowpass(new_value);
}

}