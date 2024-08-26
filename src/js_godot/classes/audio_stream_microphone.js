import * as internal from '__internal__';
import { AudioStream } from 'src/js_godot/classesaudio_stream'
class _MethodBindings {
}


export class AudioStreamMicrophone extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamMicrophone");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}