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
  method_set_mode;
  method_get_mode;
  method_set_pre_gain;
  method_get_pre_gain;
  method_set_keep_hf_hz;
  method_get_keep_hf_hz;
  method_set_drive;
  method_get_drive;
  method_set_post_gain;
  method_get_post_gain;
}
@GodotClass
export class AudioEffectDistortion extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectDistortion");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mode() {
    if (!this._bindings.method_set_mode) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("set_mode");
      this._bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1314744793
      );
    }
  }
  static init_method_get_mode() {
    if (!this._bindings.method_get_mode) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("get_mode");
      this._bindings.method_get_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        809118343
      );
    }
  }
  static init_method_set_pre_gain() {
    if (!this._bindings.method_set_pre_gain) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("set_pre_gain");
      this._bindings.method_set_pre_gain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pre_gain() {
    if (!this._bindings.method_get_pre_gain) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("get_pre_gain");
      this._bindings.method_get_pre_gain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_keep_hf_hz() {
    if (!this._bindings.method_set_keep_hf_hz) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("set_keep_hf_hz");
      this._bindings.method_set_keep_hf_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_keep_hf_hz() {
    if (!this._bindings.method_get_keep_hf_hz) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("get_keep_hf_hz");
      this._bindings.method_get_keep_hf_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_drive() {
    if (!this._bindings.method_set_drive) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("set_drive");
      this._bindings.method_set_drive = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_drive() {
    if (!this._bindings.method_get_drive) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("get_drive");
      this._bindings.method_get_drive = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_post_gain() {
    if (!this._bindings.method_set_post_gain) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("set_post_gain");
      this._bindings.method_set_post_gain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_post_gain() {
    if (!this._bindings.method_get_post_gain) {
      let classname = new StringName("AudioEffectDistortion");
      let methodname = new StringName("get_post_gain");
      this._bindings.method_get_post_gain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_mode(_mode) {
    AudioEffectDistortion.init_method_set_mode();
    return _call_native_mb_no_ret(
      AudioEffectDistortion._bindings.method_set_mode,
      this._owner,
      _mode
    );
    
  }
  get_mode() {
    AudioEffectDistortion.init_method_get_mode();
    return _call_native_mb_ret(
      AudioEffectDistortion._bindings.method_get_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_pre_gain(_pre_gain) {
    AudioEffectDistortion.init_method_set_pre_gain();
    return _call_native_mb_no_ret(
      AudioEffectDistortion._bindings.method_set_pre_gain,
      this._owner,
      _pre_gain
    );
    
  }
  get_pre_gain() {
    AudioEffectDistortion.init_method_get_pre_gain();
    return _call_native_mb_ret(
      AudioEffectDistortion._bindings.method_get_pre_gain,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_keep_hf_hz(_keep_hf_hz) {
    AudioEffectDistortion.init_method_set_keep_hf_hz();
    return _call_native_mb_no_ret(
      AudioEffectDistortion._bindings.method_set_keep_hf_hz,
      this._owner,
      _keep_hf_hz
    );
    
  }
  get_keep_hf_hz() {
    AudioEffectDistortion.init_method_get_keep_hf_hz();
    return _call_native_mb_ret(
      AudioEffectDistortion._bindings.method_get_keep_hf_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_drive(_drive) {
    AudioEffectDistortion.init_method_set_drive();
    return _call_native_mb_no_ret(
      AudioEffectDistortion._bindings.method_set_drive,
      this._owner,
      _drive
    );
    
  }
  get_drive() {
    AudioEffectDistortion.init_method_get_drive();
    return _call_native_mb_ret(
      AudioEffectDistortion._bindings.method_get_drive,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_post_gain(_post_gain) {
    AudioEffectDistortion.init_method_set_post_gain();
    return _call_native_mb_no_ret(
      AudioEffectDistortion._bindings.method_set_post_gain,
      this._owner,
      _post_gain
    );
    
  }
  get_post_gain() {
    AudioEffectDistortion.init_method_get_post_gain();
    return _call_native_mb_ret(
      AudioEffectDistortion._bindings.method_get_post_gain,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get mode () {
  return this.get_mode();
}
set mode (new_value) {
  this.set_mode(new_value);
}
get pre_gain () {
  return this.get_pre_gain();
}
set pre_gain (new_value) {
  this.set_pre_gain(new_value);
}
get keep_hf_hz () {
  return this.get_keep_hf_hz();
}
set keep_hf_hz (new_value) {
  this.set_keep_hf_hz(new_value);
}
get drive () {
  return this.get_drive();
}
set drive (new_value) {
  this.set_drive(new_value);
}
get post_gain () {
  return this.get_post_gain();
}
set post_gain (new_value) {
  this.set_post_gain(new_value);
}

  static Mode = {
    MODE_CLIP: 0,
    MODE_ATAN: 1,
    MODE_LOFI: 2,
    MODE_OVERDRIVE: 3,
    MODE_WAVESHAPE: 4,
  }
}