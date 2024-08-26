import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { AudioStream } from 'src/js_godot/classesaudio_stream'
class _MethodBindings {
    method_set_data;
    method_get_data;
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


export class AudioStreamMP3 extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamMP3");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_data");
      this._bindings.method_set_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2971499966
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2362200018
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_loop");
      this._bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("has_loop");
      this._bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_loop_offset");
      this._bindings.method_set_loop_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_loop_offset");
      this._bindings.method_get_loop_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_bpm");
      this._bindings.method_set_bpm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_bpm");
      this._bindings.method_get_bpm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_beat_count");
      this._bindings.method_set_beat_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_beat_count");
      this._bindings.method_get_beat_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_bar_beats");
      this._bindings.method_set_bar_beats = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_bar_beats");
      this._bindings.method_get_bar_beats = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_data(_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_data,
      this._owner,
      _data
    );
  }
  get_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      
    );
  }
  set_loop(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop,
      this._owner,
      _enable
    );
  }
  has_loop() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_loop_offset(_seconds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop_offset,
      this._owner,
      _seconds
    );
  }
  get_loop_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loop_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_bpm(_bpm) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bpm,
      this._owner,
      _bpm
    );
  }
  get_bpm() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bpm,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_beat_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_beat_count,
      this._owner,
      _count
    );
  }
  get_beat_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_beat_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_bar_beats(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bar_beats,
      this._owner,
      _count
    );
  }
  get_bar_beats() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bar_beats,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}