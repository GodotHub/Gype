import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stream;
  method_get_stream;
  method_play;
  method_stop;
  method_is_playing;
  method_set_paused;
  method_is_paused;
  method_set_loop;
  method_has_loop;
  method_set_volume;
  method_get_volume;
  method_set_volume_db;
  method_get_volume_db;
  method_set_audio_track;
  method_get_audio_track;
  method_get_stream_name;
  method_get_stream_length;
  method_set_stream_position;
  method_get_stream_position;
  method_set_autoplay;
  method_has_autoplay;
  method_set_expand;
  method_has_expand;
  method_set_buffering_msec;
  method_get_buffering_msec;
  method_set_bus;
  method_get_bus;
  method_get_video_texture;
}
export class VideoStreamPlayer extends Control{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStreamPlayer");
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
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_stream");
      this._bindings.method_set_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2317102564
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream");
      this._bindings.method_get_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        438621487
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("play");
      this._bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_paused");
      this._bindings.method_set_paused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("is_paused");
      this._bindings.method_is_paused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_loop");
      this._bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("has_loop");
      this._bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_volume");
      this._bindings.method_set_volume = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_volume");
      this._bindings.method_get_volume = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_volume_db");
      this._bindings.method_set_volume_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_volume_db");
      this._bindings.method_get_volume_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_audio_track");
      this._bindings.method_set_audio_track = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_audio_track");
      this._bindings.method_get_audio_track = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream_name");
      this._bindings.method_get_stream_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream_length");
      this._bindings.method_get_stream_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_stream_position");
      this._bindings.method_set_stream_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream_position");
      this._bindings.method_get_stream_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_autoplay");
      this._bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("has_autoplay");
      this._bindings.method_has_autoplay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_expand");
      this._bindings.method_set_expand = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("has_expand");
      this._bindings.method_has_expand = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_buffering_msec");
      this._bindings.method_set_buffering_msec = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_buffering_msec");
      this._bindings.method_get_buffering_msec = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_bus");
      this._bindings.method_set_bus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_bus");
      this._bindings.method_get_bus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_video_texture");
      this._bindings.method_get_video_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
  }
  set_stream(_stream) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stream,
      this._owner,
      _stream
    );
    
  }
  get_stream() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream,
      this._owner,
			Variant.INT,
      
    );
    
  }
  play() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play,
      this._owner,
      
    );
    
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
    
  }
  is_playing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_paused(_paused) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_paused,
      this._owner,
      _paused
    );
    
  }
  is_paused() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_paused,
      this._owner,
			Variant.Type.BOOL,
      
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
  set_volume(_volume) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volume,
      this._owner,
      _volume
    );
    
  }
  get_volume() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volume,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_volume_db(_db) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volume_db,
      this._owner,
      _db
    );
    
  }
  get_volume_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volume_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_audio_track(_track) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_audio_track,
      this._owner,
      _track
    );
    
  }
  get_audio_track() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_audio_track,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_stream_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_stream_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_stream_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stream_position,
      this._owner,
      _position
    );
    
  }
  get_stream_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream_position,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_autoplay(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autoplay,
      this._owner,
      _enabled
    );
    
  }
  has_autoplay() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_autoplay,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_expand(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_expand,
      this._owner,
      _enable
    );
    
  }
  has_expand() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_expand,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_buffering_msec(_msec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_buffering_msec,
      this._owner,
      _msec
    );
    
  }
  get_buffering_msec() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buffering_msec,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_bus(_bus) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bus,
      this._owner,
      _bus
    );
    
  }
  get_bus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bus,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_video_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_video_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get audio_track () {
  return this.get_audio_track();
}
set audio_track (new_value) {
  this.set_audio_track(new_value);
}
get stream () {
  return this.get_stream();
}
set stream (new_value) {
  this.set_stream(new_value);
}
get volume_db () {
  return this.get_volume_db();
}
set volume_db (new_value) {
  this.set_volume_db(new_value);
}
get volume () {
  return this.get_volume();
}
set volume (new_value) {
  this.set_volume(new_value);
}
get autoplay () {
  return this.has_autoplay();
}
set autoplay (new_value) {
  this.set_autoplay(new_value);
}
get paused () {
  return this.is_paused();
}
set paused (new_value) {
  this.set_paused(new_value);
}
get expand () {
  return this.has_expand();
}
set expand (new_value) {
  this.set_expand(new_value);
}
get loop () {
  return this.has_loop();
}
set loop (new_value) {
  this.set_loop(new_value);
}
get buffering_msec () {
  return this.get_buffering_msec();
}
set buffering_msec (new_value) {
  this.set_buffering_msec(new_value);
}
get stream_position () {
  return this.get_stream_position();
}
set stream_position (new_value) {
  this.set_stream_position(new_value);
}
get bus () {
  return this.get_bus();
}
set bus (new_value) {
  this.set_bus(new_value);
}


  static {
    this._init_bindings();
  }
}