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
  method_set_recording_active;
  method_is_recording_active;
  method_set_format;
  method_get_format;
  method_get_recording;
}
@GodotClass
export class AudioEffectRecord extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectRecord");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_recording_active() {
    if (!this._bindings.method_set_recording_active) {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("set_recording_active");
      this._bindings.method_set_recording_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_recording_active() {
    if (!this._bindings.method_is_recording_active) {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("is_recording_active");
      this._bindings.method_is_recording_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_format() {
    if (!this._bindings.method_set_format) {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("set_format");
      this._bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        60648488
      );
    }
  }
  static init_method_get_format() {
    if (!this._bindings.method_get_format) {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3151724922
      );
    }
  }
  static init_method_get_recording() {
    if (!this._bindings.method_get_recording) {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("get_recording");
      this._bindings.method_get_recording = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2964110865
      );
    }
  }

  
  
  set_recording_active(_record) {
    AudioEffectRecord.init_method_set_recording_active();
    return _call_native_mb_no_ret(
      AudioEffectRecord._bindings.method_set_recording_active,
      this._owner,
      _record
    );
    
  }
  is_recording_active() {
    AudioEffectRecord.init_method_is_recording_active();
    return _call_native_mb_ret(
      AudioEffectRecord._bindings.method_is_recording_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_format(_format) {
    AudioEffectRecord.init_method_set_format();
    return _call_native_mb_no_ret(
      AudioEffectRecord._bindings.method_set_format,
      this._owner,
      _format
    );
    
  }
  get_format() {
    AudioEffectRecord.init_method_get_format();
    return _call_native_mb_ret(
      AudioEffectRecord._bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_recording() {
    AudioEffectRecord.init_method_get_recording();
    return _call_native_mb_ret(
      AudioEffectRecord._bindings.method_get_recording,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get format () {
  return this.get_format();
}
set format (new_value) {
  this.set_format(new_value);
}

}