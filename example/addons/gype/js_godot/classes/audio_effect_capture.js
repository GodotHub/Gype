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
  method_can_get_buffer;
  method_get_buffer;
  method_clear_buffer;
  method_set_buffer_length;
  method_get_buffer_length;
  method_get_frames_available;
  method_get_discarded_frames;
  method_get_buffer_length_frames;
  method_get_pushed_frames;
}
@GodotClass
export class AudioEffectCapture extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectCapture");
    } else {
      super(godot_object);
    }
  }
  static init_method_can_get_buffer() {
    if (!this._bindings.method_can_get_buffer) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("can_get_buffer");
      this._bindings.method_can_get_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_buffer() {
    if (!this._bindings.method_get_buffer) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("get_buffer");
      this._bindings.method_get_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2649534757
      );
    }
  }
  static init_method_clear_buffer() {
    if (!this._bindings.method_clear_buffer) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("clear_buffer");
      this._bindings.method_clear_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_buffer_length() {
    if (!this._bindings.method_set_buffer_length) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("set_buffer_length");
      this._bindings.method_set_buffer_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_buffer_length() {
    if (!this._bindings.method_get_buffer_length) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("get_buffer_length");
      this._bindings.method_get_buffer_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_get_frames_available() {
    if (!this._bindings.method_get_frames_available) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("get_frames_available");
      this._bindings.method_get_frames_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_discarded_frames() {
    if (!this._bindings.method_get_discarded_frames) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("get_discarded_frames");
      this._bindings.method_get_discarded_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_buffer_length_frames() {
    if (!this._bindings.method_get_buffer_length_frames) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("get_buffer_length_frames");
      this._bindings.method_get_buffer_length_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_pushed_frames() {
    if (!this._bindings.method_get_pushed_frames) {
      let classname = new StringName("AudioEffectCapture");
      let methodname = new StringName("get_pushed_frames");
      this._bindings.method_get_pushed_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  can_get_buffer(_frames) {
    AudioEffectCapture.init_method_can_get_buffer();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_can_get_buffer,
      this._owner,
			Variant.Type.BOOL,
    
      _frames
    );
    
  }
  get_buffer(_frames) {
    AudioEffectCapture.init_method_get_buffer();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_get_buffer,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _frames
    );
    
  }
  clear_buffer() {
    AudioEffectCapture.init_method_clear_buffer();
    return _call_native_mb_no_ret(
      AudioEffectCapture._bindings.method_clear_buffer,
      this._owner,
      
    );
    
  }
  set_buffer_length(_buffer_length_seconds) {
    AudioEffectCapture.init_method_set_buffer_length();
    return _call_native_mb_no_ret(
      AudioEffectCapture._bindings.method_set_buffer_length,
      this._owner,
      _buffer_length_seconds
    );
    
  }
  get_buffer_length() {
    AudioEffectCapture.init_method_get_buffer_length();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_get_buffer_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_frames_available() {
    AudioEffectCapture.init_method_get_frames_available();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_get_frames_available,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_discarded_frames() {
    AudioEffectCapture.init_method_get_discarded_frames();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_get_discarded_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_buffer_length_frames() {
    AudioEffectCapture.init_method_get_buffer_length_frames();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_get_buffer_length_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_pushed_frames() {
    AudioEffectCapture.init_method_get_pushed_frames();
    return _call_native_mb_ret(
      AudioEffectCapture._bindings.method_get_pushed_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get buffer_length () {
  return this.get_buffer_length();
}
set buffer_length (new_value) {
  this.set_buffer_length(new_value);
}

}