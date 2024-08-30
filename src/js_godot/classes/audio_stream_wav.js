import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { AudioStream } from 'src/js_godot/classes/audio_stream'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_data;
    method_get_data;
    method_set_format;
    method_get_format;
    method_set_loop_mode;
    method_get_loop_mode;
    method_set_loop_begin;
    method_get_loop_begin;
    method_set_loop_end;
    method_get_loop_end;
    method_set_mix_rate;
    method_get_mix_rate;
    method_set_stereo;
    method_is_stereo;
    method_save_to_wav;
}


export class AudioStreamWAV extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamWAV");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_data");
        this._bindings.method_set_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2971499966
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("get_data");
        this._bindings.method_get_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2362200018
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_format");
        this._bindings.method_set_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          60648488
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("get_format");
        this._bindings.method_get_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3151724922
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_loop_mode");
        this._bindings.method_set_loop_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2444882972
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("get_loop_mode");
        this._bindings.method_get_loop_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          393560655
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_loop_begin");
        this._bindings.method_set_loop_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("get_loop_begin");
        this._bindings.method_get_loop_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_loop_end");
        this._bindings.method_set_loop_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("get_loop_end");
        this._bindings.method_get_loop_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_mix_rate");
        this._bindings.method_set_mix_rate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("get_mix_rate");
        this._bindings.method_get_mix_rate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("set_stereo");
        this._bindings.method_set_stereo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("is_stereo");
        this._bindings.method_is_stereo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("AudioStreamWAV");
        let methodname = new StringName("save_to_wav");
        this._bindings.method_save_to_wav = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
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
  set_format(_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_format,
      this._owner,
      _format
    );
    
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_loop_mode(_loop_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop_mode,
      this._owner,
      _loop_mode
    );
    
  }
  get_loop_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loop_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_loop_begin(_loop_begin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop_begin,
      this._owner,
      _loop_begin
    );
    
  }
  get_loop_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loop_begin,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_loop_end(_loop_end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop_end,
      this._owner,
      _loop_end
    );
    
  }
  get_loop_end() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loop_end,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_mix_rate(_mix_rate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mix_rate,
      this._owner,
      _mix_rate
    );
    
  }
  get_mix_rate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mix_rate,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_stereo(_stereo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stereo,
      this._owner,
      _stereo
    );
    
  }
  is_stereo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_stereo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  save_to_wav(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_to_wav,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  static Format = {
    FORMAT_8_BITS: 0,
    FORMAT_16_BITS: 1,
    FORMAT_IMA_ADPCM: 2,
    FORMAT_QOA: 3,
  }
  static LoopMode = {
    LOOP_DISABLED: 0,
    LOOP_FORWARD: 1,
    LOOP_PINGPONG: 2,
    LOOP_BACKWARD: 3,
  }
}