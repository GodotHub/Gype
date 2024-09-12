import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { AudioStreamPlayback } from '@js_godot/classes/audio_stream_playback'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_play_stream;
  method_set_stream_volume;
  method_set_stream_pitch_scale;
  method_is_stream_playing;
  method_stop_stream;
}
export class AudioStreamPlaybackPolyphonic extends AudioStreamPlayback{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackPolyphonic");
    } else {
      super(godot_object);
    }
  }
  static init_method_play_stream() {
    if (!this.#_bindings.method_play_stream) {
      let classname = new StringName("AudioStreamPlaybackPolyphonic");
      let methodname = new StringName("play_stream");
      this.#_bindings.method_play_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1846744803
      );
    }
  }
  static init_method_set_stream_volume() {
    if (!this.#_bindings.method_set_stream_volume) {
      let classname = new StringName("AudioStreamPlaybackPolyphonic");
      let methodname = new StringName("set_stream_volume");
      this.#_bindings.method_set_stream_volume = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_set_stream_pitch_scale() {
    if (!this.#_bindings.method_set_stream_pitch_scale) {
      let classname = new StringName("AudioStreamPlaybackPolyphonic");
      let methodname = new StringName("set_stream_pitch_scale");
      this.#_bindings.method_set_stream_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_is_stream_playing() {
    if (!this.#_bindings.method_is_stream_playing) {
      let classname = new StringName("AudioStreamPlaybackPolyphonic");
      let methodname = new StringName("is_stream_playing");
      this.#_bindings.method_is_stream_playing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_stop_stream() {
    if (!this.#_bindings.method_stop_stream) {
      let classname = new StringName("AudioStreamPlaybackPolyphonic");
      let methodname = new StringName("stop_stream");
      this.#_bindings.method_stop_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  play_stream(_stream, _from_offset, _volume_db, _pitch_scale, _playback_type, _bus) {
    AudioStreamPlaybackPolyphonic.init_method_play_stream();
    return _call_native_mb_ret(
      AudioStreamPlaybackPolyphonic.#_bindings.method_play_stream,
      this._owner,
			Variant.Type.INT,
    
      _stream, _from_offset, _volume_db, _pitch_scale, _playback_type, _bus
    );
    
  }
  set_stream_volume(_stream, _volume_db) {
    AudioStreamPlaybackPolyphonic.init_method_set_stream_volume();
    return _call_native_mb_no_ret(
      AudioStreamPlaybackPolyphonic.#_bindings.method_set_stream_volume,
      this._owner,
      _stream, _volume_db
    );
    
  }
  set_stream_pitch_scale(_stream, _pitch_scale) {
    AudioStreamPlaybackPolyphonic.init_method_set_stream_pitch_scale();
    return _call_native_mb_no_ret(
      AudioStreamPlaybackPolyphonic.#_bindings.method_set_stream_pitch_scale,
      this._owner,
      _stream, _pitch_scale
    );
    
  }
  is_stream_playing(_stream) {
    AudioStreamPlaybackPolyphonic.init_method_is_stream_playing();
    return _call_native_mb_ret(
      AudioStreamPlaybackPolyphonic.#_bindings.method_is_stream_playing,
      this._owner,
			Variant.Type.BOOL,
    
      _stream
    );
    
  }
  stop_stream(_stream) {
    AudioStreamPlaybackPolyphonic.init_method_stop_stream();
    return _call_native_mb_no_ret(
      AudioStreamPlaybackPolyphonic.#_bindings.method_stop_stream,
      this._owner,
      _stream
    );
    
  }
  

}