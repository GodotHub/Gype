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
  method_set_pan_pullout;
  method_get_pan_pullout;
  method_set_time_pullout;
  method_get_time_pullout;
  method_set_surround;
  method_get_surround;
}
@GodotClass
export class AudioEffectStereoEnhance extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectStereoEnhance");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pan_pullout() {
    if (!this._bindings.method_set_pan_pullout) {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("set_pan_pullout");
      this._bindings.method_set_pan_pullout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pan_pullout() {
    if (!this._bindings.method_get_pan_pullout) {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("get_pan_pullout");
      this._bindings.method_get_pan_pullout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_time_pullout() {
    if (!this._bindings.method_set_time_pullout) {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("set_time_pullout");
      this._bindings.method_set_time_pullout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_time_pullout() {
    if (!this._bindings.method_get_time_pullout) {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("get_time_pullout");
      this._bindings.method_get_time_pullout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_surround() {
    if (!this._bindings.method_set_surround) {
      let classname = new StringName("AudioEffectStereoEnhance");
      let methodname = new StringName("set_surround");
      this._bindings.method_set_surround = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_surround() {
    if (!this._bindings.method_get_surround) {
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
    AudioEffectStereoEnhance.init_method_set_pan_pullout();
    return _call_native_mb_no_ret(
      AudioEffectStereoEnhance._bindings.method_set_pan_pullout,
      this._owner,
      _amount
    );
    
  }
  get_pan_pullout() {
    AudioEffectStereoEnhance.init_method_get_pan_pullout();
    return _call_native_mb_ret(
      AudioEffectStereoEnhance._bindings.method_get_pan_pullout,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_time_pullout(_amount) {
    AudioEffectStereoEnhance.init_method_set_time_pullout();
    return _call_native_mb_no_ret(
      AudioEffectStereoEnhance._bindings.method_set_time_pullout,
      this._owner,
      _amount
    );
    
  }
  get_time_pullout() {
    AudioEffectStereoEnhance.init_method_get_time_pullout();
    return _call_native_mb_ret(
      AudioEffectStereoEnhance._bindings.method_get_time_pullout,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_surround(_amount) {
    AudioEffectStereoEnhance.init_method_set_surround();
    return _call_native_mb_no_ret(
      AudioEffectStereoEnhance._bindings.method_set_surround,
      this._owner,
      _amount
    );
    
  }
  get_surround() {
    AudioEffectStereoEnhance.init_method_get_surround();
    return _call_native_mb_ret(
      AudioEffectStereoEnhance._bindings.method_get_surround,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get pan_pullout () {
  return this.get_pan_pullout();
}
set pan_pullout (new_value) {
  this.set_pan_pullout(new_value);
}
get time_pullout_ms () {
  return this.get_time_pullout();
}
set time_pullout_ms (new_value) {
  this.set_time_pullout(new_value);
}
get surround () {
  return this.get_surround();
}
set surround (new_value) {
  this.set_surround(new_value);
}

}