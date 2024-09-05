import * as internal from '__internal__';
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_mix_audio;
}
export class VideoStreamPlayback extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStreamPlayback");
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
    return _call_native_mb_ret(
      VideoStreamPlayback._bindings.method_mix_audio,
      this._owner,
			Variant.Type.INT,
      _num_frames, _buffer, _offset
    );
    
  }
  


  static {
    this._init_bindings();
  }
}