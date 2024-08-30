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
    method_switch_to_clip_by_name;
    method_switch_to_clip;
}


export class AudioStreamPlaybackInteractive extends AudioStreamPlayback{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackInteractive");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioStreamPlaybackInteractive");
        let methodname = new StringName("switch_to_clip_by_name");
        this._bindings.method_switch_to_clip_by_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("AudioStreamPlaybackInteractive");
        let methodname = new StringName("switch_to_clip");
        this._bindings.method_switch_to_clip = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
  }
  switch_to_clip_by_name(_clip_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_switch_to_clip_by_name,
      this._owner,
      _clip_name
    );
    
  }
  switch_to_clip(_clip_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_switch_to_clip,
      this._owner,
      _clip_index
    );
    
  }
}