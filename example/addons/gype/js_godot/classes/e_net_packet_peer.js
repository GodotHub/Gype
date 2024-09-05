import * as internal from '__internal__';
import { PacketPeer } from '@js_godot/classes/packet_peer'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_peer_disconnect;
  method_peer_disconnect_later;
  method_peer_disconnect_now;
  method_ping;
  method_ping_interval;
  method_reset;
  method_send;
  method_throttle_configure;
  method_set_timeout;
  method_get_remote_address;
  method_get_remote_port;
  method_get_statistic;
  method_get_state;
  method_get_channels;
  method_is_active;
}
export class ENetPacketPeer extends PacketPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ENetPacketPeer");
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
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("peer_disconnect");
      this._bindings.method_peer_disconnect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("peer_disconnect_later");
      this._bindings.method_peer_disconnect_later = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("peer_disconnect_now");
      this._bindings.method_peer_disconnect_now = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("ping");
      this._bindings.method_ping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("ping_interval");
      this._bindings.method_ping_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("reset");
      this._bindings.method_reset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("send");
      this._bindings.method_send = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        120522849
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("throttle_configure");
      this._bindings.method_throttle_configure = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1649997291
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("set_timeout");
      this._bindings.method_set_timeout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1649997291
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("get_remote_address");
      this._bindings.method_get_remote_address = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("get_remote_port");
      this._bindings.method_get_remote_port = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("get_statistic");
      this._bindings.method_get_statistic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1642578323
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("get_state");
      this._bindings.method_get_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711068532
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("get_channels");
      this._bindings.method_get_channels = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ENetPacketPeer");
      let methodname = new StringName("is_active");
      this._bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  peer_disconnect(_data) {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_peer_disconnect,
      this._owner,
      _data
    );
    
  }
  peer_disconnect_later(_data) {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_peer_disconnect_later,
      this._owner,
      _data
    );
    
  }
  peer_disconnect_now(_data) {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_peer_disconnect_now,
      this._owner,
      _data
    );
    
  }
  ping() {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_ping,
      this._owner,
      
    );
    
  }
  ping_interval(_ping_interval) {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_ping_interval,
      this._owner,
      _ping_interval
    );
    
  }
  reset() {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_reset,
      this._owner,
      
    );
    
  }
  send(_channel, _packet, _flags) {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_send,
      this._owner,
			Variant.INT,
      _channel, _packet, _flags
    );
    
  }
  throttle_configure(_interval, _acceleration, _deceleration) {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_throttle_configure,
      this._owner,
      _interval, _acceleration, _deceleration
    );
    
  }
  set_timeout(_timeout, _timeout_min, _timeout_max) {
    return _call_native_mb_no_ret(
      ENetPacketPeer._bindings.method_set_timeout,
      this._owner,
      _timeout, _timeout_min, _timeout_max
    );
    
  }
  get_remote_address() {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_get_remote_address,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_remote_port() {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_get_remote_port,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_statistic(_statistic) {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_get_statistic,
      this._owner,
			Variant.Type.FLOAT,
      _statistic
    );
    
  }
  get_state() {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_get_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_channels() {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_get_channels,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_active() {
    return _call_native_mb_ret(
      ENetPacketPeer._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  

  static PeerState = {
    STATE_DISCONNECTED: 0,
    STATE_CONNECTING: 1,
    STATE_ACKNOWLEDGING_CONNECT: 2,
    STATE_CONNECTION_PENDING: 3,
    STATE_CONNECTION_SUCCEEDED: 4,
    STATE_CONNECTED: 5,
    STATE_DISCONNECT_LATER: 6,
    STATE_DISCONNECTING: 7,
    STATE_ACKNOWLEDGING_DISCONNECT: 8,
    STATE_ZOMBIE: 9,
  }
  static PeerStatistic = {
    PEER_PACKET_LOSS: 0,
    PEER_PACKET_LOSS_VARIANCE: 1,
    PEER_PACKET_LOSS_EPOCH: 2,
    PEER_ROUND_TRIP_TIME: 3,
    PEER_ROUND_TRIP_TIME_VARIANCE: 4,
    PEER_LAST_ROUND_TRIP_TIME: 5,
    PEER_LAST_ROUND_TRIP_TIME_VARIANCE: 6,
    PEER_PACKET_THROTTLE: 7,
    PEER_PACKET_THROTTLE_LIMIT: 8,
    PEER_PACKET_THROTTLE_COUNTER: 9,
    PEER_PACKET_THROTTLE_EPOCH: 10,
    PEER_PACKET_THROTTLE_ACCELERATION: 11,
    PEER_PACKET_THROTTLE_DECELERATION: 12,
    PEER_PACKET_THROTTLE_INTERVAL: 13,
  }

  static {
    this._init_bindings();
  }
}