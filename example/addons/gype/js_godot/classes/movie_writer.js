import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_writer;
}
export class MovieWriter extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MovieWriter");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_writer() {
    if (!this.#_bindings.method_add_writer) {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("add_writer");
      this.#_bindings.method_add_writer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4023702871
      );
    }
  }

  
  
  _get_audio_mix_rate() {
  }
  _get_audio_speaker_mode() {
  }
  _handles_file(_path) {
  }
  _write_begin(_movie_size, _fps, _base_path) {
  }
  _write_frame(_frame_image, _audio_frame_block) {
  }
  _write_end() {
  }
  add_writer(_writer) {
    MovieWriter.init_method_add_writer();
    return _call_native_mb_no_ret(
      MovieWriter.#_bindings.method_add_writer,
      this._owner,
      _writer
    );
    
  }
  

}