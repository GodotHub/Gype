import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PacketPeer } from '@js_godot/classes/packet_peer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_poll;
  method_connect_to_peer;
  method_get_status;
  method_disconnect_from_peer;
}
export class PacketPeerDTLS extends PacketPeer{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerDTLS");
    } else {
      super(godot_object);
    }
  }
  static init_method_poll() {
    if (!this.#_bindings.method_poll) {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("poll");
      this.#_bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_connect_to_peer() {
    if (!this.#_bindings.method_connect_to_peer) {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("connect_to_peer");
      this.#_bindings.method_connect_to_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2880188099
      );
    }
  }
  static init_method_get_status() {
    if (!this.#_bindings.method_get_status) {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("get_status");
      this.#_bindings.method_get_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3248654679
      );
    }
  }
  static init_method_disconnect_from_peer() {
    if (!this.#_bindings.method_disconnect_from_peer) {
      let classname = new StringName("PacketPeerDTLS");
      let methodname = new StringName("disconnect_from_peer");
      this.#_bindings.method_disconnect_from_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  poll() {
    PacketPeerDTLS.init_method_poll();
    return _call_native_mb_no_ret(
      PacketPeerDTLS.#_bindings.method_poll,
      this._owner,
      
    );
    
  }
  connect_to_peer(_packet_peer, _hostname, _client_options) {
    PacketPeerDTLS.init_method_connect_to_peer();
    return _call_native_mb_ret(
      PacketPeerDTLS.#_bindings.method_connect_to_peer,
      this._owner,
			Variant.Type.INT,
    
      _packet_peer, _hostname, _client_options
    );
    
  }
  get_status() {
    PacketPeerDTLS.init_method_get_status();
    return _call_native_mb_ret(
      PacketPeerDTLS.#_bindings.method_get_status,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  disconnect_from_peer() {
    PacketPeerDTLS.init_method_disconnect_from_peer();
    return _call_native_mb_no_ret(
      PacketPeerDTLS.#_bindings.method_disconnect_from_peer,
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