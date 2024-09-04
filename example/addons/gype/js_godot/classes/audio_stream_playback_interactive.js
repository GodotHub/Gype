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
  method_switch_to_clip_by_name;
  method_switch_to_clip;
}
export class AudioStreamPlaybackInteractive extends AudioStreamPlayback{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaybackInteractive");
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
  


  static {
    this._init_bindings();
  }
}