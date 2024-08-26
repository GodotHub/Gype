import * as internal from '__internal__';
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__get_audio_mix_rate;
    method__get_audio_speaker_mode;
    method__handles_file;
    method__write_begin;
    method__write_frame;
    method__write_end;
    method_add_writer;
}


export class MovieWriter extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MovieWriter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("_get_audio_mix_rate");
      this._bindings.method__get_audio_mix_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("_get_audio_speaker_mode");
      this._bindings.method__get_audio_speaker_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("_handles_file");
      this._bindings.method__handles_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("_write_begin");
      this._bindings.method__write_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("_write_frame");
      this._bindings.method__write_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("_write_end");
      this._bindings.method__write_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MovieWriter");
      let methodname = new StringName("add_writer");
      this._bindings.method_add_writer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4023702871
      );
    }
  }
  _get_audio_mix_rate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_audio_mix_rate,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_audio_speaker_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_audio_speaker_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  _handles_file(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handles_file,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
  }
  _write_begin(_movie_size, _fps, _base_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__write_begin,
      this._owner,
			Variant.INT,
      _movie_size, _fps, _base_path
    );
  }
  _write_frame(_frame_image, _audio_frame_block) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__write_frame,
      this._owner,
			Variant.INT,
      _frame_image, _audio_frame_block
    );
  }
  _write_end() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__write_end,
      this._owner,
      
    );
  }
  add_writer(_writer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_writer,
      this._owner,
      _writer
    );
  }
}