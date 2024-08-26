import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_recording_active;
    method_is_recording_active;
    method_set_format;
    method_get_format;
    method_get_recording;
}


export class AudioEffectRecord extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectRecord");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("set_recording_active");
      this._bindings.method_set_recording_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("is_recording_active");
      this._bindings.method_is_recording_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("set_format");
      this._bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        60648488
      );
    }
    {
      let classname = new StringName("AudioEffectRecord");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3151724922
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_recording_active,
      this._owner,
      _record
    );
  }
  is_recording_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_recording_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_format(_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_format,
      this._owner,
      _format
    );
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
  }
  get_recording() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_recording,
      this._owner,
			Variant.INT,
      
    );
  }
}