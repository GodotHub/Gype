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
@GodotClass
export class AudioStreamMP3 extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamMP3");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_data() {
    if (!this._bindings.method_set_data) {
      let classname = new StringName("AudioStreamMP3");
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
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2362200018
      );
    }
  }
  static init_method_set_loop() {
    if (!this._bindings.method_set_loop) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_loop");
      this._bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_loop() {
    if (!this._bindings.method_has_loop) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("has_loop");
      this._bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_loop_offset() {
    if (!this._bindings.method_set_loop_offset) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_loop_offset");
      this._bindings.method_set_loop_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_loop_offset() {
    if (!this._bindings.method_get_loop_offset) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_loop_offset");
      this._bindings.method_get_loop_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_bpm() {
    if (!this._bindings.method_set_bpm) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_bpm");
      this._bindings.method_set_bpm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bpm() {
    if (!this._bindings.method_get_bpm) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_bpm");
      this._bindings.method_get_bpm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_beat_count() {
    if (!this._bindings.method_set_beat_count) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_beat_count");
      this._bindings.method_set_beat_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_beat_count() {
    if (!this._bindings.method_get_beat_count) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("get_beat_count");
      this._bindings.method_get_beat_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_bar_beats() {
    if (!this._bindings.method_set_bar_beats) {
      let classname = new StringName("AudioStreamMP3");
      let methodname = new StringName("set_bar_beats");
      this._bindings.method_set_bar_beats = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_bar_beats() {
    if (!this._bindings.method_get_bar_beats) {
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
    AudioStreamMP3.init_method_set_data();
    return _call_native_mb_no_ret(
      AudioStreamMP3._bindings.method_set_data,
      this._owner,
      _data
    );
    
  }
  get_data() {
    AudioStreamMP3.init_method_get_data();
    return _call_native_mb_ret(
      AudioStreamMP3._bindings.method_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  set_loop(_enable) {
    AudioStreamMP3.init_method_set_loop();
    return _call_native_mb_no_ret(
      AudioStreamMP3._bindings.method_set_loop,
      this._owner,
      _enable
    );
    
  }
  has_loop() {
    AudioStreamMP3.init_method_has_loop();
    return _call_native_mb_ret(
      AudioStreamMP3._bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_loop_offset(_seconds) {
    AudioStreamMP3.init_method_set_loop_offset();
    return _call_native_mb_no_ret(
      AudioStreamMP3._bindings.method_set_loop_offset,
      this._owner,
      _seconds
    );
    
  }
  get_loop_offset() {
    AudioStreamMP3.init_method_get_loop_offset();
    return _call_native_mb_ret(
      AudioStreamMP3._bindings.method_get_loop_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bpm(_bpm) {
    AudioStreamMP3.init_method_set_bpm();
    return _call_native_mb_no_ret(
      AudioStreamMP3._bindings.method_set_bpm,
      this._owner,
      _bpm
    );
    
  }
  get_bpm() {
    AudioStreamMP3.init_method_get_bpm();
    return _call_native_mb_ret(
      AudioStreamMP3._bindings.method_get_bpm,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_beat_count(_count) {
    AudioStreamMP3.init_method_set_beat_count();
    return _call_native_mb_no_ret(
      AudioStreamMP3._bindings.method_set_beat_count,
      this._owner,
      _count
    );
    
  }
  get_beat_count() {
    AudioStreamMP3.init_method_get_beat_count();
    return _call_native_mb_ret(
      AudioStreamMP3._bindings.method_get_beat_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_bar_beats(_count) {
    AudioStreamMP3.init_method_set_bar_beats();
    return _call_native_mb_no_ret(
      AudioStreamMP3._bindings.method_set_bar_beats,
      this._owner,
      _count
    );
    
  }
  get_bar_beats() {
    AudioStreamMP3.init_method_get_bar_beats();
    return _call_native_mb_ret(
      AudioStreamMP3._bindings.method_get_bar_beats,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get data () {
  return this.get_data();
}
set data (new_value) {
  this.set_data(new_value);
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

}