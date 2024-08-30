import * as internal from '__internal__';
import { AudioStreamPlayback } from 'src/js_godot/classes/audio_stream_playback'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_begin_resample;
}


export class AudioStreamPlaybackResampled extends AudioStreamPlayback{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackResampled");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
}