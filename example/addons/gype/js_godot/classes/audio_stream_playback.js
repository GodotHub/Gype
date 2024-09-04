import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_sample_playback;
  method_get_sample_playback;
}
export class AudioStreamPlayback extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlayback");
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
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("set_sample_playback");
      this._bindings.method_set_sample_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3195455091
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("get_sample_playback");
      this._bindings.method_get_sample_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3482738536
      );
    }
  }
  _start(_from_pos) {
  }
  _stop() {
  }
  _is_playing() {
  }
  _get_loop_count() {
  }
  _get_playback_position() {
  }
  _seek(_position) {
  }
  _mix(_buffer, _rate_scale, _frames) {
  }
  _tag_used_streams() {
  }
  _set_parameter(_name, _value) {
  }
  _get_parameter(_name) {
  }
  set_sample_playback(_playback_sample) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sample_playback,
      this._owner,
      _playback_sample
    );
    
  }
  get_sample_playback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sample_playback,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}