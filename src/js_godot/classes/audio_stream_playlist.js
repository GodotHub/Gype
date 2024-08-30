import * as internal from '__internal__';
import { AudioStream } from 'src/js_godot/classes/audio_stream'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_stream_count;
    method_get_stream_count;
    method_get_bpm;
    method_set_list_stream;
    method_get_list_stream;
    method_set_shuffle;
    method_get_shuffle;
    method_set_fade_time;
    method_get_fade_time;
    method_set_loop;
    method_has_loop;
}


export class AudioStreamPlaylist extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaylist");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("set_stream_count");
        this._bindings.method_set_stream_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("get_stream_count");
        this._bindings.method_get_stream_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("get_bpm");
        this._bindings.method_get_bpm = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("set_list_stream");
        this._bindings.method_set_list_stream = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          111075094
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("get_list_stream");
        this._bindings.method_get_list_stream = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2739380747
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("set_shuffle");
        this._bindings.method_set_shuffle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("get_shuffle");
        this._bindings.method_get_shuffle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("set_fade_time");
        this._bindings.method_set_fade_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("get_fade_time");
        this._bindings.method_get_fade_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("set_loop");
        this._bindings.method_set_loop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AudioStreamPlaylist");
        let methodname = new StringName("has_loop");
        this._bindings.method_has_loop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_stream_count(_stream_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stream_count,
      this._owner,
      _stream_count
    );
    
  }
  get_stream_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_bpm() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bpm,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_list_stream(_stream_index, _audio_stream) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_list_stream,
      this._owner,
      _stream_index, _audio_stream
    );
    
  }
  get_list_stream(_stream_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_list_stream,
      this._owner,
			Variant.INT,
      _stream_index
    );
    
  }
  set_shuffle(_shuffle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shuffle,
      this._owner,
      _shuffle
    );
    
  }
  get_shuffle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shuffle,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_fade_time(_dec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fade_time,
      this._owner,
      _dec
    );
    
  }
  get_fade_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fade_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_loop(_loop) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop,
      this._owner,
      _loop
    );
    
  }
  has_loop() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}