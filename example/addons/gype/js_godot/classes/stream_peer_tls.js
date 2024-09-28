import * as internal from '__internal__';
import { StreamPeer } from '@js_godot/classes/stream_peer'
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
  method_poll;
  method_accept_stream;
  method_connect_to_stream;
  method_get_status;
  method_get_stream;
  method_disconnect_from_stream;
}
@GodotClass
export class StreamPeerTLS extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerTLS");
    } else {
      super(godot_object);
    }
  }
  static init_method_poll() {
    if (!this._bindings.method_poll) {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_accept_stream() {
    if (!this._bindings.method_accept_stream) {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("accept_stream");
      this._bindings.method_accept_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4292689651
      );
    }
  }
  static init_method_connect_to_stream() {
    if (!this._bindings.method_connect_to_stream) {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("connect_to_stream");
      this._bindings.method_connect_to_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        57169517
      );
    }
  }
  static init_method_get_status() {
    if (!this._bindings.method_get_status) {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("get_status");
      this._bindings.method_get_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1128380576
      );
    }
  }
  static init_method_get_stream() {
    if (!this._bindings.method_get_stream) {
      let classname = new StringName("StreamPeerTLS");
      let methodname = new StringName("get_stream");
      this._bindings.method_get_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2741655269
      );
    }
  }
  static init_method_disconnect_from_stream() {
    if (!this._bindings.method_disconnect_from_stream) {
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
    StreamPeerTLS.init_method_poll();
    return _call_native_mb_no_ret(
      StreamPeerTLS._bindings.method_poll,
      this._owner,
      
    );
    
  }
  accept_stream(_stream, _server_options) {
    StreamPeerTLS.init_method_accept_stream();
    return _call_native_mb_ret(
      StreamPeerTLS._bindings.method_accept_stream,
      this._owner,
			Variant.Type.INT,
    
      _stream, _server_options
    );
    
  }
  connect_to_stream(_stream, _common_name, _client_options) {
    StreamPeerTLS.init_method_connect_to_stream();
    return _call_native_mb_ret(
      StreamPeerTLS._bindings.method_connect_to_stream,
      this._owner,
			Variant.Type.INT,
    
      _stream, _common_name, _client_options
    );
    
  }
  get_status() {
    StreamPeerTLS.init_method_get_status();
    return _call_native_mb_ret(
      StreamPeerTLS._bindings.method_get_status,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_stream() {
    StreamPeerTLS.init_method_get_stream();
    return _call_native_mb_ret(
      StreamPeerTLS._bindings.method_get_stream,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  disconnect_from_stream() {
    StreamPeerTLS.init_method_disconnect_from_stream();
    return _call_native_mb_no_ret(
      StreamPeerTLS._bindings.method_disconnect_from_stream,
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