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
    method_set_pan;
    method_get_pan;
}


export class AudioEffectPanner extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectPanner");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioEffectPanner");
        let methodname = new StringName("set_pan");
        this._bindings.method_set_pan = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectPanner");
        let methodname = new StringName("get_pan");
        this._bindings.method_get_pan = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_pan(_cpanume) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pan,
      this._owner,
      _cpanume
    );
    
  }
  get_pan() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pan,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}