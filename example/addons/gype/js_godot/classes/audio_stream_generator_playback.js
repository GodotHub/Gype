import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { Vector2 } from '@js_godot/variant/vector2'
import { AudioStreamPlaybackResampled } from '@js_godot/classes/audio_stream_playback_resampled'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_push_frame;
  method_can_push_buffer;
  method_push_buffer;
  method_get_frames_available;
  method_get_skips;
  method_clear_buffer;
}
export class AudioStreamGeneratorPlayback extends AudioStreamPlaybackResampled{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamGeneratorPlayback");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("push_frame");
      this._bindings.method_push_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975407249
      );
    }
    {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("can_push_buffer");
      this._bindings.method_can_push_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("push_buffer");
      this._bindings.method_push_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1361156557
      );
    }
    {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("get_frames_available");
      this._bindings.method_get_frames_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioStreamGeneratorPlayback");
      let methodname = new StringName("get_skips");
      this._bindings.method_get_skips = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_push_frame,
      this._owner,
			Variant.Type.BOOL,
      _frame
    );
    
  }
  can_push_buffer(_amount) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_can_push_buffer,
      this._owner,
			Variant.Type.BOOL,
      _amount
    );
    
  }
  push_buffer(_frames) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_push_buffer,
      this._owner,
			Variant.Type.BOOL,
      _frames
    );
    
  }
  get_frames_available() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frames_available,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_skips() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skips,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  clear_buffer() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_buffer,
      this._owner,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}