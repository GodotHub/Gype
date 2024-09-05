import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { AudioStream } from '@js_godot/classes/audio_stream'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stream_count;
  method_get_stream_count;
  method_set_sync_stream;
  method_get_sync_stream;
  method_set_sync_stream_volume;
  method_get_sync_stream_volume;
}
export class AudioStreamSynchronized extends AudioStream{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamSynchronized");
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
      let classname = new StringName("AudioStreamSynchronized");
      let methodname = new StringName("set_stream_count");
      this._bindings.method_set_stream_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamSynchronized");
      let methodname = new StringName("get_stream_count");
      this._bindings.method_get_stream_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AudioStreamSynchronized");
      let methodname = new StringName("set_sync_stream");
      this._bindings.method_set_sync_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        111075094
      );
    }
    {
      let classname = new StringName("AudioStreamSynchronized");
      let methodname = new StringName("get_sync_stream");
      this._bindings.method_get_sync_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2739380747
      );
    }
    {
      let classname = new StringName("AudioStreamSynchronized");
      let methodname = new StringName("set_sync_stream_volume");
      this._bindings.method_set_sync_stream_volume = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AudioStreamSynchronized");
      let methodname = new StringName("get_sync_stream_volume");
      this._bindings.method_get_sync_stream_volume = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
  }
  
  set_stream_count(_stream_count) {
    return _call_native_mb_no_ret(
      AudioStreamSynchronized._bindings.method_set_stream_count,
      this._owner,
      _stream_count
    );
    
  }
  get_stream_count() {
    return _call_native_mb_ret(
      AudioStreamSynchronized._bindings.method_get_stream_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sync_stream(_stream_index, _audio_stream) {
    return _call_native_mb_no_ret(
      AudioStreamSynchronized._bindings.method_set_sync_stream,
      this._owner,
      _stream_index, _audio_stream
    );
    
  }
  get_sync_stream(_stream_index) {
    return _call_native_mb_ret(
      AudioStreamSynchronized._bindings.method_get_sync_stream,
      this._owner,
			Variant.INT,
      _stream_index
    );
    
  }
  set_sync_stream_volume(_stream_index, _volume_db) {
    return _call_native_mb_no_ret(
      AudioStreamSynchronized._bindings.method_set_sync_stream_volume,
      this._owner,
      _stream_index, _volume_db
    );
    
  }
  get_sync_stream_volume(_stream_index) {
    return _call_native_mb_ret(
      AudioStreamSynchronized._bindings.method_get_sync_stream_volume,
      this._owner,
			Variant.Type.FLOAT,
      _stream_index
    );
    
  }
  
get stream_count () {
  return this.get_stream_count();
}
set stream_count (new_value) {
  this.set_stream_count(new_value);
}


  static {
    this._init_bindings();
  }
}