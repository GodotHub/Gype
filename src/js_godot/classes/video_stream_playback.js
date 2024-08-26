import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
class _MethodBindings {
    method__stop;
    method__play;
    method__is_playing;
    method__set_paused;
    method__is_paused;
    method__get_length;
    method__get_playback_position;
    method__seek;
    method__set_audio_track;
    method__get_texture;
    method__update;
    method__get_channels;
    method__get_mix_rate;
    method_mix_audio;
}


export class VideoStreamPlayback extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStreamPlayback");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_stop");
      this._bindings.method__stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_play");
      this._bindings.method__play = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_is_playing");
      this._bindings.method__is_playing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_set_paused");
      this._bindings.method__set_paused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_is_paused");
      this._bindings.method__is_paused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_get_length");
      this._bindings.method__get_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_get_playback_position");
      this._bindings.method__get_playback_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_seek");
      this._bindings.method__seek = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_set_audio_track");
      this._bindings.method__set_audio_track = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_get_texture");
      this._bindings.method__get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_update");
      this._bindings.method__update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_get_channels");
      this._bindings.method__get_channels = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("_get_mix_rate");
      this._bindings.method__get_mix_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStreamPlayback");
      let methodname = new StringName("mix_audio");
      this._bindings.method_mix_audio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        93876830
      );
    }
  }
  _stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__stop,
      this._owner,
      
    );
  }
  _play() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__play,
      this._owner,
      
    );
  }
  _is_playing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_playing,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _set_paused(_paused) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_paused,
      this._owner,
      _paused
    );
  }
  _is_paused() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_paused,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _get_playback_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_playback_position,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _seek(_time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__seek,
      this._owner,
      _time
    );
  }
  _set_audio_track(_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_audio_track,
      this._owner,
      _idx
    );
  }
  _get_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_texture,
      this._owner,
			Variant.INT,
      
    );
  }
  _update(_delta) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__update,
      this._owner,
      _delta
    );
  }
  _get_channels() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_channels,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_mix_rate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_mix_rate,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  mix_audio(_num_frames, _buffer, _offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mix_audio,
      this._owner,
			Variant.Type.INT,
      _num_frames, _buffer, _offset
    );
  }
}