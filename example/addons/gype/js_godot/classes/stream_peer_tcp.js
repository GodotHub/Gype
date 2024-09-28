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
  method_bind;
  method_connect_to_host;
  method_poll;
  method_get_status;
  method_get_connected_host;
  method_get_connected_port;
  method_get_local_port;
  method_disconnect_from_host;
  method_set_no_delay;
}
@GodotClass
export class StreamPeerTCP extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerTCP");
    } else {
      super(godot_object);
    }
  }
  static init_method_bind() {
    if (!this._bindings.method_bind) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("bind");
      this._bindings.method_bind = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3167955072
      );
    }
  }
  static init_method_connect_to_host() {
    if (!this._bindings.method_connect_to_host) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("connect_to_host");
      this._bindings.method_connect_to_host = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        993915709
      );
    }
  }
  static init_method_poll() {
    if (!this._bindings.method_poll) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_get_status() {
    if (!this._bindings.method_get_status) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("get_status");
      this._bindings.method_get_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        859471121
      );
    }
  }
  static init_method_get_connected_host() {
    if (!this._bindings.method_get_connected_host) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("get_connected_host");
      this._bindings.method_get_connected_host = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_connected_port() {
    if (!this._bindings.method_get_connected_port) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("get_connected_port");
      this._bindings.method_get_connected_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_local_port() {
    if (!this._bindings.method_get_local_port) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("get_local_port");
      this._bindings.method_get_local_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_disconnect_from_host() {
    if (!this._bindings.method_disconnect_from_host) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("disconnect_from_host");
      this._bindings.method_disconnect_from_host = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_no_delay() {
    if (!this._bindings.method_set_no_delay) {
      let classname = new StringName("StreamPeerTCP");
      let methodname = new StringName("set_no_delay");
      this._bindings.method_set_no_delay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }

  
  
  bind(_port, _host) {
    StreamPeerTCP.init_method_bind();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_bind,
      this._owner,
			Variant.Type.INT,
    
      _port, _host
    );
    
  }
  connect_to_host(_host, _port) {
    StreamPeerTCP.init_method_connect_to_host();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_connect_to_host,
      this._owner,
			Variant.Type.INT,
    
      _host, _port
    );
    
  }
  poll() {
    StreamPeerTCP.init_method_poll();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_poll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_status() {
    StreamPeerTCP.init_method_get_status();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_get_status,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_connected_host() {
    StreamPeerTCP.init_method_get_connected_host();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_get_connected_host,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_connected_port() {
    StreamPeerTCP.init_method_get_connected_port();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_get_connected_port,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_local_port() {
    StreamPeerTCP.init_method_get_local_port();
    return _call_native_mb_ret(
      StreamPeerTCP._bindings.method_get_local_port,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  disconnect_from_host() {
    StreamPeerTCP.init_method_disconnect_from_host();
    return _call_native_mb_no_ret(
      StreamPeerTCP._bindings.method_disconnect_from_host,
      this._owner,
      
    );
    
  }
  set_no_delay(_enabled) {
    StreamPeerTCP.init_method_set_no_delay();
    return _call_native_mb_no_ret(
      StreamPeerTCP._bindings.method_set_no_delay,
      this._owner,
      _enabled
    );
    
  }
  

  static Status = {
    STATUS_NONE: 0,
    STATUS_CONNECTING: 1,
    STATUS_CONNECTED: 2,
    STATUS_ERROR: 3,
  }
}