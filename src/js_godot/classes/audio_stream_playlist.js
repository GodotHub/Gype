import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { AudioStream } from '@js_godot/classes/audio_stream'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stream_count;
  method_get_stream_count;
  method_get_bpm;
  method_set_list_stream;
  method_get_list_stream;
  method_set_shuffle;
  method_get_shuffle;
  method_set_fade_time;
  method_get_fade_time;
  method_set_loop;
  method_has_loop;
}
export class AudioStreamPlaylist extends AudioStream{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlaylist");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_stream_count() {
    if (!this.#_bindings.method_set_stream_count) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("set_stream_count");
      this.#_bindings.method_set_stream_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_stream_count() {
    if (!this.#_bindings.method_get_stream_count) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("get_stream_count");
      this.#_bindings.method_get_stream_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_bpm() {
    if (!this.#_bindings.method_get_bpm) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("get_bpm");
      this.#_bindings.method_get_bpm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_list_stream() {
    if (!this.#_bindings.method_set_list_stream) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("set_list_stream");
      this.#_bindings.method_set_list_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        111075094
      );
    }
  }
  static init_method_get_list_stream() {
    if (!this.#_bindings.method_get_list_stream) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("get_list_stream");
      this.#_bindings.method_get_list_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2739380747
      );
    }
  }
  static init_method_set_shuffle() {
    if (!this.#_bindings.method_set_shuffle) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("set_shuffle");
      this.#_bindings.method_set_shuffle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_shuffle() {
    if (!this.#_bindings.method_get_shuffle) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("get_shuffle");
      this.#_bindings.method_get_shuffle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_fade_time() {
    if (!this.#_bindings.method_set_fade_time) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("set_fade_time");
      this.#_bindings.method_set_fade_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fade_time() {
    if (!this.#_bindings.method_get_fade_time) {
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("get_fade_time");
      this.#_bindings.method_get_fade_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_loop() {
    if (!this.#_bindings.method_set_loop) {
      let classname = new StringName("AudioStreamPlaylist");
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
      let classname = new StringName("AudioStreamPlaylist");
      let methodname = new StringName("has_loop");
      this.#_bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_stream_count(_stream_count) {
    AudioStreamPlaylist.init_method_set_stream_count();
    return _call_native_mb_no_ret(
      AudioStreamPlaylist.#_bindings.method_set_stream_count,
      this._owner,
      _stream_count
    );
    
  }
  get_stream_count() {
    AudioStreamPlaylist.init_method_get_stream_count();
    return _call_native_mb_ret(
      AudioStreamPlaylist.#_bindings.method_get_stream_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_bpm() {
    AudioStreamPlaylist.init_method_get_bpm();
    return _call_native_mb_ret(
      AudioStreamPlaylist.#_bindings.method_get_bpm,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_list_stream(_stream_index, _audio_stream) {
    AudioStreamPlaylist.init_method_set_list_stream();
    return _call_native_mb_no_ret(
      AudioStreamPlaylist.#_bindings.method_set_list_stream,
      this._owner,
      _stream_index, _audio_stream
    );
    
  }
  get_list_stream(_stream_index) {
    AudioStreamPlaylist.init_method_get_list_stream();
    return _call_native_mb_ret(
      AudioStreamPlaylist.#_bindings.method_get_list_stream,
      this._owner,
			Variant.Type.OBJECT,
      _stream_index
    );
    
  }
  set_shuffle(_shuffle) {
    AudioStreamPlaylist.init_method_set_shuffle();
    return _call_native_mb_no_ret(
      AudioStreamPlaylist.#_bindings.method_set_shuffle,
      this._owner,
      _shuffle
    );
    
  }
  get_shuffle() {
    AudioStreamPlaylist.init_method_get_shuffle();
    return _call_native_mb_ret(
      AudioStreamPlaylist.#_bindings.method_get_shuffle,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_fade_time(_dec) {
    AudioStreamPlaylist.init_method_set_fade_time();
    return _call_native_mb_no_ret(
      AudioStreamPlaylist.#_bindings.method_set_fade_time,
      this._owner,
      _dec
    );
    
  }
  get_fade_time() {
    AudioStreamPlaylist.init_method_get_fade_time();
    return _call_native_mb_ret(
      AudioStreamPlaylist.#_bindings.method_get_fade_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_loop(_loop) {
    AudioStreamPlaylist.init_method_set_loop();
    return _call_native_mb_no_ret(
      AudioStreamPlaylist.#_bindings.method_set_loop,
      this._owner,
      _loop
    );
    
  }
  has_loop() {
    AudioStreamPlaylist.init_method_has_loop();
    return _call_native_mb_ret(
      AudioStreamPlaylist.#_bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get shuffle () {
  return this.get_shuffle();
}
set shuffle (new_value) {
  this.set_shuffle(new_value);
}
get loop () {
  return this.has_loop();
}
set loop (new_value) {
  this.set_loop(new_value);
}
get fade_time () {
  return this.get_fade_time();
}
set fade_time (new_value) {
  this.set_fade_time(new_value);
}
get stream_count () {
  return this.get_stream_count();
}
set stream_count (new_value) {
  this.set_stream_count(new_value);
}
get stream_0 () {
  return this.get_list_stream();
}
set stream_0 (new_value) {
  this.set_list_stream(new_value);
}
get stream_1 () {
  return this.get_list_stream();
}
set stream_1 (new_value) {
  this.set_list_stream(new_value);
}
get stream_2 () {
  return this.get_list_stream();
}
set stream_2 (new_value) {
  this.set_list_stream(new_value);
}
get stream_3 () {
  return this.get_list_stream();
}
set stream_3 (new_value) {
  this.set_list_stream(new_value);
}
get stream_4 () {
  return this.get_list_stream();
}
set stream_4 (new_value) {
  this.set_list_stream(new_value);
}
get stream_5 () {
  return this.get_list_stream();
}
set stream_5 (new_value) {
  this.set_list_stream(new_value);
}
get stream_6 () {
  return this.get_list_stream();
}
set stream_6 (new_value) {
  this.set_list_stream(new_value);
}
get stream_7 () {
  return this.get_list_stream();
}
set stream_7 (new_value) {
  this.set_list_stream(new_value);
}
get stream_8 () {
  return this.get_list_stream();
}
set stream_8 (new_value) {
  this.set_list_stream(new_value);
}
get stream_9 () {
  return this.get_list_stream();
}
set stream_9 (new_value) {
  this.set_list_stream(new_value);
}
get stream_10 () {
  return this.get_list_stream();
}
set stream_10 (new_value) {
  this.set_list_stream(new_value);
}
get stream_11 () {
  return this.get_list_stream();
}
set stream_11 (new_value) {
  this.set_list_stream(new_value);
}
get stream_12 () {
  return this.get_list_stream();
}
set stream_12 (new_value) {
  this.set_list_stream(new_value);
}
get stream_13 () {
  return this.get_list_stream();
}
set stream_13 (new_value) {
  this.set_list_stream(new_value);
}
get stream_14 () {
  return this.get_list_stream();
}
set stream_14 (new_value) {
  this.set_list_stream(new_value);
}
get stream_15 () {
  return this.get_list_stream();
}
set stream_15 (new_value) {
  this.set_list_stream(new_value);
}
get stream_16 () {
  return this.get_list_stream();
}
set stream_16 (new_value) {
  this.set_list_stream(new_value);
}
get stream_17 () {
  return this.get_list_stream();
}
set stream_17 (new_value) {
  this.set_list_stream(new_value);
}
get stream_18 () {
  return this.get_list_stream();
}
set stream_18 (new_value) {
  this.set_list_stream(new_value);
}
get stream_19 () {
  return this.get_list_stream();
}
set stream_19 (new_value) {
  this.set_list_stream(new_value);
}
get stream_20 () {
  return this.get_list_stream();
}
set stream_20 (new_value) {
  this.set_list_stream(new_value);
}
get stream_21 () {
  return this.get_list_stream();
}
set stream_21 (new_value) {
  this.set_list_stream(new_value);
}
get stream_22 () {
  return this.get_list_stream();
}
set stream_22 (new_value) {
  this.set_list_stream(new_value);
}
get stream_23 () {
  return this.get_list_stream();
}
set stream_23 (new_value) {
  this.set_list_stream(new_value);
}
get stream_24 () {
  return this.get_list_stream();
}
set stream_24 (new_value) {
  this.set_list_stream(new_value);
}
get stream_25 () {
  return this.get_list_stream();
}
set stream_25 (new_value) {
  this.set_list_stream(new_value);
}
get stream_26 () {
  return this.get_list_stream();
}
set stream_26 (new_value) {
  this.set_list_stream(new_value);
}
get stream_27 () {
  return this.get_list_stream();
}
set stream_27 (new_value) {
  this.set_list_stream(new_value);
}
get stream_28 () {
  return this.get_list_stream();
}
set stream_28 (new_value) {
  this.set_list_stream(new_value);
}
get stream_29 () {
  return this.get_list_stream();
}
set stream_29 (new_value) {
  this.set_list_stream(new_value);
}
get stream_30 () {
  return this.get_list_stream();
}
set stream_30 (new_value) {
  this.set_list_stream(new_value);
}
get stream_31 () {
  return this.get_list_stream();
}
set stream_31 (new_value) {
  this.set_list_stream(new_value);
}
get stream_32 () {
  return this.get_list_stream();
}
set stream_32 (new_value) {
  this.set_list_stream(new_value);
}
get stream_33 () {
  return this.get_list_stream();
}
set stream_33 (new_value) {
  this.set_list_stream(new_value);
}
get stream_34 () {
  return this.get_list_stream();
}
set stream_34 (new_value) {
  this.set_list_stream(new_value);
}
get stream_35 () {
  return this.get_list_stream();
}
set stream_35 (new_value) {
  this.set_list_stream(new_value);
}
get stream_36 () {
  return this.get_list_stream();
}
set stream_36 (new_value) {
  this.set_list_stream(new_value);
}
get stream_37 () {
  return this.get_list_stream();
}
set stream_37 (new_value) {
  this.set_list_stream(new_value);
}
get stream_38 () {
  return this.get_list_stream();
}
set stream_38 (new_value) {
  this.set_list_stream(new_value);
}
get stream_39 () {
  return this.get_list_stream();
}
set stream_39 (new_value) {
  this.set_list_stream(new_value);
}
get stream_40 () {
  return this.get_list_stream();
}
set stream_40 (new_value) {
  this.set_list_stream(new_value);
}
get stream_41 () {
  return this.get_list_stream();
}
set stream_41 (new_value) {
  this.set_list_stream(new_value);
}
get stream_42 () {
  return this.get_list_stream();
}
set stream_42 (new_value) {
  this.set_list_stream(new_value);
}
get stream_43 () {
  return this.get_list_stream();
}
set stream_43 (new_value) {
  this.set_list_stream(new_value);
}
get stream_44 () {
  return this.get_list_stream();
}
set stream_44 (new_value) {
  this.set_list_stream(new_value);
}
get stream_45 () {
  return this.get_list_stream();
}
set stream_45 (new_value) {
  this.set_list_stream(new_value);
}
get stream_46 () {
  return this.get_list_stream();
}
set stream_46 (new_value) {
  this.set_list_stream(new_value);
}
get stream_47 () {
  return this.get_list_stream();
}
set stream_47 (new_value) {
  this.set_list_stream(new_value);
}
get stream_48 () {
  return this.get_list_stream();
}
set stream_48 (new_value) {
  this.set_list_stream(new_value);
}
get stream_49 () {
  return this.get_list_stream();
}
set stream_49 (new_value) {
  this.set_list_stream(new_value);
}
get stream_50 () {
  return this.get_list_stream();
}
set stream_50 (new_value) {
  this.set_list_stream(new_value);
}
get stream_51 () {
  return this.get_list_stream();
}
set stream_51 (new_value) {
  this.set_list_stream(new_value);
}
get stream_52 () {
  return this.get_list_stream();
}
set stream_52 (new_value) {
  this.set_list_stream(new_value);
}
get stream_53 () {
  return this.get_list_stream();
}
set stream_53 (new_value) {
  this.set_list_stream(new_value);
}
get stream_54 () {
  return this.get_list_stream();
}
set stream_54 (new_value) {
  this.set_list_stream(new_value);
}
get stream_55 () {
  return this.get_list_stream();
}
set stream_55 (new_value) {
  this.set_list_stream(new_value);
}
get stream_56 () {
  return this.get_list_stream();
}
set stream_56 (new_value) {
  this.set_list_stream(new_value);
}
get stream_57 () {
  return this.get_list_stream();
}
set stream_57 (new_value) {
  this.set_list_stream(new_value);
}
get stream_58 () {
  return this.get_list_stream();
}
set stream_58 (new_value) {
  this.set_list_stream(new_value);
}
get stream_59 () {
  return this.get_list_stream();
}
set stream_59 (new_value) {
  this.set_list_stream(new_value);
}
get stream_60 () {
  return this.get_list_stream();
}
set stream_60 (new_value) {
  this.set_list_stream(new_value);
}
get stream_61 () {
  return this.get_list_stream();
}
set stream_61 (new_value) {
  this.set_list_stream(new_value);
}
get stream_62 () {
  return this.get_list_stream();
}
set stream_62 (new_value) {
  this.set_list_stream(new_value);
}
get stream_63 () {
  return this.get_list_stream();
}
set stream_63 (new_value) {
  this.set_list_stream(new_value);
}

}