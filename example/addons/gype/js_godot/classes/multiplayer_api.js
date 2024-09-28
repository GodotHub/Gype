import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
@GodotClass
export class MultiplayerAPI extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerAPI");
    } else {
      super(godot_object);
    }
  }
  static init_method_has_multiplayer_peer() {
    if (!this._bindings.method_has_multiplayer_peer) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("has_multiplayer_peer");
      this._bindings.method_has_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_multiplayer_peer() {
    if (!this._bindings.method_get_multiplayer_peer) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_multiplayer_peer");
      this._bindings.method_get_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3223692825
      );
    }
  }
  static init_method_set_multiplayer_peer() {
    if (!this._bindings.method_set_multiplayer_peer) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("set_multiplayer_peer");
      this._bindings.method_set_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3694835298
      );
    }
  }
  static init_method_get_unique_id() {
    if (!this._bindings.method_get_unique_id) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_unique_id");
      this._bindings.method_get_unique_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_is_server() {
    if (!this._bindings.method_is_server) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("is_server");
      this._bindings.method_is_server = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_remote_sender_id() {
    if (!this._bindings.method_get_remote_sender_id) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_remote_sender_id");
      this._bindings.method_get_remote_sender_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_poll() {
    if (!this._bindings.method_poll) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_rpc() {
    if (!this._bindings.method_rpc) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("rpc");
      this._bindings.method_rpc = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2077486355
      );
    }
  }
  static init_method_object_configuration_add() {
    if (!this._bindings.method_object_configuration_add) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("object_configuration_add");
      this._bindings.method_object_configuration_add = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1171879464
      );
    }
  }
  static init_method_object_configuration_remove() {
    if (!this._bindings.method_object_configuration_remove) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("object_configuration_remove");
      this._bindings.method_object_configuration_remove = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1171879464
      );
    }
  }
  static init_method_get_peers() {
    if (!this._bindings.method_get_peers) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_peers");
      this._bindings.method_get_peers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_default_interface() {
    if (!this._bindings.method_set_default_interface) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("set_default_interface");
      this._bindings.method_set_default_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_default_interface() {
    if (!this._bindings.method_get_default_interface) {
      let classname = new StringName("MultiplayerAPI");
      let methodname = new StringName("get_default_interface");
      this._bindings.method_get_default_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2737447660
      );
    }
  }
  static init_method_create_default_interface() {
    if (!this._bindings.method_create_default_interface) {
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
    MultiplayerAPI.init_method_has_multiplayer_peer();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_has_multiplayer_peer,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_multiplayer_peer() {
    MultiplayerAPI.init_method_get_multiplayer_peer();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_multiplayer_peer,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_multiplayer_peer(_peer) {
    MultiplayerAPI.init_method_set_multiplayer_peer();
    return _call_native_mb_no_ret(
      MultiplayerAPI._bindings.method_set_multiplayer_peer,
      this._owner,
      _peer
    );
    
  }
  get_unique_id() {
    MultiplayerAPI.init_method_get_unique_id();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_unique_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_server() {
    MultiplayerAPI.init_method_is_server();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_is_server,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_remote_sender_id() {
    MultiplayerAPI.init_method_get_remote_sender_id();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_remote_sender_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  poll() {
    MultiplayerAPI.init_method_poll();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_poll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  rpc(_peer, _object, _method, _arguments) {
    MultiplayerAPI.init_method_rpc();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_rpc,
      this._owner,
			Variant.Type.INT,
    
      _peer, _object, _method, _arguments
    );
    
  }
  object_configuration_add(_object, _configuration) {
    MultiplayerAPI.init_method_object_configuration_add();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_object_configuration_add,
      this._owner,
			Variant.Type.INT,
    
      _object, _configuration
    );
    
  }
  object_configuration_remove(_object, _configuration) {
    MultiplayerAPI.init_method_object_configuration_remove();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_object_configuration_remove,
      this._owner,
			Variant.Type.INT,
    
      _object, _configuration
    );
    
  }
  get_peers() {
    MultiplayerAPI.init_method_get_peers();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_peers,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_default_interface(_interface_name) {
    MultiplayerAPI.init_method_set_default_interface();
    return _call_native_mb_no_ret(
      MultiplayerAPI._bindings.method_set_default_interface,
      this._owner,
      _interface_name
    );
    
  }
  get_default_interface() {
    MultiplayerAPI.init_method_get_default_interface();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_get_default_interface,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  create_default_interface() {
    MultiplayerAPI.init_method_create_default_interface();
    return _call_native_mb_ret(
      MultiplayerAPI._bindings.method_create_default_interface,
      this._owner,
			Variant.Type.OBJECT,
      
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
}