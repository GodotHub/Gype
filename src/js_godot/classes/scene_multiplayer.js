import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { NodePath } from 'src/js_godot/variant/node_path'
import { MultiplayerAPI } from 'src/js_godot/classes/multiplayer_api'
import { Callable } from 'src/js_godot/variant/callable'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneMultiplayer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_root_path");
        this._bindings.method_set_root_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("get_root_path");
        this._bindings.method_get_root_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("disconnect_peer");
        this._bindings.method_disconnect_peer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("get_authenticating_peers");
        this._bindings.method_get_authenticating_peers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969006518
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("send_auth");
        this._bindings.method_send_auth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          506032537
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("complete_auth");
        this._bindings.method_complete_auth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          844576869
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_auth_callback");
        this._bindings.method_set_auth_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1611583062
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("get_auth_callback");
        this._bindings.method_get_auth_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1307783378
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_auth_timeout");
        this._bindings.method_set_auth_timeout = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("get_auth_timeout");
        this._bindings.method_get_auth_timeout = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_refuse_new_connections");
        this._bindings.method_set_refuse_new_connections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("is_refusing_new_connections");
        this._bindings.method_is_refusing_new_connections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_allow_object_decoding");
        this._bindings.method_set_allow_object_decoding = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("is_object_decoding_allowed");
        this._bindings.method_is_object_decoding_allowed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_server_relay_enabled");
        this._bindings.method_set_server_relay_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("is_server_relay_enabled");
        this._bindings.method_is_server_relay_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("send_bytes");
        this._bindings.method_send_bytes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1307428718
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("get_max_sync_packet_size");
        this._bindings.method_get_max_sync_packet_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_max_sync_packet_size");
        this._bindings.method_set_max_sync_packet_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("get_max_delta_packet_size");
        this._bindings.method_get_max_delta_packet_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("SceneMultiplayer");
        let methodname = new StringName("set_max_delta_packet_size");
        this._bindings.method_set_max_delta_packet_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
  }
  set_root_path(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_root_path,
      this._owner,
      _path
    );
    
  }
  get_root_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_root_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  disconnect_peer(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_disconnect_peer,
      this._owner,
      _id
    );
    
  }
  get_authenticating_peers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_authenticating_peers,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  send_auth(_id, _data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_send_auth,
      this._owner,
			Variant.INT,
      _id, _data
    );
    
  }
  complete_auth(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_complete_auth,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  set_auth_callback(_callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auth_callback,
      this._owner,
      _callback
    );
    
  }
  get_auth_callback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auth_callback,
      this._owner,
			Variant.Type.CALLABLE
    ,
      
    );
    
  }
  set_auth_timeout(_timeout) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auth_timeout,
      this._owner,
      _timeout
    );
    
  }
  get_auth_timeout() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auth_timeout,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_refuse_new_connections(_refuse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_refuse_new_connections,
      this._owner,
      _refuse
    );
    
  }
  is_refusing_new_connections() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_refusing_new_connections,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_allow_object_decoding(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_object_decoding,
      this._owner,
      _enable
    );
    
  }
  is_object_decoding_allowed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_object_decoding_allowed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_server_relay_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_server_relay_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_server_relay_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_server_relay_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  send_bytes(_bytes, _id, _mode, _channel) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_send_bytes,
      this._owner,
			Variant.INT,
      _bytes, _id, _mode, _channel
    );
    
  }
  get_max_sync_packet_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_sync_packet_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max_sync_packet_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_sync_packet_size,
      this._owner,
      _size
    );
    
  }
  get_max_delta_packet_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_delta_packet_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max_delta_packet_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_delta_packet_size,
      this._owner,
      _size
    );
    
  }
}