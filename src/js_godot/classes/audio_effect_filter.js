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
    method_set_cutoff;
    method_get_cutoff;
    method_set_resonance;
    method_get_resonance;
    method_set_gain;
    method_get_gain;
    method_set_db;
    method_get_db;
}


export class AudioEffectFilter extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectFilter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("set_cutoff");
        this._bindings.method_set_cutoff = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("get_cutoff");
        this._bindings.method_get_cutoff = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("set_resonance");
        this._bindings.method_set_resonance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("get_resonance");
        this._bindings.method_get_resonance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("set_gain");
        this._bindings.method_set_gain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("get_gain");
        this._bindings.method_get_gain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectFilter");
        let methodname = new StringName("set_db");
        this._bindings.method_set_db = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          771740901
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cutoff,
      this._owner,
      _freq
    );
    
  }
  get_cutoff() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cutoff,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_resonance(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_resonance,
      this._owner,
      _amount
    );
    
  }
  get_resonance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_resonance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_gain(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gain,
      this._owner,
      _amount
    );
    
  }
  get_gain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_db(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_db,
      this._owner,
      _amount
    );
    
  }
  get_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_db,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static FilterDB = {
    FILTER_6DB: 0,
    FILTER_12DB: 1,
    FILTER_18DB: 2,
    FILTER_24DB: 3,
  }
}