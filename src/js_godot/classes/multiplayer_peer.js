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
  method_set_transfer_channel;
  method_get_transfer_channel;
  method_set_transfer_mode;
  method_get_transfer_mode;
  method_set_target_peer;
  method_get_packet_peer;
  method_get_packet_channel;
  method_get_packet_mode;
  method_poll;
  method_close;
  method_disconnect_peer;
  method_get_connection_status;
  method_get_unique_id;
  method_generate_unique_id;
  method_set_refuse_new_connections;
  method_is_refusing_new_connections;
  method_is_server_relay_supported;
}
export class MultiplayerPeer extends PacketPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerPeer");
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
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("set_transfer_channel");
      this._bindings.method_set_transfer_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_transfer_channel");
      this._bindings.method_get_transfer_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("set_transfer_mode");
      this._bindings.method_set_transfer_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        950411049
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_transfer_mode");
      this._bindings.method_get_transfer_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3369852622
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("set_target_peer");
      this._bindings.method_set_target_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_packet_peer");
      this._bindings.method_get_packet_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_packet_channel");
      this._bindings.method_get_packet_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_packet_mode");
      this._bindings.method_get_packet_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3369852622
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("disconnect_peer");
      this._bindings.method_disconnect_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4023243586
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_connection_status");
      this._bindings.method_get_connection_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2147374275
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("get_unique_id");
      this._bindings.method_get_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("generate_unique_id");
      this._bindings.method_generate_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("set_refuse_new_connections");
      this._bindings.method_set_refuse_new_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("is_refusing_new_connections");
      this._bindings.method_is_refusing_new_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("MultiplayerPeer");
      let methodname = new StringName("is_server_relay_supported");
      this._bindings.method_is_server_relay_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  set_transfer_channel(_channel) {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_set_transfer_channel,
      this._owner,
      _channel
    );
    
  }
  get_transfer_channel() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_transfer_channel,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_transfer_mode(_mode) {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_set_transfer_mode,
      this._owner,
      _mode
    );
    
  }
  get_transfer_mode() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_transfer_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_target_peer(_id) {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_set_target_peer,
      this._owner,
      _id
    );
    
  }
  get_packet_peer() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_packet_peer,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_packet_channel() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_packet_channel,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_packet_mode() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_packet_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  poll() {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_poll,
      this._owner,
      
    );
    
  }
  close() {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_close,
      this._owner,
      
    );
    
  }
  disconnect_peer(_peer, _force) {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_disconnect_peer,
      this._owner,
      _peer, _force
    );
    
  }
  get_connection_status() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_connection_status,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_unique_id() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_get_unique_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  generate_unique_id() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_generate_unique_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_refuse_new_connections(_enable) {
    return _call_native_mb_no_ret(
      MultiplayerPeer._bindings.method_set_refuse_new_connections,
      this._owner,
      _enable
    );
    
  }
  is_refusing_new_connections() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_is_refusing_new_connections,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_server_relay_supported() {
    return _call_native_mb_ret(
      MultiplayerPeer._bindings.method_is_server_relay_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get refuse_new_connections () {
  return this.is_refusing_new_connections();
}
set refuse_new_connections (new_value) {
  this.set_refuse_new_connections(new_value);
}
get transfer_mode () {
  return this.get_transfer_mode();
}
set transfer_mode (new_value) {
  this.set_transfer_mode(new_value);
}
get transfer_channel () {
  return this.get_transfer_channel();
}
set transfer_channel (new_value) {
  this.set_transfer_channel(new_value);
}

  static ConnectionStatus = {
    CONNECTION_DISCONNECTED: 0,
    CONNECTION_CONNECTING: 1,
    CONNECTION_CONNECTED: 2,
  }
  static TransferMode = {
    TRANSFER_MODE_UNRELIABLE: 0,
    TRANSFER_MODE_UNRELIABLE_ORDERED: 1,
    TRANSFER_MODE_RELIABLE: 2,
  }

  static {
    this._init_bindings();
  }
}