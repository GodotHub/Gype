import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_mix_audio;
}
@GodotClass
export class VideoStreamPlayback extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStreamPlayback");
    } else {
      super(godot_object);
    }
  }
  static init_method_mix_audio() {
    if (!this._bindings.method_mix_audio) {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("mix_audio");
      this._bindings.method_mix_audio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        93876830
      );
    }
  }

  
  
  _stop() {
  }
  _play() {
  }
  _is_playing() {
  }
  _set_paused(_paused) {
  }
  _is_paused() {
  }
  _get_length() {
  }
  _get_playback_position() {
  }
  _seek(_time) {
  }
  _set_audio_track(_idx) {
  }
  _get_texture() {
  }
  _update(_delta) {
  }
  _get_channels() {
  }
  _get_mix_rate() {
  }
  mix_audio(_num_frames, _buffer, _offset) {
    VideoStreamPlayback.init_method_mix_audio();
    return _call_native_mb_ret(
      VideoStreamPlayback._bindings.method_mix_audio,
      this._owner,
			Variant.Type.INT,
    
      _num_frames, _buffer, _offset
    );
    
  }
  

}