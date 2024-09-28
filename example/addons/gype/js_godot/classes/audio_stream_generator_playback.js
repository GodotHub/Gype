import * as internal from '__internal__';
import { AudioStreamPlaybackResampled } from '@js_godot/classes/audio_stream_playback_resampled'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_push_frame;
  method_can_push_buffer;
  method_push_buffer;
  method_get_frames_available;
  method_get_skips;
  method_clear_buffer;
}
@GodotClass
export class AudioStreamGeneratorPlayback extends AudioStreamPlaybackResampled{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamGeneratorPlayback");
    } else {
      super(godot_object);
    }
  }
  static init_method_push_frame() {
    if (!this._bindings.method_push_frame) {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("push_frame");
      this._bindings.method_push_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3975407249
      );
    }
  }
  static init_method_can_push_buffer() {
    if (!this._bindings.method_can_push_buffer) {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("can_push_buffer");
      this._bindings.method_can_push_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_push_buffer() {
    if (!this._bindings.method_push_buffer) {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("push_buffer");
      this._bindings.method_push_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1361156557
      );
    }
  }
  static init_method_get_frames_available() {
    if (!this._bindings.method_get_frames_available) {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("get_frames_available");
      this._bindings.method_get_frames_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_skips() {
    if (!this._bindings.method_get_skips) {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("get_skips");
      this._bindings.method_get_skips = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_clear_buffer() {
    if (!this._bindings.method_clear_buffer) {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("clear_buffer");
      this._bindings.method_clear_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  push_frame(_frame) {
    AudioStreamGeneratorPlayback.init_method_push_frame();
    return _call_native_mb_ret(
      AudioStreamGeneratorPlayback._bindings.method_push_frame,
      this._owner,
			Variant.Type.BOOL,
    
      _frame
    );
    
  }
  can_push_buffer(_amount) {
    AudioStreamGeneratorPlayback.init_method_can_push_buffer();
    return _call_native_mb_ret(
      AudioStreamGeneratorPlayback._bindings.method_can_push_buffer,
      this._owner,
			Variant.Type.BOOL,
    
      _amount
    );
    
  }
  push_buffer(_frames) {
    AudioStreamGeneratorPlayback.init_method_push_buffer();
    return _call_native_mb_ret(
      AudioStreamGeneratorPlayback._bindings.method_push_buffer,
      this._owner,
			Variant.Type.BOOL,
    
      _frames
    );
    
  }
  get_frames_available() {
    AudioStreamGeneratorPlayback.init_method_get_frames_available();
    return _call_native_mb_ret(
      AudioStreamGeneratorPlayback._bindings.method_get_frames_available,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_skips() {
    AudioStreamGeneratorPlayback.init_method_get_skips();
    return _call_native_mb_ret(
      AudioStreamGeneratorPlayback._bindings.method_get_skips,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  clear_buffer() {
    AudioStreamGeneratorPlayback.init_method_clear_buffer();
    return _call_native_mb_no_ret(
      AudioStreamGeneratorPlayback._bindings.method_clear_buffer,
      this._owner,
      
    );
    
  }
  

}