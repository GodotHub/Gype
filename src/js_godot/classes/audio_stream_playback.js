import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method__start;
    method__stop;
    method__is_playing;
    method__get_loop_count;
    method__get_playback_position;
    method__seek;
    method__mix;
    method__tag_used_streams;
    method__set_parameter;
    method__get_parameter;
    method_set_sample_playback;
    method_get_sample_playback;
}


export class AudioStreamPlayback extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPlayback");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_start");
      this._bindings.method__start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_stop");
      this._bindings.method__stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_is_playing");
      this._bindings.method__is_playing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_get_loop_count");
      this._bindings.method__get_loop_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_get_playback_position");
      this._bindings.method__get_playback_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_seek");
      this._bindings.method__seek = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_mix");
      this._bindings.method__mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_tag_used_streams");
      this._bindings.method__tag_used_streams = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_set_parameter");
      this._bindings.method__set_parameter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("_get_parameter");
      this._bindings.method__get_parameter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("set_sample_playback");
      this._bindings.method_set_sample_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3195455091
      );
    }
    {
      let classname = new StringName("AudioStreamPlayback");
      let methodname = new StringName("get_sample_playback");
      this._bindings.method_get_sample_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3482738536
      );
    }
  }
  _start(_from_pos) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__start,
      this._owner,
      _from_pos
    );
  }
  _stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__stop,
      this._owner,
      
    );
  }
  _is_playing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_playing,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_loop_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_loop_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_playback_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_playback_position,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _seek(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__seek,
      this._owner,
      _position
    );
  }
  _mix(_buffer, _rate_scale, _frames) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__mix,
      this._owner,
			Variant.Type.INT,
      _buffer, _rate_scale, _frames
    );
  }
  _tag_used_streams() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__tag_used_streams,
      this._owner,
      
    );
  }
  _set_parameter(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_parameter,
      this._owner,
      _name, _value
    );
  }
  _get_parameter(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_parameter,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name
    );
  }
  set_sample_playback(_playback_sample) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sample_playback,
      this._owner,
      _playback_sample
    );
  }
  get_sample_playback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sample_playback,
      this._owner,
			Variant.INT,
      
    );
  }
}