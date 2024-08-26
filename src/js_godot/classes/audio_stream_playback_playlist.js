import * as internal from '__internal__';
import { AudioStreamPlayback } from 'src/js_godot/classesaudio_stream_playback'
class _MethodBindings {
}


export class AudioStreamPlaybackPlaylist extends AudioStreamPlayback{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackPlaylist");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}