import * as internal from '__internal__';
import { AudioStream } from 'src/js_godot/classes/audio_stream'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_mix_rate;
    method_get_mix_rate;
    method_set_buffer_length;
    method_get_buffer_length;
}


export class AudioStreamGenerator extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamGenerator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioStreamGenerator");
        let methodname = new StringName("set_mix_rate");
        this._bindings.method_set_mix_rate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioStreamGenerator");
        let methodname = new StringName("get_mix_rate");
        this._bindings.method_get_mix_rate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioStreamGenerator");
        let methodname = new StringName("set_buffer_length");
        this._bindings.method_set_buffer_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mix_rate,
      this._owner,
      _hz
    );
    
  }
  get_mix_rate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mix_rate,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_buffer_length(_seconds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_buffer_length,
      this._owner,
      _seconds
    );
    
  }
  get_buffer_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buffer_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}