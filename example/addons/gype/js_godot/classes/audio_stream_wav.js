import * as internal from '__internal__';
import { AudioStream } from '@js_godot/classes/audio_stream'
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
@GodotClass
export class AudioStreamWAV extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamWAV");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_data() {
    if (!this._bindings.method_set_data) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_data");
      this._bindings.method_set_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2971499966
      );
    }
  }
  static init_method_get_data() {
    if (!this._bindings.method_get_data) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2362200018
      );
    }
  }
  static init_method_set_format() {
    if (!this._bindings.method_set_format) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_format");
      this._bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        60648488
      );
    }
  }
  static init_method_get_format() {
    if (!this._bindings.method_get_format) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3151724922
      );
    }
  }
  static init_method_set_loop_mode() {
    if (!this._bindings.method_set_loop_mode) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_loop_mode");
      this._bindings.method_set_loop_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2444882972
      );
    }
  }
  static init_method_get_loop_mode() {
    if (!this._bindings.method_get_loop_mode) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("get_loop_mode");
      this._bindings.method_get_loop_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        393560655
      );
    }
  }
  static init_method_set_loop_begin() {
    if (!this._bindings.method_set_loop_begin) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_loop_begin");
      this._bindings.method_set_loop_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_loop_begin() {
    if (!this._bindings.method_get_loop_begin) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("get_loop_begin");
      this._bindings.method_get_loop_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_loop_end() {
    if (!this._bindings.method_set_loop_end) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_loop_end");
      this._bindings.method_set_loop_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_loop_end() {
    if (!this._bindings.method_get_loop_end) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("get_loop_end");
      this._bindings.method_get_loop_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_mix_rate() {
    if (!this._bindings.method_set_mix_rate) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_mix_rate");
      this._bindings.method_set_mix_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_mix_rate() {
    if (!this._bindings.method_get_mix_rate) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("get_mix_rate");
      this._bindings.method_get_mix_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_stereo() {
    if (!this._bindings.method_set_stereo) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("set_stereo");
      this._bindings.method_set_stereo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_stereo() {
    if (!this._bindings.method_is_stereo) {
      let classname = new StringName("AudioStreamWAV");
      let methodname = new StringName("is_stereo");
      this._bindings.method_is_stereo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_save_to_wav() {
    if (!this._bindings.method_save_to_wav) {
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
    AudioStreamWAV.init_method_set_data();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_data,
      this._owner,
      _data
    );
    
  }
  get_data() {
    AudioStreamWAV.init_method_get_data();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  set_format(_format) {
    AudioStreamWAV.init_method_set_format();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_format,
      this._owner,
      _format
    );
    
  }
  get_format() {
    AudioStreamWAV.init_method_get_format();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_loop_mode(_loop_mode) {
    AudioStreamWAV.init_method_set_loop_mode();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_loop_mode,
      this._owner,
      _loop_mode
    );
    
  }
  get_loop_mode() {
    AudioStreamWAV.init_method_get_loop_mode();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_get_loop_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_loop_begin(_loop_begin) {
    AudioStreamWAV.init_method_set_loop_begin();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_loop_begin,
      this._owner,
      _loop_begin
    );
    
  }
  get_loop_begin() {
    AudioStreamWAV.init_method_get_loop_begin();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_get_loop_begin,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_loop_end(_loop_end) {
    AudioStreamWAV.init_method_set_loop_end();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_loop_end,
      this._owner,
      _loop_end
    );
    
  }
  get_loop_end() {
    AudioStreamWAV.init_method_get_loop_end();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_get_loop_end,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mix_rate(_mix_rate) {
    AudioStreamWAV.init_method_set_mix_rate();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_mix_rate,
      this._owner,
      _mix_rate
    );
    
  }
  get_mix_rate() {
    AudioStreamWAV.init_method_get_mix_rate();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_get_mix_rate,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_stereo(_stereo) {
    AudioStreamWAV.init_method_set_stereo();
    return _call_native_mb_no_ret(
      AudioStreamWAV._bindings.method_set_stereo,
      this._owner,
      _stereo
    );
    
  }
  is_stereo() {
    AudioStreamWAV.init_method_is_stereo();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_is_stereo,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  save_to_wav(_path) {
    AudioStreamWAV.init_method_save_to_wav();
    return _call_native_mb_ret(
      AudioStreamWAV._bindings.method_save_to_wav,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  
get data () {
  return this.get_data();
}
set data (new_value) {
  this.set_data(new_value);
}
get format () {
  return this.get_format();
}
set format (new_value) {
  this.set_format(new_value);
}
get loop_mode () {
  return this.get_loop_mode();
}
set loop_mode (new_value) {
  this.set_loop_mode(new_value);
}
get loop_begin () {
  return this.get_loop_begin();
}
set loop_begin (new_value) {
  this.set_loop_begin(new_value);
}
get loop_end () {
  return this.get_loop_end();
}
set loop_end (new_value) {
  this.set_loop_end(new_value);
}
get mix_rate () {
  return this.get_mix_rate();
}
set mix_rate (new_value) {
  this.set_mix_rate(new_value);
}
get stereo () {
  return this.is_stereo();
}
set stereo (new_value) {
  this.set_stereo(new_value);
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