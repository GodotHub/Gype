import * as internal from '__internal__';
import { AudioStream } from 'src/js_godot/classesaudio_stream'
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

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamSynchronized");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_stream_count,
      this._owner,
      _stream_count
    );
  }
  get_stream_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_sync_stream(_stream_index, _audio_stream) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sync_stream,
      this._owner,
      _stream_index, _audio_stream
    );
  }
  get_sync_stream(_stream_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sync_stream,
      this._owner,
			Variant.INT,
      _stream_index
    );
  }
  set_sync_stream_volume(_stream_index, _volume_db) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sync_stream_volume,
      this._owner,
      _stream_index, _volume_db
    );
  }
  get_sync_stream_volume(_stream_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sync_stream_volume,
      this._owner,
			Variant.Type.FLOAT,
      _stream_index
    );
  }
}