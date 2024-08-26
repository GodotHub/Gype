import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("UDPServer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("listen");
      this._bindings.method_listen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3167955072
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("is_connection_available");
      this._bindings.method_is_connection_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("get_local_port");
      this._bindings.method_get_local_port = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("is_listening");
      this._bindings.method_is_listening = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("take_connection");
      this._bindings.method_take_connection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        808734560
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("set_max_pending_connections");
      this._bindings.method_set_max_pending_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("UDPServer");
      let methodname = new StringName("get_max_pending_connections");
      this._bindings.method_get_max_pending_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  listen(_port, _bind_address) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_listen,
      this._owner,
			Variant.INT,
      _port, _bind_address
    );
  }
  poll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_poll,
      this._owner,
			Variant.INT,
      
    );
  }
  is_connection_available() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_connection_available,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_local_port() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_port,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  is_listening() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_listening,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  take_connection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_take_connection,
      this._owner,
			Variant.INT,
      
    );
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
  }
  set_max_pending_connections(_max_pending_connections) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_pending_connections,
      this._owner,
      _max_pending_connections
    );
  }
  get_max_pending_connections() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_pending_connections,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}