import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__instantiate_playback;
    method__get_stream_name;
    method__get_length;
    method__is_monophonic;
    method__get_bpm;
    method__get_beat_count;
    method__get_parameter_list;
    method_get_length;
    method_is_monophonic;
    method_instantiate_playback;
    method_can_be_sampled;
    method_generate_sample;
    method_is_meta_stream;
}


export class AudioStream extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStream");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_instantiate_playback");
      this._bindings.method__instantiate_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_get_stream_name");
      this._bindings.method__get_stream_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_get_length");
      this._bindings.method__get_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_is_monophonic");
      this._bindings.method__is_monophonic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_get_bpm");
      this._bindings.method__get_bpm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_get_beat_count");
      this._bindings.method__get_beat_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStream");
      let methodname = new StringName("_get_parameter_list");
      this._bindings.method__get_parameter_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__instantiate_playback,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_stream_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_stream_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _is_monophonic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_monophonic,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_bpm() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_bpm,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _get_beat_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_beat_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_parameter_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_parameter_list,
      this._owner,
			Variant.INT,
      
    );
  }
  get_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  is_monophonic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_monophonic,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  instantiate_playback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instantiate_playback,
      this._owner,
			Variant.INT,
      
    );
  }
  can_be_sampled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_can_be_sampled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  generate_sample() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_sample,
      this._owner,
			Variant.INT,
      
    );
  }
  is_meta_stream() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_meta_stream,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}