import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { MultiplayerPeer } from 'src/js_godot/classesmultiplayer_peer'
class _MethodBindings {
    method__get_packet;
    method__put_packet;
    method__get_available_packet_count;
    method__get_max_packet_size;
    method__get_packet_script;
    method__put_packet_script;
    method__get_packet_channel;
    method__get_packet_mode;
    method__set_transfer_channel;
    method__get_transfer_channel;
    method__set_transfer_mode;
    method__get_transfer_mode;
    method__set_target_peer;
    method__get_packet_peer;
    method__is_server;
    method__poll;
    method__close;
    method__disconnect_peer;
    method__get_unique_id;
    method__set_refuse_new_connections;
    method__is_refusing_new_connections;
    method__is_server_relay_supported;
    method__get_connection_status;
}


export class MultiplayerPeerExtension extends MultiplayerPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerPeerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_packet");
      this._bindings.method__get_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_put_packet");
      this._bindings.method__put_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_available_packet_count");
      this._bindings.method__get_available_packet_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_max_packet_size");
      this._bindings.method__get_max_packet_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_packet_script");
      this._bindings.method__get_packet_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_put_packet_script");
      this._bindings.method__put_packet_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_packet_channel");
      this._bindings.method__get_packet_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_packet_mode");
      this._bindings.method__get_packet_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_set_transfer_channel");
      this._bindings.method__set_transfer_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_transfer_channel");
      this._bindings.method__get_transfer_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_set_transfer_mode");
      this._bindings.method__set_transfer_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_transfer_mode");
      this._bindings.method__get_transfer_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_set_target_peer");
      this._bindings.method__set_target_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_packet_peer");
      this._bindings.method__get_packet_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_is_server");
      this._bindings.method__is_server = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_poll");
      this._bindings.method__poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_close");
      this._bindings.method__close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_disconnect_peer");
      this._bindings.method__disconnect_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_unique_id");
      this._bindings.method__get_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_set_refuse_new_connections");
      this._bindings.method__set_refuse_new_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_is_refusing_new_connections");
      this._bindings.method__is_refusing_new_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_is_server_relay_supported");
      this._bindings.method__is_server_relay_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerPeerExtension");
      let methodname = new StringName("_get_connection_status");
      this._bindings.method__get_connection_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_packet(_r_buffer, _r_buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet,
      this._owner,
			Variant.INT,
      _r_buffer, _r_buffer_size
    );
  }
  _put_packet(_p_buffer, _p_buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__put_packet,
      this._owner,
			Variant.INT,
      _p_buffer, _p_buffer_size
    );
  }
  _get_available_packet_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_available_packet_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_max_packet_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_max_packet_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_packet_script() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet_script,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      
    );
  }
  _put_packet_script(_p_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__put_packet_script,
      this._owner,
			Variant.INT,
      _p_buffer
    );
  }
  _get_packet_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet_channel,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_packet_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  _set_transfer_channel(_p_channel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_transfer_channel,
      this._owner,
      _p_channel
    );
  }
  _get_transfer_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_transfer_channel,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _set_transfer_mode(_p_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_transfer_mode,
      this._owner,
      _p_mode
    );
  }
  _get_transfer_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_transfer_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  _set_target_peer(_p_peer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_target_peer,
      this._owner,
      _p_peer
    );
  }
  _get_packet_peer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet_peer,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _is_server() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_server,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _poll() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__poll,
      this._owner,
      
    );
  }
  _close() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__close,
      this._owner,
      
    );
  }
  _disconnect_peer(_p_peer, _p_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__disconnect_peer,
      this._owner,
      _p_peer, _p_force
    );
  }
  _get_unique_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_unique_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _set_refuse_new_connections(_p_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_refuse_new_connections,
      this._owner,
      _p_enable
    );
  }
  _is_refusing_new_connections() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_refusing_new_connections,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _is_server_relay_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_server_relay_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_connection_status() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_connection_status,
      this._owner,
			Variant.INT,
      
    );
  }
}