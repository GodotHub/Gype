import * as internal from '__internal__';
import { AudioStreamPlaybackResampled } from 'src/js_godot/classesaudio_stream_playback_resampled'
class _MethodBindings {
}


export class AudioStreamPlaybackOggVorbis extends AudioStreamPlaybackResampled{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackOggVorbis");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}