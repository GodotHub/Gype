import * as internal from '__internal__';
import { VideoStream } from 'src/js_godot/classesvideo_stream'
class _MethodBindings {
}


export class VideoStreamTheora extends VideoStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStreamTheora");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}