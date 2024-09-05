import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_host_bound;
  method_create_host;
  method_destroy;
  method_connect_to_host;
  method_service;
  method_flush;
  method_bandwidth_limit;
  method_channel_limit;
  method_broadcast;
  method_compress;
  method_dtls_server_setup;
  method_dtls_client_setup;
  method_refuse_new_connections;
  method_pop_statistic;
  method_get_max_channels;
  method_get_local_port;
  method_get_peers;
  method_socket_send;
}
export class ENetConnection extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ENetConnection");
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
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("create_host_bound");
      this._bindings.method_create_host_bound = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1515002313
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("create_host");
      this._bindings.method_create_host = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        117198950
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("destroy");
      this._bindings.method_destroy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("connect_to_host");
      this._bindings.method_connect_to_host = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2171300490
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("service");
      this._bindings.method_service = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2402345344
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("flush");
      this._bindings.method_flush = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("bandwidth_limit");
      this._bindings.method_bandwidth_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2302169788
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("channel_limit");
      this._bindings.method_channel_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("broadcast");
      this._bindings.method_broadcast = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2772371345
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("compress");
      this._bindings.method_compress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2660215187
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("dtls_server_setup");
      this._bindings.method_dtls_server_setup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1262296096
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("dtls_client_setup");
      this._bindings.method_dtls_client_setup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1966198364
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("refuse_new_connections");
      this._bindings.method_refuse_new_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("pop_statistic");
      this._bindings.method_pop_statistic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2166904170
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("get_max_channels");
      this._bindings.method_get_max_channels = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("get_local_port");
      this._bindings.method_get_local_port = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("get_peers");
      this._bindings.method_get_peers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
    {
      let classname = new StringName("ENetConnection");
      let methodname = new StringName("socket_send");
      this._bindings.method_socket_send = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1100646812
      );
    }
  }
  
  create_host_bound(_bind_address, _bind_port, _max_peers, _max_channels, _in_bandwidth, _out_bandwidth) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_create_host_bound,
      this._owner,
			Variant.INT,
      _bind_address, _bind_port, _max_peers, _max_channels, _in_bandwidth, _out_bandwidth
    );
    
  }
  create_host(_max_peers, _max_channels, _in_bandwidth, _out_bandwidth) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_create_host,
      this._owner,
			Variant.INT,
      _max_peers, _max_channels, _in_bandwidth, _out_bandwidth
    );
    
  }
  destroy() {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_destroy,
      this._owner,
      
    );
    
  }
  connect_to_host(_address, _port, _channels, _data) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_connect_to_host,
      this._owner,
			Variant.INT,
      _address, _port, _channels, _data
    );
    
  }
  service(_timeout) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_service,
      this._owner,
			Variant.Type.ARRAY,
    
      _timeout
    );
    
  }
  flush() {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_flush,
      this._owner,
      
    );
    
  }
  bandwidth_limit(_in_bandwidth, _out_bandwidth) {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_bandwidth_limit,
      this._owner,
      _in_bandwidth, _out_bandwidth
    );
    
  }
  channel_limit(_limit) {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_channel_limit,
      this._owner,
      _limit
    );
    
  }
  broadcast(_channel, _packet, _flags) {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_broadcast,
      this._owner,
      _channel, _packet, _flags
    );
    
  }
  compress(_mode) {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_compress,
      this._owner,
      _mode
    );
    
  }
  dtls_server_setup(_server_options) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_dtls_server_setup,
      this._owner,
			Variant.INT,
      _server_options
    );
    
  }
  dtls_client_setup(_hostname, _client_options) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_dtls_client_setup,
      this._owner,
			Variant.INT,
      _hostname, _client_options
    );
    
  }
  refuse_new_connections(_refuse) {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_refuse_new_connections,
      this._owner,
      _refuse
    );
    
  }
  pop_statistic(_statistic) {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_pop_statistic,
      this._owner,
			Variant.Type.FLOAT,
      _statistic
    );
    
  }
  get_max_channels() {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_get_max_channels,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_local_port() {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_get_local_port,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_peers() {
    return _call_native_mb_ret(
      ENetConnection._bindings.method_get_peers,
      this._owner,
			Variant.INT,
      
    );
    
  }
  socket_send(_destination_address, _destination_port, _packet) {
    return _call_native_mb_no_ret(
      ENetConnection._bindings.method_socket_send,
      this._owner,
      _destination_address, _destination_port, _packet
    );
    
  }
  

  static CompressionMode = {
    COMPRESS_NONE: 0,
    COMPRESS_RANGE_CODER: 1,
    COMPRESS_FASTLZ: 2,
    COMPRESS_ZLIB: 3,
    COMPRESS_ZSTD: 4,
  }
  static EventType = {
    EVENT_ERROR: -1,
    EVENT_NONE: 0,
    EVENT_CONNECT: 1,
    EVENT_DISCONNECT: 2,
    EVENT_RECEIVE: 3,
  }
  static HostStatistic = {
    HOST_TOTAL_SENT_DATA: 0,
    HOST_TOTAL_SENT_PACKETS: 1,
    HOST_TOTAL_RECEIVED_DATA: 2,
    HOST_TOTAL_RECEIVED_PACKETS: 3,
  }

  static {
    this._init_bindings();
  }
}