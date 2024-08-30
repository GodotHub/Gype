import * as internal from '__internal__';
import { PacketPeer } from 'src/js_godot/classes/packet_peer'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_bind;
    method_close;
    method_wait;
    method_is_bound;
    method_connect_to_host;
    method_is_socket_connected;
    method_get_packet_ip;
    method_get_packet_port;
    method_get_local_port;
    method_set_dest_address;
    method_set_broadcast_enabled;
    method_join_multicast_group;
    method_leave_multicast_group;
}


export class PacketPeerUDP extends PacketPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerUDP");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("bind");
        this._bindings.method_bind = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4051239242
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("close");
        this._bindings.method_close = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("wait");
        this._bindings.method_wait = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("is_bound");
        this._bindings.method_is_bound = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("connect_to_host");
        this._bindings.method_connect_to_host = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          993915709
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("is_socket_connected");
        this._bindings.method_is_socket_connected = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("get_packet_ip");
        this._bindings.method_get_packet_ip = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("get_packet_port");
        this._bindings.method_get_packet_port = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("get_local_port");
        this._bindings.method_get_local_port = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("set_dest_address");
        this._bindings.method_set_dest_address = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          993915709
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("set_broadcast_enabled");
        this._bindings.method_set_broadcast_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("join_multicast_group");
        this._bindings.method_join_multicast_group = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
      {
        let classname = new StringName("PacketPeerUDP");
        let methodname = new StringName("leave_multicast_group");
        this._bindings.method_leave_multicast_group = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
  }
  bind(_port, _bind_address, _recv_buf_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bind,
      this._owner,
			Variant.INT,
      _port, _bind_address, _recv_buf_size
    );
    
  }
  close() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_close,
      this._owner,
      
    );
    
  }
  wait() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_wait,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_bound() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_bound,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  connect_to_host(_host, _port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_connect_to_host,
      this._owner,
			Variant.INT,
      _host, _port
    );
    
  }
  is_socket_connected() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_socket_connected,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_packet_ip() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_packet_ip,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_packet_port() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_packet_port,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_local_port() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_port,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_dest_address(_host, _port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_dest_address,
      this._owner,
			Variant.INT,
      _host, _port
    );
    
  }
  set_broadcast_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_broadcast_enabled,
      this._owner,
      _enabled
    );
    
  }
  join_multicast_group(_multicast_address, _interface_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_join_multicast_group,
      this._owner,
			Variant.INT,
      _multicast_address, _interface_name
    );
    
  }
  leave_multicast_group(_multicast_address, _interface_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_leave_multicast_group,
      this._owner,
			Variant.INT,
      _multicast_address, _interface_name
    );
    
  }
}