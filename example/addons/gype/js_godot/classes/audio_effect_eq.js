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
  method_set_band_gain_db;
  method_get_band_gain_db;
  method_get_band_count;
}
@GodotClass
export class AudioEffectEQ extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectEQ");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_band_gain_db() {
    if (!this._bindings.method_set_band_gain_db) {
      let classname = new StringName("AudioEffectEQ");
      let methodname = new StringName("set_band_gain_db");
      this._bindings.method_set_band_gain_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_band_gain_db() {
    if (!this._bindings.method_get_band_gain_db) {
      let classname = new StringName("AudioEffectEQ");
      let methodname = new StringName("get_band_gain_db");
      this._bindings.method_get_band_gain_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_band_count() {
    if (!this._bindings.method_get_band_count) {
      let classname = new StringName("AudioEffectEQ");
      let methodname = new StringName("get_band_count");
      this._bindings.method_get_band_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_band_gain_db(_band_idx, _volume_db) {
    AudioEffectEQ.init_method_set_band_gain_db();
    return _call_native_mb_no_ret(
      AudioEffectEQ._bindings.method_set_band_gain_db,
      this._owner,
      _band_idx, _volume_db
    );
    
  }
  get_band_gain_db(_band_idx) {
    AudioEffectEQ.init_method_get_band_gain_db();
    return _call_native_mb_ret(
      AudioEffectEQ._bindings.method_get_band_gain_db,
      this._owner,
			Variant.Type.FLOAT,
    
      _band_idx
    );
    
  }
  get_band_count() {
    AudioEffectEQ.init_method_get_band_count();
    return _call_native_mb_ret(
      AudioEffectEQ._bindings.method_get_band_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

}