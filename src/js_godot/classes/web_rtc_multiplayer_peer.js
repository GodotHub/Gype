import * as internal from '__internal__';
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { MultiplayerPeer } from 'src/js_godot/classes/multiplayer_peer'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class WebRTCMultiplayerPeer extends MultiplayerPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCMultiplayerPeer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("create_server");
        this._bindings.method_create_server = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2865356025
        );
      }
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("create_client");
        this._bindings.method_create_client = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2641732907
        );
      }
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("create_mesh");
        this._bindings.method_create_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2641732907
        );
      }
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("add_peer");
        this._bindings.method_add_peer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4078953270
        );
      }
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("remove_peer");
        this._bindings.method_remove_peer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("has_peer");
        this._bindings.method_has_peer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3067735520
        );
      }
      {
        let classname = new StringName("WebRTCMultiplayerPeer");
        let methodname = new StringName("get_peer");
        this._bindings.method_get_peer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3554694381
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_server,
      this._owner,
			Variant.INT,
      _channels_config
    );
    
  }
  create_client(_peer_id, _channels_config) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_client,
      this._owner,
			Variant.INT,
      _peer_id, _channels_config
    );
    
  }
  create_mesh(_peer_id, _channels_config) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_mesh,
      this._owner,
			Variant.INT,
      _peer_id, _channels_config
    );
    
  }
  add_peer(_peer, _peer_id, _unreliable_lifetime) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_peer,
      this._owner,
			Variant.INT,
      _peer, _peer_id, _unreliable_lifetime
    );
    
  }
  remove_peer(_peer_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_peer,
      this._owner,
      _peer_id
    );
    
  }
  has_peer(_peer_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_peer,
      this._owner,
			Variant.Type.BOOL,
      _peer_id
    );
    
  }
  get_peer(_peer_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_peer,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _peer_id
    );
    
  }
  get_peers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_peers,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
}