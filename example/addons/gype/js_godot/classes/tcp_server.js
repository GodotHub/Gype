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
  method_listen;
  method_is_connection_available;
  method_is_listening;
  method_get_local_port;
  method_take_connection;
  method_stop;
}
@GodotClass
export class TCPServer extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TCPServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_listen() {
    if (!this._bindings.method_listen) {
      let classname = new StringName("TCPServer");
      let methodname = new StringName("listen");
      this._bindings.method_listen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3167955072
      );
    }
  }
  static init_method_is_connection_available() {
    if (!this._bindings.method_is_connection_available) {
      let classname = new StringName("TCPServer");
      let methodname = new StringName("is_connection_available");
      this._bindings.method_is_connection_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_listening() {
    if (!this._bindings.method_is_listening) {
      let classname = new StringName("TCPServer");
      let methodname = new StringName("is_listening");
      this._bindings.method_is_listening = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_local_port() {
    if (!this._bindings.method_get_local_port) {
      let classname = new StringName("TCPServer");
      let methodname = new StringName("get_local_port");
      this._bindings.method_get_local_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_take_connection() {
    if (!this._bindings.method_take_connection) {
      let classname = new StringName("TCPServer");
      let methodname = new StringName("take_connection");
      this._bindings.method_take_connection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        30545006
      );
    }
  }
  static init_method_stop() {
    if (!this._bindings.method_stop) {
      let classname = new StringName("TCPServer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  listen(_port, _bind_address) {
    TCPServer.init_method_listen();
    return _call_native_mb_ret(
      TCPServer._bindings.method_listen,
      this._owner,
			Variant.Type.INT,
    
      _port, _bind_address
    );
    
  }
  is_connection_available() {
    TCPServer.init_method_is_connection_available();
    return _call_native_mb_ret(
      TCPServer._bindings.method_is_connection_available,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_listening() {
    TCPServer.init_method_is_listening();
    return _call_native_mb_ret(
      TCPServer._bindings.method_is_listening,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_local_port() {
    TCPServer.init_method_get_local_port();
    return _call_native_mb_ret(
      TCPServer._bindings.method_get_local_port,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  take_connection() {
    TCPServer.init_method_take_connection();
    return _call_native_mb_ret(
      TCPServer._bindings.method_take_connection,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  stop() {
    TCPServer.init_method_stop();
    return _call_native_mb_no_ret(
      TCPServer._bindings.method_stop,
      this._owner,
      
    );
    
  }
  

}