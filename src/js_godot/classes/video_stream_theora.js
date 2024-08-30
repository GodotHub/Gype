import * as internal from '__internal__';
import { VideoStream } from 'src/js_godot/classes/video_stream'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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