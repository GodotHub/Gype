import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_has_multiplayer_peer;
  method_get_multiplayer_peer;
  method_set_multiplayer_peer;
  method_get_unique_id;
  method_is_server;
  method_get_remote_sender_id;
  method_poll;
  method_rpc;
  method_object_configuration_add;
  method_object_configuration_remove;
  method_get_peers;
  method_set_default_interface;
  method_get_default_interface;
  method_create_default_interface;
}
export class MultiplayerAPI extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerAPI");
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
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("has_multiplayer_peer");
      this._bindings.method_has_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_multiplayer_peer");
      this._bindings.method_get_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3223692825
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("set_multiplayer_peer");
      this._bindings.method_set_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3694835298
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_unique_id");
      this._bindings.method_get_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("is_server");
      this._bindings.method_is_server = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_remote_sender_id");
      this._bindings.method_get_remote_sender_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("rpc");
      this._bindings.method_rpc = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2077486355
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("object_configuration_add");
      this._bindings.method_object_configuration_add = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1171879464
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("object_configuration_remove");
      this._bindings.method_object_configuration_remove = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1171879464
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_peers");
      this._bindings.method_get_peers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969006518
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("set_default_interface");
      this._bindings.method_set_default_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_default_interface");
      this._bindings.method_get_default_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2737447660
      );
    }
    {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("create_default_interface");
      this._bindings.method_create_default_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3294156723
      );
    }
  }
  
  has_multiplayer_peer() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_has_multiplayer_peer,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_multiplayer_peer() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_multiplayer_peer,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_multiplayer_peer(_peer) {
    return _call_native_mb_no_ret(
      MultiplayerAPI._bindings.method_set_multiplayer_peer,
      this._owner,
      _peer
    );
    
  }
  get_unique_id() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_unique_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_server() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_is_server,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_remote_sender_id() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_remote_sender_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  poll() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_poll,
      this._owner,
			Variant.INT,
      
    );
    
  }
  rpc(_peer, _object, _method, _arguments) {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_rpc,
      this._owner,
			Variant.INT,
      _peer, _object, _method, _arguments
    );
    
  }
  object_configuration_add(_object, _configuration) {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_object_configuration_add,
      this._owner,
			Variant.INT,
      _object, _configuration
    );
    
  }
  object_configuration_remove(_object, _configuration) {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_object_configuration_remove,
      this._owner,
			Variant.INT,
      _object, _configuration
    );
    
  }
  get_peers() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_peers,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_default_interface(_interface_name) {
    return _call_native_mb_no_ret(
      MultiplayerAPI._bindings.method_set_default_interface,
      this._owner,
      _interface_name
    );
    
  }
  get_default_interface() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_default_interface,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  create_default_interface() {
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_create_default_interface,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get multiplayer_peer () {
  return this.get_multiplayer_peer();
}
set multiplayer_peer (new_value) {
  this.set_multiplayer_peer(new_value);
}

  static RPCMode = {
    RPC_MODE_DISABLED: 0,
    RPC_MODE_ANY_PEER: 1,
    RPC_MODE_AUTHORITY: 2,
  }

  static {
    this._init_bindings();
  }
}