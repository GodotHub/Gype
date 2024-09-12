import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Control } from '@js_godot/classes/control'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStreamPlayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_stream() {
    if (!this.#_bindings.method_set_stream) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_stream");
      this.#_bindings.method_set_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2317102564
      );
    }
  }
  static init_method_get_stream() {
    if (!this.#_bindings.method_get_stream) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream");
      this.#_bindings.method_get_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        438621487
      );
    }
  }
  static init_method_play() {
    if (!this.#_bindings.method_play) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("play");
      this.#_bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_stop() {
    if (!this.#_bindings.method_stop) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("stop");
      this.#_bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_playing() {
    if (!this.#_bindings.method_is_playing) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("is_playing");
      this.#_bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_paused() {
    if (!this.#_bindings.method_set_paused) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_paused");
      this.#_bindings.method_set_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_paused() {
    if (!this.#_bindings.method_is_paused) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("is_paused");
      this.#_bindings.method_is_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_loop() {
    if (!this.#_bindings.method_set_loop) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_loop");
      this.#_bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_loop() {
    if (!this.#_bindings.method_has_loop) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("has_loop");
      this.#_bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_volume() {
    if (!this.#_bindings.method_set_volume) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_volume");
      this.#_bindings.method_set_volume = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volume() {
    if (!this.#_bindings.method_get_volume) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_volume");
      this.#_bindings.method_get_volume = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volume_db() {
    if (!this.#_bindings.method_set_volume_db) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_volume_db");
      this.#_bindings.method_set_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volume_db() {
    if (!this.#_bindings.method_get_volume_db) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_volume_db");
      this.#_bindings.method_get_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_audio_track() {
    if (!this.#_bindings.method_set_audio_track) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_audio_track");
      this.#_bindings.method_set_audio_track = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_audio_track() {
    if (!this.#_bindings.method_get_audio_track) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_audio_track");
      this.#_bindings.method_get_audio_track = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_stream_name() {
    if (!this.#_bindings.method_get_stream_name) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream_name");
      this.#_bindings.method_get_stream_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_stream_length() {
    if (!this.#_bindings.method_get_stream_length) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream_length");
      this.#_bindings.method_get_stream_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_stream_position() {
    if (!this.#_bindings.method_set_stream_position) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_stream_position");
      this.#_bindings.method_set_stream_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_stream_position() {
    if (!this.#_bindings.method_get_stream_position) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_stream_position");
      this.#_bindings.method_get_stream_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_autoplay() {
    if (!this.#_bindings.method_set_autoplay) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_autoplay");
      this.#_bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_autoplay() {
    if (!this.#_bindings.method_has_autoplay) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("has_autoplay");
      this.#_bindings.method_has_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_expand() {
    if (!this.#_bindings.method_set_expand) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_expand");
      this.#_bindings.method_set_expand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_expand() {
    if (!this.#_bindings.method_has_expand) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("has_expand");
      this.#_bindings.method_has_expand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_buffering_msec() {
    if (!this.#_bindings.method_set_buffering_msec) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_buffering_msec");
      this.#_bindings.method_set_buffering_msec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_buffering_msec() {
    if (!this.#_bindings.method_get_buffering_msec) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_buffering_msec");
      this.#_bindings.method_get_buffering_msec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_bus() {
    if (!this.#_bindings.method_set_bus) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("set_bus");
      this.#_bindings.method_set_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_bus() {
    if (!this.#_bindings.method_get_bus) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_bus");
      this.#_bindings.method_get_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_get_video_texture() {
    if (!this.#_bindings.method_get_video_texture) {
      let classname = new StringName("VideoStreamPlayer");
      let methodname = new StringName("get_video_texture");
      this.#_bindings.method_get_video_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }

  
  
  set_stream(_stream) {
    VideoStreamPlayer.init_method_set_stream();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_stream,
      this._owner,
      _stream
    );
    
  }
  get_stream() {
    VideoStreamPlayer.init_method_get_stream();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_stream,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  play() {
    VideoStreamPlayer.init_method_play();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_play,
      this._owner,
      
    );
    
  }
  stop() {
    VideoStreamPlayer.init_method_stop();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_stop,
      this._owner,
      
    );
    
  }
  is_playing() {
    VideoStreamPlayer.init_method_is_playing();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_paused(_paused) {
    VideoStreamPlayer.init_method_set_paused();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_paused,
      this._owner,
      _paused
    );
    
  }
  is_paused() {
    VideoStreamPlayer.init_method_is_paused();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_is_paused,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_loop(_loop) {
    VideoStreamPlayer.init_method_set_loop();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_loop,
      this._owner,
      _loop
    );
    
  }
  has_loop() {
    VideoStreamPlayer.init_method_has_loop();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_volume(_volume) {
    VideoStreamPlayer.init_method_set_volume();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_volume,
      this._owner,
      _volume
    );
    
  }
  get_volume() {
    VideoStreamPlayer.init_method_get_volume();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_volume,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volume_db(_db) {
    VideoStreamPlayer.init_method_set_volume_db();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_volume_db,
      this._owner,
      _db
    );
    
  }
  get_volume_db() {
    VideoStreamPlayer.init_method_get_volume_db();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_volume_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_audio_track(_track) {
    VideoStreamPlayer.init_method_set_audio_track();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_audio_track,
      this._owner,
      _track
    );
    
  }
  get_audio_track() {
    VideoStreamPlayer.init_method_get_audio_track();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_audio_track,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_stream_name() {
    VideoStreamPlayer.init_method_get_stream_name();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_stream_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_stream_length() {
    VideoStreamPlayer.init_method_get_stream_length();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_stream_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_stream_position(_position) {
    VideoStreamPlayer.init_method_set_stream_position();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_stream_position,
      this._owner,
      _position
    );
    
  }
  get_stream_position() {
    VideoStreamPlayer.init_method_get_stream_position();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_stream_position,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_autoplay(_enabled) {
    VideoStreamPlayer.init_method_set_autoplay();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_autoplay,
      this._owner,
      _enabled
    );
    
  }
  has_autoplay() {
    VideoStreamPlayer.init_method_has_autoplay();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_has_autoplay,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_expand(_enable) {
    VideoStreamPlayer.init_method_set_expand();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_expand,
      this._owner,
      _enable
    );
    
  }
  has_expand() {
    VideoStreamPlayer.init_method_has_expand();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_has_expand,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_buffering_msec(_msec) {
    VideoStreamPlayer.init_method_set_buffering_msec();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_buffering_msec,
      this._owner,
      _msec
    );
    
  }
  get_buffering_msec() {
    VideoStreamPlayer.init_method_get_buffering_msec();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_buffering_msec,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_bus(_bus) {
    VideoStreamPlayer.init_method_set_bus();
    return _call_native_mb_no_ret(
      VideoStreamPlayer.#_bindings.method_set_bus,
      this._owner,
      _bus
    );
    
  }
  get_bus() {
    VideoStreamPlayer.init_method_get_bus();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_bus,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_video_texture() {
    VideoStreamPlayer.init_method_get_video_texture();
    return _call_native_mb_ret(
      VideoStreamPlayer.#_bindings.method_get_video_texture,
      this._owner,
			Variant.Type.OBJECT,
      
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

}