import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { MultiplayerPeer } from '@js_godot/classes/multiplayer_peer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_create_client;
  method_create_server;
  method_get_peer;
  method_get_peer_address;
  method_get_peer_port;
  method_get_supported_protocols;
  method_set_supported_protocols;
  method_get_handshake_headers;
  method_set_handshake_headers;
  method_get_inbound_buffer_size;
  method_set_inbound_buffer_size;
  method_get_outbound_buffer_size;
  method_set_outbound_buffer_size;
  method_get_handshake_timeout;
  method_set_handshake_timeout;
  method_set_max_queued_packets;
  method_get_max_queued_packets;
}
@GodotClass
export class WebSocketMultiplayerPeer extends MultiplayerPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebSocketMultiplayerPeer");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_client() {
    if (!this._bindings.method_create_client) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("create_client");
      this._bindings.method_create_client = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1966198364
      );
    }
  }
  static init_method_create_server() {
    if (!this._bindings.method_create_server) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("create_server");
      this._bindings.method_create_server = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2400822951
      );
    }
  }
  static init_method_get_peer() {
    if (!this._bindings.method_get_peer) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_peer");
      this._bindings.method_get_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1381378851
      );
    }
  }
  static init_method_get_peer_address() {
    if (!this._bindings.method_get_peer_address) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_peer_address");
      this._bindings.method_get_peer_address = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_peer_port() {
    if (!this._bindings.method_get_peer_port) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_peer_port");
      this._bindings.method_get_peer_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_supported_protocols() {
    if (!this._bindings.method_get_supported_protocols) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_supported_protocols");
      this._bindings.method_get_supported_protocols = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_supported_protocols() {
    if (!this._bindings.method_set_supported_protocols) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("set_supported_protocols");
      this._bindings.method_set_supported_protocols = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015028928
      );
    }
  }
  static init_method_get_handshake_headers() {
    if (!this._bindings.method_get_handshake_headers) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_handshake_headers");
      this._bindings.method_get_handshake_headers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_handshake_headers() {
    if (!this._bindings.method_set_handshake_headers) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("set_handshake_headers");
      this._bindings.method_set_handshake_headers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015028928
      );
    }
  }
  static init_method_get_inbound_buffer_size() {
    if (!this._bindings.method_get_inbound_buffer_size) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_inbound_buffer_size");
      this._bindings.method_get_inbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_inbound_buffer_size() {
    if (!this._bindings.method_set_inbound_buffer_size) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("set_inbound_buffer_size");
      this._bindings.method_set_inbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_outbound_buffer_size() {
    if (!this._bindings.method_get_outbound_buffer_size) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_outbound_buffer_size");
      this._bindings.method_get_outbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_outbound_buffer_size() {
    if (!this._bindings.method_set_outbound_buffer_size) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("set_outbound_buffer_size");
      this._bindings.method_set_outbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_handshake_timeout() {
    if (!this._bindings.method_get_handshake_timeout) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_handshake_timeout");
      this._bindings.method_get_handshake_timeout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_handshake_timeout() {
    if (!this._bindings.method_set_handshake_timeout) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("set_handshake_timeout");
      this._bindings.method_set_handshake_timeout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_max_queued_packets() {
    if (!this._bindings.method_set_max_queued_packets) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("set_max_queued_packets");
      this._bindings.method_set_max_queued_packets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_queued_packets() {
    if (!this._bindings.method_get_max_queued_packets) {
      let classname = new StringName("WebSocketMultiplayerPeer");
      let methodname = new StringName("get_max_queued_packets");
      this._bindings.method_get_max_queued_packets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  create_client(_url, _tls_client_options) {
    WebSocketMultiplayerPeer.init_method_create_client();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_create_client,
      this._owner,
			Variant.Type.INT,
    
      _url, _tls_client_options
    );
    
  }
  create_server(_port, _bind_address, _tls_server_options) {
    WebSocketMultiplayerPeer.init_method_create_server();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_create_server,
      this._owner,
			Variant.Type.INT,
    
      _port, _bind_address, _tls_server_options
    );
    
  }
  get_peer(_peer_id) {
    WebSocketMultiplayerPeer.init_method_get_peer();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_peer,
      this._owner,
			Variant.Type.OBJECT,
      _peer_id
    );
    
  }
  get_peer_address(_id) {
    WebSocketMultiplayerPeer.init_method_get_peer_address();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_peer_address,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  get_peer_port(_id) {
    WebSocketMultiplayerPeer.init_method_get_peer_port();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_peer_port,
      this._owner,
			Variant.Type.INT,
    
      _id
    );
    
  }
  get_supported_protocols() {
    WebSocketMultiplayerPeer.init_method_get_supported_protocols();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_supported_protocols,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_supported_protocols(_protocols) {
    WebSocketMultiplayerPeer.init_method_set_supported_protocols();
    return _call_native_mb_no_ret(
      WebSocketMultiplayerPeer._bindings.method_set_supported_protocols,
      this._owner,
      _protocols
    );
    
  }
  get_handshake_headers() {
    WebSocketMultiplayerPeer.init_method_get_handshake_headers();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_handshake_headers,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_handshake_headers(_protocols) {
    WebSocketMultiplayerPeer.init_method_set_handshake_headers();
    return _call_native_mb_no_ret(
      WebSocketMultiplayerPeer._bindings.method_set_handshake_headers,
      this._owner,
      _protocols
    );
    
  }
  get_inbound_buffer_size() {
    WebSocketMultiplayerPeer.init_method_get_inbound_buffer_size();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_inbound_buffer_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_inbound_buffer_size(_buffer_size) {
    WebSocketMultiplayerPeer.init_method_set_inbound_buffer_size();
    return _call_native_mb_no_ret(
      WebSocketMultiplayerPeer._bindings.method_set_inbound_buffer_size,
      this._owner,
      _buffer_size
    );
    
  }
  get_outbound_buffer_size() {
    WebSocketMultiplayerPeer.init_method_get_outbound_buffer_size();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_outbound_buffer_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_outbound_buffer_size(_buffer_size) {
    WebSocketMultiplayerPeer.init_method_set_outbound_buffer_size();
    return _call_native_mb_no_ret(
      WebSocketMultiplayerPeer._bindings.method_set_outbound_buffer_size,
      this._owner,
      _buffer_size
    );
    
  }
  get_handshake_timeout() {
    WebSocketMultiplayerPeer.init_method_get_handshake_timeout();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_handshake_timeout,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_handshake_timeout(_timeout) {
    WebSocketMultiplayerPeer.init_method_set_handshake_timeout();
    return _call_native_mb_no_ret(
      WebSocketMultiplayerPeer._bindings.method_set_handshake_timeout,
      this._owner,
      _timeout
    );
    
  }
  set_max_queued_packets(_max_queued_packets) {
    WebSocketMultiplayerPeer.init_method_set_max_queued_packets();
    return _call_native_mb_no_ret(
      WebSocketMultiplayerPeer._bindings.method_set_max_queued_packets,
      this._owner,
      _max_queued_packets
    );
    
  }
  get_max_queued_packets() {
    WebSocketMultiplayerPeer.init_method_get_max_queued_packets();
    return _call_native_mb_ret(
      WebSocketMultiplayerPeer._bindings.method_get_max_queued_packets,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get supported_protocols () {
  return this.get_supported_protocols();
}
set supported_protocols (new_value) {
  this.set_supported_protocols(new_value);
}
get handshake_headers () {
  return this.get_handshake_headers();
}
set handshake_headers (new_value) {
  this.set_handshake_headers(new_value);
}
get inbound_buffer_size () {
  return this.get_inbound_buffer_size();
}
set inbound_buffer_size (new_value) {
  this.set_inbound_buffer_size(new_value);
}
get outbound_buffer_size () {
  return this.get_outbound_buffer_size();
}
set outbound_buffer_size (new_value) {
  this.set_outbound_buffer_size(new_value);
}
get handshake_timeout () {
  return this.get_handshake_timeout();
}
set handshake_timeout (new_value) {
  this.set_handshake_timeout(new_value);
}
get max_queued_packets () {
  return this.get_max_queued_packets();
}
set max_queued_packets (new_value) {
  this.set_max_queued_packets(new_value);
}

}