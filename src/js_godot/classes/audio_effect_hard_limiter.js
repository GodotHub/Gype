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
    method_set_ceiling_db;
    method_get_ceiling_db;
    method_set_pre_gain_db;
    method_get_pre_gain_db;
    method_set_release;
    method_get_release;
}


export class AudioEffectHardLimiter extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectHardLimiter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioEffectHardLimiter");
        let methodname = new StringName("set_ceiling_db");
        this._bindings.method_set_ceiling_db = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectHardLimiter");
        let methodname = new StringName("get_ceiling_db");
        this._bindings.method_get_ceiling_db = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectHardLimiter");
        let methodname = new StringName("set_pre_gain_db");
        this._bindings.method_set_pre_gain_db = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectHardLimiter");
        let methodname = new StringName("get_pre_gain_db");
        this._bindings.method_get_pre_gain_db = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectHardLimiter");
        let methodname = new StringName("set_release");
        this._bindings.method_set_release = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectHardLimiter");
        let methodname = new StringName("get_release");
        this._bindings.method_get_release = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_ceiling_db(_ceiling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ceiling_db,
      this._owner,
      _ceiling
    );
    
  }
  get_ceiling_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ceiling_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_pre_gain_db(_p_pre_gain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pre_gain_db,
      this._owner,
      _p_pre_gain
    );
    
  }
  get_pre_gain_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pre_gain_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_release(_p_release) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_release,
      this._owner,
      _p_release
    );
    
  }
  get_release() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_release,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}