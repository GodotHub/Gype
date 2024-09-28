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
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_begin_resample;
}
@GodotClass
export class AudioStreamPlaybackResampled extends AudioStreamPlayback{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackResampled");
    } else {
      super(godot_object);
    }
  }
  static init_method_begin_resample() {
    if (!this._bindings.method_begin_resample) {
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
    AudioStreamPlaybackResampled.init_method_begin_resample();
    return _call_native_mb_no_ret(
      AudioStreamPlaybackResampled._bindings.method_begin_resample,
      this._owner,
      
    );
    
  }
  

}