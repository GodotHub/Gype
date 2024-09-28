import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_stream;
  method_get_stream;
  method_set_volume_db;
  method_get_volume_db;
  method_set_pitch_scale;
  method_get_pitch_scale;
  method_play;
  method_seek;
  method_stop;
  method_is_playing;
  method_get_playback_position;
  method_set_bus;
  method_get_bus;
  method_set_autoplay;
  method_is_autoplay_enabled;
  method_set_mix_target;
  method_get_mix_target;
  method_set_stream_paused;
  method_get_stream_paused;
  method_set_max_polyphony;
  method_get_max_polyphony;
  method_has_stream_playback;
  method_get_stream_playback;
  method_set_playback_type;
  method_get_playback_type;
}
@GodotClass
export class AudioStreamPlayer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_stream() {
    if (!this._bindings.method_set_stream) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_stream");
      this._bindings.method_set_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2210767741
      );
    }
  }
  static init_method_get_stream() {
    if (!this._bindings.method_get_stream) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_stream");
      this._bindings.method_get_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        160907539
      );
    }
  }
  static init_method_set_volume_db() {
    if (!this._bindings.method_set_volume_db) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_volume_db");
      this._bindings.method_set_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volume_db() {
    if (!this._bindings.method_get_volume_db) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_volume_db");
      this._bindings.method_get_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pitch_scale() {
    if (!this._bindings.method_set_pitch_scale) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_pitch_scale");
      this._bindings.method_set_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pitch_scale() {
    if (!this._bindings.method_get_pitch_scale) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_pitch_scale");
      this._bindings.method_get_pitch_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_play() {
    if (!this._bindings.method_play) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("play");
      this._bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1958160172
      );
    }
  }
  static init_method_seek() {
    if (!this._bindings.method_seek) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("seek");
      this._bindings.method_seek = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_stop() {
    if (!this._bindings.method_stop) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_playing() {
    if (!this._bindings.method_is_playing) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_playback_position() {
    if (!this._bindings.method_get_playback_position) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_playback_position");
      this._bindings.method_get_playback_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_bus() {
    if (!this._bindings.method_set_bus) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_bus");
      this._bindings.method_set_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_bus() {
    if (!this._bindings.method_get_bus) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_bus");
      this._bindings.method_get_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_autoplay() {
    if (!this._bindings.method_set_autoplay) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_autoplay");
      this._bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_autoplay_enabled() {
    if (!this._bindings.method_is_autoplay_enabled) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("is_autoplay_enabled");
      this._bindings.method_is_autoplay_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_mix_target() {
    if (!this._bindings.method_set_mix_target) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_mix_target");
      this._bindings.method_set_mix_target = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2300306138
      );
    }
  }
  static init_method_get_mix_target() {
    if (!this._bindings.method_get_mix_target) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_mix_target");
      this._bindings.method_get_mix_target = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        172807476
      );
    }
  }
  static init_method_set_stream_paused() {
    if (!this._bindings.method_set_stream_paused) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_stream_paused");
      this._bindings.method_set_stream_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_stream_paused() {
    if (!this._bindings.method_get_stream_paused) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_stream_paused");
      this._bindings.method_get_stream_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_max_polyphony() {
    if (!this._bindings.method_set_max_polyphony) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_max_polyphony");
      this._bindings.method_set_max_polyphony = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_polyphony() {
    if (!this._bindings.method_get_max_polyphony) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_max_polyphony");
      this._bindings.method_get_max_polyphony = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_stream_playback() {
    if (!this._bindings.method_has_stream_playback) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("has_stream_playback");
      this._bindings.method_has_stream_playback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_stream_playback() {
    if (!this._bindings.method_get_stream_playback) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_stream_playback");
      this._bindings.method_get_stream_playback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        210135309
      );
    }
  }
  static init_method_set_playback_type() {
    if (!this._bindings.method_set_playback_type) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("set_playback_type");
      this._bindings.method_set_playback_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        725473817
      );
    }
  }
  static init_method_get_playback_type() {
    if (!this._bindings.method_get_playback_type) {
      let classname = new StringName("AudioStreamPlayer");
      let methodname = new StringName("get_playback_type");
      this._bindings.method_get_playback_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4011264623
      );
    }
  }

  
  
  set_stream(_stream) {
    AudioStreamPlayer.init_method_set_stream();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_stream,
      this._owner,
      _stream
    );
    
  }
  get_stream() {
    AudioStreamPlayer.init_method_get_stream();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_stream,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_volume_db(_volume_db) {
    AudioStreamPlayer.init_method_set_volume_db();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_volume_db,
      this._owner,
      _volume_db
    );
    
  }
  get_volume_db() {
    AudioStreamPlayer.init_method_get_volume_db();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_volume_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pitch_scale(_pitch_scale) {
    AudioStreamPlayer.init_method_set_pitch_scale();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_pitch_scale,
      this._owner,
      _pitch_scale
    );
    
  }
  get_pitch_scale() {
    AudioStreamPlayer.init_method_get_pitch_scale();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_pitch_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  play(_from_position) {
    AudioStreamPlayer.init_method_play();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_play,
      this._owner,
      _from_position
    );
    
  }
  seek(_to_position) {
    AudioStreamPlayer.init_method_seek();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_seek,
      this._owner,
      _to_position
    );
    
  }
  stop() {
    AudioStreamPlayer.init_method_stop();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_stop,
      this._owner,
      
    );
    
  }
  is_playing() {
    AudioStreamPlayer.init_method_is_playing();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_playback_position() {
    AudioStreamPlayer.init_method_get_playback_position();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_playback_position,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bus(_bus) {
    AudioStreamPlayer.init_method_set_bus();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_bus,
      this._owner,
      _bus
    );
    
  }
  get_bus() {
    AudioStreamPlayer.init_method_get_bus();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_bus,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_autoplay(_enable) {
    AudioStreamPlayer.init_method_set_autoplay();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_autoplay,
      this._owner,
      _enable
    );
    
  }
  is_autoplay_enabled() {
    AudioStreamPlayer.init_method_is_autoplay_enabled();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_is_autoplay_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_mix_target(_mix_target) {
    AudioStreamPlayer.init_method_set_mix_target();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_mix_target,
      this._owner,
      _mix_target
    );
    
  }
  get_mix_target() {
    AudioStreamPlayer.init_method_get_mix_target();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_mix_target,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_stream_paused(_pause) {
    AudioStreamPlayer.init_method_set_stream_paused();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_stream_paused,
      this._owner,
      _pause
    );
    
  }
  get_stream_paused() {
    AudioStreamPlayer.init_method_get_stream_paused();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_stream_paused,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_max_polyphony(_max_polyphony) {
    AudioStreamPlayer.init_method_set_max_polyphony();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_max_polyphony,
      this._owner,
      _max_polyphony
    );
    
  }
  get_max_polyphony() {
    AudioStreamPlayer.init_method_get_max_polyphony();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_max_polyphony,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_stream_playback() {
    AudioStreamPlayer.init_method_has_stream_playback();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_has_stream_playback,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_stream_playback() {
    AudioStreamPlayer.init_method_get_stream_playback();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_stream_playback,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_playback_type(_playback_type) {
    AudioStreamPlayer.init_method_set_playback_type();
    return _call_native_mb_no_ret(
      AudioStreamPlayer._bindings.method_set_playback_type,
      this._owner,
      _playback_type
    );
    
  }
  get_playback_type() {
    AudioStreamPlayer.init_method_get_playback_type();
    return _call_native_mb_ret(
      AudioStreamPlayer._bindings.method_get_playback_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
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
get pitch_scale () {
  return this.get_pitch_scale();
}
set pitch_scale (new_value) {
  this.set_pitch_scale(new_value);
}
get playing () {
  return this.is_playing();
}
set playing (new_value) {
  this._set_playing(new_value);
}
get autoplay () {
  return this.is_autoplay_enabled();
}
set autoplay (new_value) {
  this.set_autoplay(new_value);
}
get stream_paused () {
  return this.get_stream_paused();
}
set stream_paused (new_value) {
  this.set_stream_paused(new_value);
}
get mix_target () {
  return this.get_mix_target();
}
set mix_target (new_value) {
  this.set_mix_target(new_value);
}
get max_polyphony () {
  return this.get_max_polyphony();
}
set max_polyphony (new_value) {
  this.set_max_polyphony(new_value);
}
get bus () {
  return this.get_bus();
}
set bus (new_value) {
  this.set_bus(new_value);
}
get playback_type () {
  return this.get_playback_type();
}
set playback_type (new_value) {
  this.set_playback_type(new_value);
}

  static MixTarget = {
    MIX_TARGET_STEREO: 0,
    MIX_TARGET_SURROUND: 1,
    MIX_TARGET_CENTER: 2,
  }
}