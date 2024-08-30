import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classes/audio_effect'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class AudioEffectDistortion extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectDistortion");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("set_mode");
        this._bindings.method_set_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1314744793
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("get_mode");
        this._bindings.method_get_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          809118343
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("set_pre_gain");
        this._bindings.method_set_pre_gain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("get_pre_gain");
        this._bindings.method_get_pre_gain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("set_keep_hf_hz");
        this._bindings.method_set_keep_hf_hz = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("get_keep_hf_hz");
        this._bindings.method_get_keep_hf_hz = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("set_drive");
        this._bindings.method_set_drive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("get_drive");
        this._bindings.method_get_drive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectDistortion");
        let methodname = new StringName("set_post_gain");
        this._bindings.method_set_post_gain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mode,
      this._owner,
      _mode
    );
    
  }
  get_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_pre_gain(_pre_gain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pre_gain,
      this._owner,
      _pre_gain
    );
    
  }
  get_pre_gain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pre_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_keep_hf_hz(_keep_hf_hz) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_hf_hz,
      this._owner,
      _keep_hf_hz
    );
    
  }
  get_keep_hf_hz() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_keep_hf_hz,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_drive(_drive) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_drive,
      this._owner,
      _drive
    );
    
  }
  get_drive() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drive,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_post_gain(_post_gain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_post_gain,
      this._owner,
      _post_gain
    );
    
  }
  get_post_gain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_post_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  static Mode = {
    MODE_CLIP: 0,
    MODE_ATAN: 1,
    MODE_LOFI: 2,
    MODE_OVERDRIVE: 3,
    MODE_WAVESHAPE: 4,
  }
}