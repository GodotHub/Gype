import * as internal from '__internal__';
import { AudioStreamPlayback } from 'src/js_godot/classesaudio_stream_playback'
class _MethodBindings {
    method__mix_resampled;
    method__get_stream_sampling_rate;
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
      let methodname = new StringName("_mix_resampled");
      this._bindings.method__mix_resampled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlaybackResampled");
      let methodname = new StringName("_get_stream_sampling_rate");
      this._bindings.method__get_stream_sampling_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__mix_resampled,
      this._owner,
			Variant.Type.INT,
      _dst_buffer, _frame_count
    );
  }
  _get_stream_sampling_rate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_stream_sampling_rate,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  begin_resample() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_begin_resample,
      this._owner,
      
    );
  }
}