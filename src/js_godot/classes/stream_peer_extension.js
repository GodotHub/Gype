import * as internal from '__internal__';
import { StreamPeer } from 'src/js_godot/classesstream_peer'
class _MethodBindings {
    method__get_data;
    method__get_partial_data;
    method__put_data;
    method__put_partial_data;
    method__get_available_bytes;
}


export class StreamPeerExtension extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("StreamPeerExtension");
      let methodname = new StringName("_get_data");
      this._bindings.method__get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("StreamPeerExtension");
      let methodname = new StringName("_get_partial_data");
      this._bindings.method__get_partial_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("StreamPeerExtension");
      let methodname = new StringName("_put_data");
      this._bindings.method__put_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("StreamPeerExtension");
      let methodname = new StringName("_put_partial_data");
      this._bindings.method__put_partial_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("StreamPeerExtension");
      let methodname = new StringName("_get_available_bytes");
      this._bindings.method__get_available_bytes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_data(_r_buffer, _r_bytes, _r_received) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_data,
      this._owner,
			Variant.INT,
      _r_buffer, _r_bytes, _r_received
    );
  }
  _get_partial_data(_r_buffer, _r_bytes, _r_received) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_partial_data,
      this._owner,
			Variant.INT,
      _r_buffer, _r_bytes, _r_received
    );
  }
  _put_data(_p_data, _p_bytes, _r_sent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__put_data,
      this._owner,
			Variant.INT,
      _p_data, _p_bytes, _r_sent
    );
  }
  _put_partial_data(_p_data, _p_bytes, _r_sent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__put_partial_data,
      this._owner,
			Variant.INT,
      _p_data, _p_bytes, _r_sent
    );
  }
  _get_available_bytes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_available_bytes,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}