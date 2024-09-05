import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_length;
  method_is_monophonic;
  method_instantiate_playback;
  method_can_be_sampled;
  method_generate_sample;
  method_is_meta_stream;
}
export class AudioStream extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStream");
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
      let classname = new StringName("AudioStream");
      let methodname = new StringName("get_length");
      this._bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("is_monophonic");
      this._bindings.method_is_monophonic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("instantiate_playback");
      this._bindings.method_instantiate_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        210135309
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("can_be_sampled");
      this._bindings.method_can_be_sampled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("generate_sample");
      this._bindings.method_generate_sample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2646048999
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("is_meta_stream");
      this._bindings.method_is_meta_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  _instantiate_playback() {
  }
  _get_stream_name() {
  }
  _get_length() {
  }
  _is_monophonic() {
  }
  _get_bpm() {
  }
  _get_beat_count() {
  }
  _get_parameter_list() {
  }
  get_length() {
    return _call_native_mb_ret(
      AudioStream._bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  is_monophonic() {
    return _call_native_mb_ret(
      AudioStream._bindings.method_is_monophonic,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  instantiate_playback() {
    return _call_native_mb_ret(
      AudioStream._bindings.method_instantiate_playback,
      this._owner,
			Variant.INT,
      
    );
    
  }
  can_be_sampled() {
    return _call_native_mb_ret(
      AudioStream._bindings.method_can_be_sampled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  generate_sample() {
    return _call_native_mb_ret(
      AudioStream._bindings.method_generate_sample,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_meta_stream() {
    return _call_native_mb_ret(
      AudioStream._bindings.method_is_meta_stream,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}