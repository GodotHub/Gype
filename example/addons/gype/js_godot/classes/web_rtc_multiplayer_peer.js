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
  method_create_server;
  method_create_client;
  method_create_mesh;
  method_add_peer;
  method_remove_peer;
  method_has_peer;
  method_get_peer;
  method_get_peers;
}
@GodotClass
export class WebRTCMultiplayerPeer extends MultiplayerPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCMultiplayerPeer");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_server() {
    if (!this._bindings.method_create_server) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("create_server");
      this._bindings.method_create_server = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2865356025
      );
    }
  }
  static init_method_create_client() {
    if (!this._bindings.method_create_client) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("create_client");
      this._bindings.method_create_client = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2641732907
      );
    }
  }
  static init_method_create_mesh() {
    if (!this._bindings.method_create_mesh) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("create_mesh");
      this._bindings.method_create_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2641732907
      );
    }
  }
  static init_method_add_peer() {
    if (!this._bindings.method_add_peer) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("add_peer");
      this._bindings.method_add_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4078953270
      );
    }
  }
  static init_method_remove_peer() {
    if (!this._bindings.method_remove_peer) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("remove_peer");
      this._bindings.method_remove_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_has_peer() {
    if (!this._bindings.method_has_peer) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("has_peer");
      this._bindings.method_has_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_get_peer() {
    if (!this._bindings.method_get_peer) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("get_peer");
      this._bindings.method_get_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3554694381
      );
    }
  }
  static init_method_get_peers() {
    if (!this._bindings.method_get_peers) {
      let classname = new StringName("WebRTCMultiplayerPeer");
      let methodname = new StringName("get_peers");
      this._bindings.method_get_peers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }

  
  
  create_server(_channels_config) {
    WebRTCMultiplayerPeer.init_method_create_server();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_create_server,
      this._owner,
			Variant.Type.INT,
    
      _channels_config
    );
    
  }
  create_client(_peer_id, _channels_config) {
    WebRTCMultiplayerPeer.init_method_create_client();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_create_client,
      this._owner,
			Variant.Type.INT,
    
      _peer_id, _channels_config
    );
    
  }
  create_mesh(_peer_id, _channels_config) {
    WebRTCMultiplayerPeer.init_method_create_mesh();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_create_mesh,
      this._owner,
			Variant.Type.INT,
    
      _peer_id, _channels_config
    );
    
  }
  add_peer(_peer, _peer_id, _unreliable_lifetime) {
    WebRTCMultiplayerPeer.init_method_add_peer();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_add_peer,
      this._owner,
			Variant.Type.INT,
    
      _peer, _peer_id, _unreliable_lifetime
    );
    
  }
  remove_peer(_peer_id) {
    WebRTCMultiplayerPeer.init_method_remove_peer();
    return _call_native_mb_no_ret(
      WebRTCMultiplayerPeer._bindings.method_remove_peer,
      this._owner,
      _peer_id
    );
    
  }
  has_peer(_peer_id) {
    WebRTCMultiplayerPeer.init_method_has_peer();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_has_peer,
      this._owner,
			Variant.Type.BOOL,
    
      _peer_id
    );
    
  }
  get_peer(_peer_id) {
    WebRTCMultiplayerPeer.init_method_get_peer();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_get_peer,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _peer_id
    );
    
  }
  get_peers() {
    WebRTCMultiplayerPeer.init_method_get_peers();
    return _call_native_mb_ret(
      WebRTCMultiplayerPeer._bindings.method_get_peers,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  

}