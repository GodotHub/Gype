import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
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
  method_set_unit_size;
  method_get_unit_size;
  method_set_max_db;
  method_get_max_db;
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
  method_set_max_distance;
  method_get_max_distance;
  method_set_area_mask;
  method_get_area_mask;
  method_set_emission_angle;
  method_get_emission_angle;
  method_set_emission_angle_enabled;
  method_is_emission_angle_enabled;
  method_set_emission_angle_filter_attenuation_db;
  method_get_emission_angle_filter_attenuation_db;
  method_set_attenuation_filter_cutoff_hz;
  method_get_attenuation_filter_cutoff_hz;
  method_set_attenuation_filter_db;
  method_get_attenuation_filter_db;
  method_set_attenuation_model;
  method_get_attenuation_model;
  method_set_doppler_tracking;
  method_get_doppler_tracking;
  method_set_stream_paused;
  method_get_stream_paused;
  method_set_max_polyphony;
  method_get_max_polyphony;
  method_set_panning_strength;
  method_get_panning_strength;
  method_has_stream_playback;
  method_get_stream_playback;
  method_set_playback_type;
  method_get_playback_type;
}
@GodotClass
export class AudioStreamPlayer3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlayer3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_stream() {
    if (!this._bindings.method_set_stream) {
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_volume_db");
      this._bindings.method_get_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_unit_size() {
    if (!this._bindings.method_set_unit_size) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_unit_size");
      this._bindings.method_set_unit_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_unit_size() {
    if (!this._bindings.method_get_unit_size) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_unit_size");
      this._bindings.method_get_unit_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_db() {
    if (!this._bindings.method_set_max_db) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_max_db");
      this._bindings.method_set_max_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_db() {
    if (!this._bindings.method_get_max_db) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_max_db");
      this._bindings.method_get_max_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pitch_scale() {
    if (!this._bindings.method_set_pitch_scale) {
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("is_autoplay_enabled");
      this._bindings.method_is_autoplay_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_max_distance() {
    if (!this._bindings.method_set_max_distance) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_max_distance");
      this._bindings.method_set_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_distance() {
    if (!this._bindings.method_get_max_distance) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_max_distance");
      this._bindings.method_get_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_area_mask() {
    if (!this._bindings.method_set_area_mask) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_area_mask");
      this._bindings.method_set_area_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_area_mask() {
    if (!this._bindings.method_get_area_mask) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_area_mask");
      this._bindings.method_get_area_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_emission_angle() {
    if (!this._bindings.method_set_emission_angle) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_emission_angle");
      this._bindings.method_set_emission_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_emission_angle() {
    if (!this._bindings.method_get_emission_angle) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_emission_angle");
      this._bindings.method_get_emission_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_emission_angle_enabled() {
    if (!this._bindings.method_set_emission_angle_enabled) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_emission_angle_enabled");
      this._bindings.method_set_emission_angle_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_emission_angle_enabled() {
    if (!this._bindings.method_is_emission_angle_enabled) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("is_emission_angle_enabled");
      this._bindings.method_is_emission_angle_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_emission_angle_filter_attenuation_db() {
    if (!this._bindings.method_set_emission_angle_filter_attenuation_db) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_emission_angle_filter_attenuation_db");
      this._bindings.method_set_emission_angle_filter_attenuation_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_emission_angle_filter_attenuation_db() {
    if (!this._bindings.method_get_emission_angle_filter_attenuation_db) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_emission_angle_filter_attenuation_db");
      this._bindings.method_get_emission_angle_filter_attenuation_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_attenuation_filter_cutoff_hz() {
    if (!this._bindings.method_set_attenuation_filter_cutoff_hz) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_attenuation_filter_cutoff_hz");
      this._bindings.method_set_attenuation_filter_cutoff_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_attenuation_filter_cutoff_hz() {
    if (!this._bindings.method_get_attenuation_filter_cutoff_hz) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_attenuation_filter_cutoff_hz");
      this._bindings.method_get_attenuation_filter_cutoff_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_attenuation_filter_db() {
    if (!this._bindings.method_set_attenuation_filter_db) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_attenuation_filter_db");
      this._bindings.method_set_attenuation_filter_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_attenuation_filter_db() {
    if (!this._bindings.method_get_attenuation_filter_db) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_attenuation_filter_db");
      this._bindings.method_get_attenuation_filter_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_attenuation_model() {
    if (!this._bindings.method_set_attenuation_model) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_attenuation_model");
      this._bindings.method_set_attenuation_model = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2988086229
      );
    }
  }
  static init_method_get_attenuation_model() {
    if (!this._bindings.method_get_attenuation_model) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_attenuation_model");
      this._bindings.method_get_attenuation_model = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3035106060
      );
    }
  }
  static init_method_set_doppler_tracking() {
    if (!this._bindings.method_set_doppler_tracking) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_doppler_tracking");
      this._bindings.method_set_doppler_tracking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3968161450
      );
    }
  }
  static init_method_get_doppler_tracking() {
    if (!this._bindings.method_get_doppler_tracking) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_doppler_tracking");
      this._bindings.method_get_doppler_tracking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1702418664
      );
    }
  }
  static init_method_set_stream_paused() {
    if (!this._bindings.method_set_stream_paused) {
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_max_polyphony");
      this._bindings.method_get_max_polyphony = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_panning_strength() {
    if (!this._bindings.method_set_panning_strength) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("set_panning_strength");
      this._bindings.method_set_panning_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_panning_strength() {
    if (!this._bindings.method_get_panning_strength) {
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_panning_strength");
      this._bindings.method_get_panning_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_has_stream_playback() {
    if (!this._bindings.method_has_stream_playback) {
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
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
      let classname = new StringName("AudioStreamPlayer3D");
      let methodname = new StringName("get_playback_type");
      this._bindings.method_get_playback_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4011264623
      );
    }
  }

  
  
  set_stream(_stream) {
    AudioStreamPlayer3D.init_method_set_stream();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_stream,
      this._owner,
      _stream
    );
    
  }
  get_stream() {
    AudioStreamPlayer3D.init_method_get_stream();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_stream,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_volume_db(_volume_db) {
    AudioStreamPlayer3D.init_method_set_volume_db();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_volume_db,
      this._owner,
      _volume_db
    );
    
  }
  get_volume_db() {
    AudioStreamPlayer3D.init_method_get_volume_db();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_volume_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_unit_size(_unit_size) {
    AudioStreamPlayer3D.init_method_set_unit_size();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_unit_size,
      this._owner,
      _unit_size
    );
    
  }
  get_unit_size() {
    AudioStreamPlayer3D.init_method_get_unit_size();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_unit_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_db(_max_db) {
    AudioStreamPlayer3D.init_method_set_max_db();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_max_db,
      this._owner,
      _max_db
    );
    
  }
  get_max_db() {
    AudioStreamPlayer3D.init_method_get_max_db();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_max_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pitch_scale(_pitch_scale) {
    AudioStreamPlayer3D.init_method_set_pitch_scale();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_pitch_scale,
      this._owner,
      _pitch_scale
    );
    
  }
  get_pitch_scale() {
    AudioStreamPlayer3D.init_method_get_pitch_scale();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_pitch_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  play(_from_position) {
    AudioStreamPlayer3D.init_method_play();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_play,
      this._owner,
      _from_position
    );
    
  }
  seek(_to_position) {
    AudioStreamPlayer3D.init_method_seek();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_seek,
      this._owner,
      _to_position
    );
    
  }
  stop() {
    AudioStreamPlayer3D.init_method_stop();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_stop,
      this._owner,
      
    );
    
  }
  is_playing() {
    AudioStreamPlayer3D.init_method_is_playing();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_playback_position() {
    AudioStreamPlayer3D.init_method_get_playback_position();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_playback_position,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bus(_bus) {
    AudioStreamPlayer3D.init_method_set_bus();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_bus,
      this._owner,
      _bus
    );
    
  }
  get_bus() {
    AudioStreamPlayer3D.init_method_get_bus();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_bus,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_autoplay(_enable) {
    AudioStreamPlayer3D.init_method_set_autoplay();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_autoplay,
      this._owner,
      _enable
    );
    
  }
  is_autoplay_enabled() {
    AudioStreamPlayer3D.init_method_is_autoplay_enabled();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_is_autoplay_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_max_distance(_meters) {
    AudioStreamPlayer3D.init_method_set_max_distance();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_max_distance,
      this._owner,
      _meters
    );
    
  }
  get_max_distance() {
    AudioStreamPlayer3D.init_method_get_max_distance();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_max_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_area_mask(_mask) {
    AudioStreamPlayer3D.init_method_set_area_mask();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_area_mask,
      this._owner,
      _mask
    );
    
  }
  get_area_mask() {
    AudioStreamPlayer3D.init_method_get_area_mask();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_area_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_emission_angle(_degrees) {
    AudioStreamPlayer3D.init_method_set_emission_angle();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_emission_angle,
      this._owner,
      _degrees
    );
    
  }
  get_emission_angle() {
    AudioStreamPlayer3D.init_method_get_emission_angle();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_emission_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_emission_angle_enabled(_enabled) {
    AudioStreamPlayer3D.init_method_set_emission_angle_enabled();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_emission_angle_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_emission_angle_enabled() {
    AudioStreamPlayer3D.init_method_is_emission_angle_enabled();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_is_emission_angle_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_emission_angle_filter_attenuation_db(_db) {
    AudioStreamPlayer3D.init_method_set_emission_angle_filter_attenuation_db();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_emission_angle_filter_attenuation_db,
      this._owner,
      _db
    );
    
  }
  get_emission_angle_filter_attenuation_db() {
    AudioStreamPlayer3D.init_method_get_emission_angle_filter_attenuation_db();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_emission_angle_filter_attenuation_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_attenuation_filter_cutoff_hz(_degrees) {
    AudioStreamPlayer3D.init_method_set_attenuation_filter_cutoff_hz();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_attenuation_filter_cutoff_hz,
      this._owner,
      _degrees
    );
    
  }
  get_attenuation_filter_cutoff_hz() {
    AudioStreamPlayer3D.init_method_get_attenuation_filter_cutoff_hz();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_attenuation_filter_cutoff_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_attenuation_filter_db(_db) {
    AudioStreamPlayer3D.init_method_set_attenuation_filter_db();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_attenuation_filter_db,
      this._owner,
      _db
    );
    
  }
  get_attenuation_filter_db() {
    AudioStreamPlayer3D.init_method_get_attenuation_filter_db();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_attenuation_filter_db,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_attenuation_model(_model) {
    AudioStreamPlayer3D.init_method_set_attenuation_model();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_attenuation_model,
      this._owner,
      _model
    );
    
  }
  get_attenuation_model() {
    AudioStreamPlayer3D.init_method_get_attenuation_model();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_attenuation_model,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_doppler_tracking(_mode) {
    AudioStreamPlayer3D.init_method_set_doppler_tracking();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_doppler_tracking,
      this._owner,
      _mode
    );
    
  }
  get_doppler_tracking() {
    AudioStreamPlayer3D.init_method_get_doppler_tracking();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_doppler_tracking,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_stream_paused(_pause) {
    AudioStreamPlayer3D.init_method_set_stream_paused();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_stream_paused,
      this._owner,
      _pause
    );
    
  }
  get_stream_paused() {
    AudioStreamPlayer3D.init_method_get_stream_paused();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_stream_paused,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_max_polyphony(_max_polyphony) {
    AudioStreamPlayer3D.init_method_set_max_polyphony();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_max_polyphony,
      this._owner,
      _max_polyphony
    );
    
  }
  get_max_polyphony() {
    AudioStreamPlayer3D.init_method_get_max_polyphony();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_max_polyphony,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_panning_strength(_panning_strength) {
    AudioStreamPlayer3D.init_method_set_panning_strength();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_panning_strength,
      this._owner,
      _panning_strength
    );
    
  }
  get_panning_strength() {
    AudioStreamPlayer3D.init_method_get_panning_strength();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_panning_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  has_stream_playback() {
    AudioStreamPlayer3D.init_method_has_stream_playback();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_has_stream_playback,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_stream_playback() {
    AudioStreamPlayer3D.init_method_get_stream_playback();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_stream_playback,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_playback_type(_playback_type) {
    AudioStreamPlayer3D.init_method_set_playback_type();
    return _call_native_mb_no_ret(
      AudioStreamPlayer3D._bindings.method_set_playback_type,
      this._owner,
      _playback_type
    );
    
  }
  get_playback_type() {
    AudioStreamPlayer3D.init_method_get_playback_type();
    return _call_native_mb_ret(
      AudioStreamPlayer3D._bindings.method_get_playback_type,
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
get attenuation_model () {
  return this.get_attenuation_model();
}
set attenuation_model (new_value) {
  this.set_attenuation_model(new_value);
}
get volume_db () {
  return this.get_volume_db();
}
set volume_db (new_value) {
  this.set_volume_db(new_value);
}
get unit_size () {
  return this.get_unit_size();
}
set unit_size (new_value) {
  this.set_unit_size(new_value);
}
get max_db () {
  return this.get_max_db();
}
set max_db (new_value) {
  this.set_max_db(new_value);
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
get max_distance () {
  return this.get_max_distance();
}
set max_distance (new_value) {
  this.set_max_distance(new_value);
}
get max_polyphony () {
  return this.get_max_polyphony();
}
set max_polyphony (new_value) {
  this.set_max_polyphony(new_value);
}
get panning_strength () {
  return this.get_panning_strength();
}
set panning_strength (new_value) {
  this.set_panning_strength(new_value);
}
get bus () {
  return this.get_bus();
}
set bus (new_value) {
  this.set_bus(new_value);
}
get area_mask () {
  return this.get_area_mask();
}
set area_mask (new_value) {
  this.set_area_mask(new_value);
}
get playback_type () {
  return this.get_playback_type();
}
set playback_type (new_value) {
  this.set_playback_type(new_value);
}
get emission_angle_enabled () {
  return this.is_emission_angle_enabled();
}
set emission_angle_enabled (new_value) {
  this.set_emission_angle_enabled(new_value);
}
get emission_angle_degrees () {
  return this.get_emission_angle();
}
set emission_angle_degrees (new_value) {
  this.set_emission_angle(new_value);
}
get emission_angle_filter_attenuation_db () {
  return this.get_emission_angle_filter_attenuation_db();
}
set emission_angle_filter_attenuation_db (new_value) {
  this.set_emission_angle_filter_attenuation_db(new_value);
}
get attenuation_filter_cutoff_hz () {
  return this.get_attenuation_filter_cutoff_hz();
}
set attenuation_filter_cutoff_hz (new_value) {
  this.set_attenuation_filter_cutoff_hz(new_value);
}
get attenuation_filter_db () {
  return this.get_attenuation_filter_db();
}
set attenuation_filter_db (new_value) {
  this.set_attenuation_filter_db(new_value);
}
get doppler_tracking () {
  return this.get_doppler_tracking();
}
set doppler_tracking (new_value) {
  this.set_doppler_tracking(new_value);
}

  static AttenuationModel = {
    ATTENUATION_INVERSE_DISTANCE: 0,
    ATTENUATION_INVERSE_SQUARE_DISTANCE: 1,
    ATTENUATION_LOGARITHMIC: 2,
    ATTENUATION_DISABLED: 3,
  }
  static DopplerTracking = {
    DOPPLER_TRACKING_DISABLED: 0,
    DOPPLER_TRACKING_IDLE_STEP: 1,
    DOPPLER_TRACKING_PHYSICS_STEP: 2,
  }
}