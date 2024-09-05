import * as internal from '__internal__';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { AudioStream } from '@js_godot/classes/audio_stream'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_load_from_buffer;
  method_load_from_file;
  method_set_packet_sequence;
  method_get_packet_sequence;
  method_set_loop;
  method_has_loop;
  method_set_loop_offset;
  method_get_loop_offset;
  method_set_bpm;
  method_get_bpm;
  method_set_beat_count;
  method_get_beat_count;
  method_set_bar_beats;
  method_get_bar_beats;
}
export class AudioStreamOggVorbis extends AudioStream{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamOggVorbis");
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
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("load_from_buffer");
      this._bindings.method_load_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        354904730
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("load_from_file");
      this._bindings.method_load_from_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        797568536
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("set_packet_sequence");
      this._bindings.method_set_packet_sequence = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        438882457
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("get_packet_sequence");
      this._bindings.method_get_packet_sequence = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2801636033
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("set_loop");
      this._bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("has_loop");
      this._bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("set_loop_offset");
      this._bindings.method_set_loop_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("get_loop_offset");
      this._bindings.method_get_loop_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("set_bpm");
      this._bindings.method_set_bpm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("get_bpm");
      this._bindings.method_get_bpm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("set_beat_count");
      this._bindings.method_set_beat_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("get_beat_count");
      this._bindings.method_get_beat_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("set_bar_beats");
      this._bindings.method_set_bar_beats = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamOggVorbis");
      let methodname = new StringName("get_bar_beats");
      this._bindings.method_get_bar_beats = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  load_from_buffer(_buffer) {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_load_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_from_file(_path) {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_load_from_file,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  set_packet_sequence(_packet_sequence) {
    return _call_native_mb_no_ret(
      AudioStreamOggVorbis._bindings.method_set_packet_sequence,
      this._owner,
      _packet_sequence
    );
    
  }
  get_packet_sequence() {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_get_packet_sequence,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_loop(_enable) {
    return _call_native_mb_no_ret(
      AudioStreamOggVorbis._bindings.method_set_loop,
      this._owner,
      _enable
    );
    
  }
  has_loop() {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_loop_offset(_seconds) {
    return _call_native_mb_no_ret(
      AudioStreamOggVorbis._bindings.method_set_loop_offset,
      this._owner,
      _seconds
    );
    
  }
  get_loop_offset() {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_get_loop_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_bpm(_bpm) {
    return _call_native_mb_no_ret(
      AudioStreamOggVorbis._bindings.method_set_bpm,
      this._owner,
      _bpm
    );
    
  }
  get_bpm() {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_get_bpm,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_beat_count(_count) {
    return _call_native_mb_no_ret(
      AudioStreamOggVorbis._bindings.method_set_beat_count,
      this._owner,
      _count
    );
    
  }
  get_beat_count() {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_get_beat_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_bar_beats(_count) {
    return _call_native_mb_no_ret(
      AudioStreamOggVorbis._bindings.method_set_bar_beats,
      this._owner,
      _count
    );
    
  }
  get_bar_beats() {
    return _call_native_mb_ret(
      AudioStreamOggVorbis._bindings.method_get_bar_beats,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get packet_sequence () {
  return this.get_packet_sequence();
}
set packet_sequence (new_value) {
  this.set_packet_sequence(new_value);
}
get bpm () {
  return this.get_bpm();
}
set bpm (new_value) {
  this.set_bpm(new_value);
}
get beat_count () {
  return this.get_beat_count();
}
set beat_count (new_value) {
  this.set_beat_count(new_value);
}
get bar_beats () {
  return this.get_bar_beats();
}
set bar_beats (new_value) {
  this.set_bar_beats(new_value);
}
get loop () {
  return this.has_loop();
}
set loop (new_value) {
  this.set_loop(new_value);
}
get loop_offset () {
  return this.get_loop_offset();
}
set loop_offset (new_value) {
  this.set_loop_offset(new_value);
}


  static {
    this._init_bindings();
  }
}