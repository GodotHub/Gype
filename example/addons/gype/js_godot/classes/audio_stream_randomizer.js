import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { AudioStream } from '@js_godot/classes/audio_stream'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_stream;
  method_move_stream;
  method_remove_stream;
  method_set_stream;
  method_get_stream;
  method_set_stream_probability_weight;
  method_get_stream_probability_weight;
  method_set_streams_count;
  method_get_streams_count;
  method_set_random_pitch;
  method_get_random_pitch;
  method_set_random_volume_offset_db;
  method_get_random_volume_offset_db;
  method_set_playback_mode;
  method_get_playback_mode;
}
export class AudioStreamRandomizer extends AudioStream{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamRandomizer");
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
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("add_stream");
      this._bindings.method_add_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1892018854
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("move_stream");
      this._bindings.method_move_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("remove_stream");
      this._bindings.method_remove_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("set_stream");
      this._bindings.method_set_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        111075094
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("get_stream");
      this._bindings.method_get_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2739380747
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("set_stream_probability_weight");
      this._bindings.method_set_stream_probability_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("get_stream_probability_weight");
      this._bindings.method_get_stream_probability_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("set_streams_count");
      this._bindings.method_set_streams_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("get_streams_count");
      this._bindings.method_get_streams_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("set_random_pitch");
      this._bindings.method_set_random_pitch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("get_random_pitch");
      this._bindings.method_get_random_pitch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("set_random_volume_offset_db");
      this._bindings.method_set_random_volume_offset_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("get_random_volume_offset_db");
      this._bindings.method_get_random_volume_offset_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("set_playback_mode");
      this._bindings.method_set_playback_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3950967023
      );
    }
    {
      let classname = new StringName("AudioStreamRandomizer");
      let methodname = new StringName("get_playback_mode");
      this._bindings.method_get_playback_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3943055077
      );
    }
  }
  add_stream(_index, _stream, _weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_stream,
      this._owner,
      _index, _stream, _weight
    );
    
  }
  move_stream(_index_from, _index_to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_move_stream,
      this._owner,
      _index_from, _index_to
    );
    
  }
  remove_stream(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_stream,
      this._owner,
      _index
    );
    
  }
  set_stream(_index, _stream) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stream,
      this._owner,
      _index, _stream
    );
    
  }
  get_stream(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  set_stream_probability_weight(_index, _weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stream_probability_weight,
      this._owner,
      _index, _weight
    );
    
  }
  get_stream_probability_weight(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream_probability_weight,
      this._owner,
			Variant.Type.FLOAT,
      _index
    );
    
  }
  set_streams_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_streams_count,
      this._owner,
      _count
    );
    
  }
  get_streams_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_streams_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_random_pitch(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_random_pitch,
      this._owner,
      _scale
    );
    
  }
  get_random_pitch() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_random_pitch,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_random_volume_offset_db(_db_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_random_volume_offset_db,
      this._owner,
      _db_offset
    );
    
  }
  get_random_volume_offset_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_random_volume_offset_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_playback_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_playback_mode,
      this._owner,
      _mode
    );
    
  }
  get_playback_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_playback_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get playback_mode () {
  return this.get_playback_mode();
}
set playback_mode (new_value) {
  this.set_playback_mode(new_value);
}
get random_pitch () {
  return this.get_random_pitch();
}
set random_pitch (new_value) {
  this.set_random_pitch(new_value);
}
get random_volume_offset_db () {
  return this.get_random_volume_offset_db();
}
set random_volume_offset_db (new_value) {
  this.set_random_volume_offset_db(new_value);
}
get streams_count () {
  return this.get_streams_count();
}
set streams_count (new_value) {
  this.set_streams_count(new_value);
}

  static PlaybackMode = {
    PLAYBACK_RANDOM_NO_REPEATS: 0,
    PLAYBACK_RANDOM: 1,
    PLAYBACK_SEQUENTIAL: 2,
  }

  static {
    this._init_bindings();
  }
}