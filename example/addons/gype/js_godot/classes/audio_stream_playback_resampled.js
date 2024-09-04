import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { AudioStreamPlayback } from '@js_godot/classes/audio_stream_playback'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_begin_resample;
}
export class AudioStreamPlaybackResampled extends AudioStreamPlayback{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackResampled");
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
      let classname = new StringName("AudioStreamPlaybackResampled");
      let methodname = new StringName("begin_resample");
      this._bindings.method_begin_resample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  _mix_resampled(_dst_buffer, _frame_count) {
  }
  _get_stream_sampling_rate() {
  }
  begin_resample() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_begin_resample,
      this._owner,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}