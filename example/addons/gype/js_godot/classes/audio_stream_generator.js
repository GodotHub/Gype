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
  method_set_mix_rate;
  method_get_mix_rate;
  method_set_buffer_length;
  method_get_buffer_length;
}
@GodotClass
export class AudioStreamGenerator extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamGenerator");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mix_rate() {
    if (!this._bindings.method_set_mix_rate) {
      let classname = new StringName("AudioStreamGenerator");
      let methodname = new StringName("set_mix_rate");
      this._bindings.method_set_mix_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mix_rate() {
    if (!this._bindings.method_get_mix_rate) {
      let classname = new StringName("AudioStreamGenerator");
      let methodname = new StringName("get_mix_rate");
      this._bindings.method_get_mix_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_buffer_length() {
    if (!this._bindings.method_set_buffer_length) {
      let classname = new StringName("AudioStreamGenerator");
      let methodname = new StringName("set_buffer_length");
      this._bindings.method_set_buffer_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_buffer_length() {
    if (!this._bindings.method_get_buffer_length) {
      let classname = new StringName("AudioStreamGenerator");
      let methodname = new StringName("get_buffer_length");
      this._bindings.method_get_buffer_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_mix_rate(_hz) {
    AudioStreamGenerator.init_method_set_mix_rate();
    return _call_native_mb_no_ret(
      AudioStreamGenerator._bindings.method_set_mix_rate,
      this._owner,
      _hz
    );
    
  }
  get_mix_rate() {
    AudioStreamGenerator.init_method_get_mix_rate();
    return _call_native_mb_ret(
      AudioStreamGenerator._bindings.method_get_mix_rate,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_buffer_length(_seconds) {
    AudioStreamGenerator.init_method_set_buffer_length();
    return _call_native_mb_no_ret(
      AudioStreamGenerator._bindings.method_set_buffer_length,
      this._owner,
      _seconds
    );
    
  }
  get_buffer_length() {
    AudioStreamGenerator.init_method_get_buffer_length();
    return _call_native_mb_ret(
      AudioStreamGenerator._bindings.method_get_buffer_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get mix_rate () {
  return this.get_mix_rate();
}
set mix_rate (new_value) {
  this.set_mix_rate(new_value);
}
get buffer_length () {
  return this.get_buffer_length();
}
set buffer_length (new_value) {
  this.set_buffer_length(new_value);
}

}