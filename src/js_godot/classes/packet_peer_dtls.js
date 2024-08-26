import * as internal from '__internal__';
import { PacketPeer } from 'src/js_godot/classespacket_peer'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_poll;
    method_connect_to_peer;
    method_get_status;
    method_disconnect_from_peer;
}


export class PacketPeerDTLS extends PacketPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerDTLS");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("connect_to_peer");
      this._bindings.method_connect_to_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2880188099
      );
    }
    {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("get_status");
      this._bindings.method_get_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3248654679
      );
    }
    {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("disconnect_from_peer");
      this._bindings.method_disconnect_from_peer = internal.classdb_get_method_bind(
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
  connect_to_peer(_packet_peer, _hostname, _client_options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_connect_to_peer,
      this._owner,
			Variant.INT,
      _packet_peer, _hostname, _client_options
    );
  }
  get_status() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_status,
      this._owner,
			Variant.INT,
      
    );
  }
  disconnect_from_peer() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_disconnect_from_peer,
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