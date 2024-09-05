import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { MultiplayerPeer } from '@js_godot/classes/multiplayer_peer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_server;
  method_create_client;
  method_create_mesh;
  method_add_mesh_peer;
  method_set_bind_ip;
  method_get_host;
  method_get_peer;
}
export class ENetMultiplayerPeer extends MultiplayerPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ENetMultiplayerPeer");
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
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("create_server");
      this._bindings.method_create_server = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2917761309
      );
    }
    {
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("create_client");
      this._bindings.method_create_client = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2327163476
      );
    }
    {
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("create_mesh");
      this._bindings.method_create_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844576869
      );
    }
    {
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("add_mesh_peer");
      this._bindings.method_add_mesh_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1293458335
      );
    }
    {
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("set_bind_ip");
      this._bindings.method_set_bind_ip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("get_host");
      this._bindings.method_get_host = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4103238886
      );
    }
    {
      let classname = new StringName("ENetMultiplayerPeer");
      let methodname = new StringName("get_peer");
      this._bindings.method_get_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3793311544
      );
    }
  }
  
  create_server(_port, _max_clients, _max_channels, _in_bandwidth, _out_bandwidth) {
    return _call_native_mb_ret(
      ENetMultiplayerPeer._bindings.method_create_server,
      this._owner,
			Variant.INT,
      _port, _max_clients, _max_channels, _in_bandwidth, _out_bandwidth
    );
    
  }
  create_client(_address, _port, _channel_count, _in_bandwidth, _out_bandwidth, _local_port) {
    return _call_native_mb_ret(
      ENetMultiplayerPeer._bindings.method_create_client,
      this._owner,
			Variant.INT,
      _address, _port, _channel_count, _in_bandwidth, _out_bandwidth, _local_port
    );
    
  }
  create_mesh(_unique_id) {
    return _call_native_mb_ret(
      ENetMultiplayerPeer._bindings.method_create_mesh,
      this._owner,
			Variant.INT,
      _unique_id
    );
    
  }
  add_mesh_peer(_peer_id, _host) {
    return _call_native_mb_ret(
      ENetMultiplayerPeer._bindings.method_add_mesh_peer,
      this._owner,
			Variant.INT,
      _peer_id, _host
    );
    
  }
  set_bind_ip(_ip) {
    return _call_native_mb_no_ret(
      ENetMultiplayerPeer._bindings.method_set_bind_ip,
      this._owner,
      _ip
    );
    
  }
  get_host() {
    return _call_native_mb_ret(
      ENetMultiplayerPeer._bindings.method_get_host,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_peer(_id) {
    return _call_native_mb_ret(
      ENetMultiplayerPeer._bindings.method_get_peer,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  
get host () {
  return this.get_host();
}


  static {
    this._init_bindings();
  }
}