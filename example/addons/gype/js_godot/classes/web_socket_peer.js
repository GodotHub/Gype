import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { PacketPeer } from '@js_godot/classes/packet_peer'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_connect_to_url;
  method_accept_stream;
  method_send;
  method_send_text;
  method_was_string_packet;
  method_poll;
  method_close;
  method_get_connected_host;
  method_get_connected_port;
  method_get_selected_protocol;
  method_get_requested_url;
  method_set_no_delay;
  method_get_current_outbound_buffered_amount;
  method_get_ready_state;
  method_get_close_code;
  method_get_close_reason;
  method_get_supported_protocols;
  method_set_supported_protocols;
  method_get_handshake_headers;
  method_set_handshake_headers;
  method_get_inbound_buffer_size;
  method_set_inbound_buffer_size;
  method_get_outbound_buffer_size;
  method_set_outbound_buffer_size;
  method_set_max_queued_packets;
  method_get_max_queued_packets;
}
export class WebSocketPeer extends PacketPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WebSocketPeer");
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
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("connect_to_url");
      this._bindings.method_connect_to_url = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1966198364
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("accept_stream");
      this._bindings.method_accept_stream = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        255125695
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("send");
      this._bindings.method_send = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2780360567
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("send_text");
      this._bindings.method_send_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166001499
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("was_string_packet");
      this._bindings.method_was_string_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1047156615
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_connected_host");
      this._bindings.method_get_connected_host = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_connected_port");
      this._bindings.method_get_connected_port = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_selected_protocol");
      this._bindings.method_get_selected_protocol = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_requested_url");
      this._bindings.method_get_requested_url = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("set_no_delay");
      this._bindings.method_set_no_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_current_outbound_buffered_amount");
      this._bindings.method_get_current_outbound_buffered_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_ready_state");
      this._bindings.method_get_ready_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        346482985
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_close_code");
      this._bindings.method_get_close_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_close_reason");
      this._bindings.method_get_close_reason = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_supported_protocols");
      this._bindings.method_get_supported_protocols = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("set_supported_protocols");
      this._bindings.method_set_supported_protocols = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_handshake_headers");
      this._bindings.method_get_handshake_headers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("set_handshake_headers");
      this._bindings.method_set_handshake_headers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_inbound_buffer_size");
      this._bindings.method_get_inbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("set_inbound_buffer_size");
      this._bindings.method_set_inbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_outbound_buffer_size");
      this._bindings.method_get_outbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("set_outbound_buffer_size");
      this._bindings.method_set_outbound_buffer_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("set_max_queued_packets");
      this._bindings.method_set_max_queued_packets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("WebSocketPeer");
      let methodname = new StringName("get_max_queued_packets");
      this._bindings.method_get_max_queued_packets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  connect_to_url(_url, _tls_client_options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_connect_to_url,
      this._owner,
			Variant.INT,
      _url, _tls_client_options
    );
    
  }
  accept_stream(_stream) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_accept_stream,
      this._owner,
			Variant.INT,
      _stream
    );
    
  }
  send(_message, _write_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_send,
      this._owner,
			Variant.INT,
      _message, _write_mode
    );
    
  }
  send_text(_message) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_send_text,
      this._owner,
			Variant.INT,
      _message
    );
    
  }
  was_string_packet() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_was_string_packet,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  poll() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_poll,
      this._owner,
      
    );
    
  }
  close(_code, _reason) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_close,
      this._owner,
      _code, _reason
    );
    
  }
  get_connected_host() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connected_host,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_connected_port() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connected_port,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_selected_protocol() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected_protocol,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_requested_url() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_requested_url,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_no_delay(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_no_delay,
      this._owner,
      _enabled
    );
    
  }
  get_current_outbound_buffered_amount() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_outbound_buffered_amount,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_ready_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ready_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_close_code() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_close_code,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_close_reason() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_close_reason,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_supported_protocols() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_supported_protocols,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_supported_protocols(_protocols) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_supported_protocols,
      this._owner,
      _protocols
    );
    
  }
  get_handshake_headers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_handshake_headers,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_handshake_headers(_protocols) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_handshake_headers,
      this._owner,
      _protocols
    );
    
  }
  get_inbound_buffer_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inbound_buffer_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_inbound_buffer_size(_buffer_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inbound_buffer_size,
      this._owner,
      _buffer_size
    );
    
  }
  get_outbound_buffer_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outbound_buffer_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_outbound_buffer_size(_buffer_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outbound_buffer_size,
      this._owner,
      _buffer_size
    );
    
  }
  set_max_queued_packets(_buffer_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_queued_packets,
      this._owner,
      _buffer_size
    );
    
  }
  get_max_queued_packets() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_queued_packets,
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
get max_queued_packets () {
  return this.get_max_queued_packets();
}
set max_queued_packets (new_value) {
  this.set_max_queued_packets(new_value);
}

  static WriteMode = {
    WRITE_MODE_TEXT: 0,
    WRITE_MODE_BINARY: 1,
  }
  static State = {
    STATE_CONNECTING: 0,
    STATE_OPEN: 1,
    STATE_CLOSING: 2,
    STATE_CLOSED: 3,
  }

  static {
    this._init_bindings();
  }
}