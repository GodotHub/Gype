import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_listen;
  method_poll;
  method_is_connection_available;
  method_get_local_port;
  method_is_listening;
  method_take_connection;
  method_stop;
  method_set_max_pending_connections;
  method_get_max_pending_connections;
}
export class UDPServer extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("UDPServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_listen() {
    if (!this.#_bindings.method_listen) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("listen");
      this.#_bindings.method_listen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3167955072
      );
    }
  }
  static init_method_poll() {
    if (!this.#_bindings.method_poll) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("poll");
      this.#_bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_is_connection_available() {
    if (!this.#_bindings.method_is_connection_available) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("is_connection_available");
      this.#_bindings.method_is_connection_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_local_port() {
    if (!this.#_bindings.method_get_local_port) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("get_local_port");
      this.#_bindings.method_get_local_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_listening() {
    if (!this.#_bindings.method_is_listening) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("is_listening");
      this.#_bindings.method_is_listening = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_take_connection() {
    if (!this.#_bindings.method_take_connection) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("take_connection");
      this.#_bindings.method_take_connection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        808734560
      );
    }
  }
  static init_method_stop() {
    if (!this.#_bindings.method_stop) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("stop");
      this.#_bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_max_pending_connections() {
    if (!this.#_bindings.method_set_max_pending_connections) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("set_max_pending_connections");
      this.#_bindings.method_set_max_pending_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_pending_connections() {
    if (!this.#_bindings.method_get_max_pending_connections) {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("get_max_pending_connections");
      this.#_bindings.method_get_max_pending_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  listen(_port, _bind_address) {
    UDPServer.init_method_listen();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_listen,
      this._owner,
			Variant.Type.INT,
    
      _port, _bind_address
    );
    
  }
  poll() {
    UDPServer.init_method_poll();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_poll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_connection_available() {
    UDPServer.init_method_is_connection_available();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_is_connection_available,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_local_port() {
    UDPServer.init_method_get_local_port();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_get_local_port,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_listening() {
    UDPServer.init_method_is_listening();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_is_listening,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  take_connection() {
    UDPServer.init_method_take_connection();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_take_connection,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  stop() {
    UDPServer.init_method_stop();
    return _call_native_mb_no_ret(
      UDPServer.#_bindings.method_stop,
      this._owner,
      
    );
    
  }
  set_max_pending_connections(_max_pending_connections) {
    UDPServer.init_method_set_max_pending_connections();
    return _call_native_mb_no_ret(
      UDPServer.#_bindings.method_set_max_pending_connections,
      this._owner,
      _max_pending_connections
    );
    
  }
  get_max_pending_connections() {
    UDPServer.init_method_get_max_pending_connections();
    return _call_native_mb_ret(
      UDPServer.#_bindings.method_get_max_pending_connections,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get max_pending_connections () {
  return this.get_max_pending_connections();
}
set max_pending_connections (new_value) {
  this.set_max_pending_connections(new_value);
}

}