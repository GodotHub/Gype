import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_listen;
    method_is_connection_available;
    method_is_listening;
    method_get_local_port;
    method_take_connection;
    method_stop;
}


export class TCPServer extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TCPServer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TCPServer");
        let methodname = new StringName("listen");
        this._bindings.method_listen = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3167955072
        );
      }
      {
        let classname = new StringName("TCPServer");
        let methodname = new StringName("is_connection_available");
        this._bindings.method_is_connection_available = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TCPServer");
        let methodname = new StringName("is_listening");
        this._bindings.method_is_listening = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TCPServer");
        let methodname = new StringName("get_local_port");
        this._bindings.method_get_local_port = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TCPServer");
        let methodname = new StringName("take_connection");
        this._bindings.method_take_connection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          30545006
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_listen,
      this._owner,
			Variant.INT,
      _port, _bind_address
    );
    
  }
  is_connection_available() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_connection_available,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_listening() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_listening,
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
}