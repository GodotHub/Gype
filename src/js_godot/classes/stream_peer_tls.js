import * as internal from '__internal__';
import { StreamPeer } from 'src/js_godot/classesstream_peer'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_poll;
    method_accept_stream;
    method_connect_to_stream;
    method_get_status;
    method_get_stream;
    method_disconnect_from_stream;
}


export class StreamPeerTLS extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerTLS");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("accept_stream");
      this._bindings.method_accept_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4292689651
      );
    }
    {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("connect_to_stream");
      this._bindings.method_connect_to_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        57169517
      );
    }
    {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("get_status");
      this._bindings.method_get_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1128380576
      );
    }
    {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("get_stream");
      this._bindings.method_get_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2741655269
      );
    }
    {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("disconnect_from_stream");
      this._bindings.method_disconnect_from_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  poll() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_poll,
      this._owner,
      
    );
  }
  accept_stream(_stream, _server_options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_accept_stream,
      this._owner,
			Variant.INT,
      _stream, _server_options
    );
  }
  connect_to_stream(_stream, _common_name, _client_options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_connect_to_stream,
      this._owner,
			Variant.INT,
      _stream, _common_name, _client_options
    );
  }
  get_status() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_status,
      this._owner,
			Variant.INT,
      
    );
  }
  get_stream() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stream,
      this._owner,
			Variant.INT,
      
    );
  }
  disconnect_from_stream() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_disconnect_from_stream,
      this._owner,
      
    );
  }
  static Status = {
    STATUS_DISCONNECTED: 0,
    STATUS_HANDSHAKING: 1,
    STATUS_CONNECTED: 2,
    STATUS_ERROR: 3,
    STATUS_ERROR_HOSTNAME_MISMATCH: 4,
  }
}