import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { MultiplayerAPI } from '@js_godot/classes/multiplayer_api'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_root_path;
  method_get_root_path;
  method_clear;
  method_disconnect_peer;
  method_get_authenticating_peers;
  method_send_auth;
  method_complete_auth;
  method_set_auth_callback;
  method_get_auth_callback;
  method_set_auth_timeout;
  method_get_auth_timeout;
  method_set_refuse_new_connections;
  method_is_refusing_new_connections;
  method_set_allow_object_decoding;
  method_is_object_decoding_allowed;
  method_set_server_relay_enabled;
  method_is_server_relay_enabled;
  method_send_bytes;
  method_get_max_sync_packet_size;
  method_set_max_sync_packet_size;
  method_get_max_delta_packet_size;
  method_set_max_delta_packet_size;
}
export class SceneMultiplayer extends MultiplayerAPI{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneMultiplayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_root_path() {
    if (!this.#_bindings.method_set_root_path) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_root_path");
      this.#_bindings.method_set_root_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_root_path() {
    if (!this.#_bindings.method_get_root_path) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("get_root_path");
      this.#_bindings.method_get_root_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_disconnect_peer() {
    if (!this.#_bindings.method_disconnect_peer) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("disconnect_peer");
      this.#_bindings.method_disconnect_peer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_authenticating_peers() {
    if (!this.#_bindings.method_get_authenticating_peers) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("get_authenticating_peers");
      this.#_bindings.method_get_authenticating_peers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_send_auth() {
    if (!this.#_bindings.method_send_auth) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("send_auth");
      this.#_bindings.method_send_auth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        506032537
      );
    }
  }
  static init_method_complete_auth() {
    if (!this.#_bindings.method_complete_auth) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("complete_auth");
      this.#_bindings.method_complete_auth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844576869
      );
    }
  }
  static init_method_set_auth_callback() {
    if (!this.#_bindings.method_set_auth_callback) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_auth_callback");
      this.#_bindings.method_set_auth_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }
  static init_method_get_auth_callback() {
    if (!this.#_bindings.method_get_auth_callback) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("get_auth_callback");
      this.#_bindings.method_get_auth_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1307783378
      );
    }
  }
  static init_method_set_auth_timeout() {
    if (!this.#_bindings.method_set_auth_timeout) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_auth_timeout");
      this.#_bindings.method_set_auth_timeout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_auth_timeout() {
    if (!this.#_bindings.method_get_auth_timeout) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("get_auth_timeout");
      this.#_bindings.method_get_auth_timeout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_refuse_new_connections() {
    if (!this.#_bindings.method_set_refuse_new_connections) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_refuse_new_connections");
      this.#_bindings.method_set_refuse_new_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_refusing_new_connections() {
    if (!this.#_bindings.method_is_refusing_new_connections) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("is_refusing_new_connections");
      this.#_bindings.method_is_refusing_new_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_allow_object_decoding() {
    if (!this.#_bindings.method_set_allow_object_decoding) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_allow_object_decoding");
      this.#_bindings.method_set_allow_object_decoding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_object_decoding_allowed() {
    if (!this.#_bindings.method_is_object_decoding_allowed) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("is_object_decoding_allowed");
      this.#_bindings.method_is_object_decoding_allowed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_server_relay_enabled() {
    if (!this.#_bindings.method_set_server_relay_enabled) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_server_relay_enabled");
      this.#_bindings.method_set_server_relay_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_server_relay_enabled() {
    if (!this.#_bindings.method_is_server_relay_enabled) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("is_server_relay_enabled");
      this.#_bindings.method_is_server_relay_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_send_bytes() {
    if (!this.#_bindings.method_send_bytes) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("send_bytes");
      this.#_bindings.method_send_bytes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1307428718
      );
    }
  }
  static init_method_get_max_sync_packet_size() {
    if (!this.#_bindings.method_get_max_sync_packet_size) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("get_max_sync_packet_size");
      this.#_bindings.method_get_max_sync_packet_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_sync_packet_size() {
    if (!this.#_bindings.method_set_max_sync_packet_size) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_max_sync_packet_size");
      this.#_bindings.method_set_max_sync_packet_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_delta_packet_size() {
    if (!this.#_bindings.method_get_max_delta_packet_size) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("get_max_delta_packet_size");
      this.#_bindings.method_get_max_delta_packet_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_delta_packet_size() {
    if (!this.#_bindings.method_set_max_delta_packet_size) {
      let classname = new StringName("SceneMultiplayer");
      let methodname = new StringName("set_max_delta_packet_size");
      this.#_bindings.method_set_max_delta_packet_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  set_root_path(_path) {
    SceneMultiplayer.init_method_set_root_path();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_root_path,
      this._owner,
      _path
    );
    
  }
  get_root_path() {
    SceneMultiplayer.init_method_get_root_path();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_get_root_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  clear() {
    SceneMultiplayer.init_method_clear();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  disconnect_peer(_id) {
    SceneMultiplayer.init_method_disconnect_peer();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_disconnect_peer,
      this._owner,
      _id
    );
    
  }
  get_authenticating_peers() {
    SceneMultiplayer.init_method_get_authenticating_peers();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_get_authenticating_peers,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  send_auth(_id, _data) {
    SceneMultiplayer.init_method_send_auth();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_send_auth,
      this._owner,
			Variant.Type.INT,
    
      _id, _data
    );
    
  }
  complete_auth(_id) {
    SceneMultiplayer.init_method_complete_auth();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_complete_auth,
      this._owner,
			Variant.Type.INT,
    
      _id
    );
    
  }
  set_auth_callback(_callback) {
    SceneMultiplayer.init_method_set_auth_callback();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_auth_callback,
      this._owner,
      _callback
    );
    
  }
  get_auth_callback() {
    SceneMultiplayer.init_method_get_auth_callback();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_get_auth_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      
    );
    
  }
  set_auth_timeout(_timeout) {
    SceneMultiplayer.init_method_set_auth_timeout();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_auth_timeout,
      this._owner,
      _timeout
    );
    
  }
  get_auth_timeout() {
    SceneMultiplayer.init_method_get_auth_timeout();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_get_auth_timeout,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_refuse_new_connections(_refuse) {
    SceneMultiplayer.init_method_set_refuse_new_connections();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_refuse_new_connections,
      this._owner,
      _refuse
    );
    
  }
  is_refusing_new_connections() {
    SceneMultiplayer.init_method_is_refusing_new_connections();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_is_refusing_new_connections,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_object_decoding(_enable) {
    SceneMultiplayer.init_method_set_allow_object_decoding();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_allow_object_decoding,
      this._owner,
      _enable
    );
    
  }
  is_object_decoding_allowed() {
    SceneMultiplayer.init_method_is_object_decoding_allowed();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_is_object_decoding_allowed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_server_relay_enabled(_enabled) {
    SceneMultiplayer.init_method_set_server_relay_enabled();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_server_relay_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_server_relay_enabled() {
    SceneMultiplayer.init_method_is_server_relay_enabled();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_is_server_relay_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  send_bytes(_bytes, _id, _mode, _channel) {
    SceneMultiplayer.init_method_send_bytes();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_send_bytes,
      this._owner,
			Variant.Type.INT,
    
      _bytes, _id, _mode, _channel
    );
    
  }
  get_max_sync_packet_size() {
    SceneMultiplayer.init_method_get_max_sync_packet_size();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_get_max_sync_packet_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_sync_packet_size(_size) {
    SceneMultiplayer.init_method_set_max_sync_packet_size();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_max_sync_packet_size,
      this._owner,
      _size
    );
    
  }
  get_max_delta_packet_size() {
    SceneMultiplayer.init_method_get_max_delta_packet_size();
    return _call_native_mb_ret(
      SceneMultiplayer.#_bindings.method_get_max_delta_packet_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_delta_packet_size(_size) {
    SceneMultiplayer.init_method_set_max_delta_packet_size();
    return _call_native_mb_no_ret(
      SceneMultiplayer.#_bindings.method_set_max_delta_packet_size,
      this._owner,
      _size
    );
    
  }
  
get root_path () {
  return this.get_root_path();
}
set root_path (new_value) {
  this.set_root_path(new_value);
}
get auth_callback () {
  return this.get_auth_callback();
}
set auth_callback (new_value) {
  this.set_auth_callback(new_value);
}
get auth_timeout () {
  return this.get_auth_timeout();
}
set auth_timeout (new_value) {
  this.set_auth_timeout(new_value);
}
get allow_object_decoding () {
  return this.is_object_decoding_allowed();
}
set allow_object_decoding (new_value) {
  this.set_allow_object_decoding(new_value);
}
get refuse_new_connections () {
  return this.is_refusing_new_connections();
}
set refuse_new_connections (new_value) {
  this.set_refuse_new_connections(new_value);
}
get server_relay () {
  return this.is_server_relay_enabled();
}
set server_relay (new_value) {
  this.set_server_relay_enabled(new_value);
}
get max_sync_packet_size () {
  return this.get_max_sync_packet_size();
}
set max_sync_packet_size (new_value) {
  this.set_max_sync_packet_size(new_value);
}
get max_delta_packet_size () {
  return this.get_max_delta_packet_size();
}
set max_delta_packet_size (new_value) {
  this.set_max_delta_packet_size(new_value);
}

}