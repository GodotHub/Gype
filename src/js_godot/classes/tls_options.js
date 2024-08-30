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
    method_client;
    method_client_unsafe;
    method_server;
    method_is_server;
    method_is_unsafe_client;
    method_get_common_name_override;
    method_get_trusted_ca_chain;
    method_get_private_key;
    method_get_own_certificate;
}


export class TLSOptions extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TLSOptions");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("client");
        this._bindings.method_client = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3565000357
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("client_unsafe");
        this._bindings.method_client_unsafe = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2090251749
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("server");
        this._bindings.method_server = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36969539
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("is_server");
        this._bindings.method_is_server = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("is_unsafe_client");
        this._bindings.method_is_unsafe_client = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("get_common_name_override");
        this._bindings.method_get_common_name_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("get_trusted_ca_chain");
        this._bindings.method_get_trusted_ca_chain = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1120709175
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("get_private_key");
        this._bindings.method_get_private_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2119971811
        );
      }
      {
        let classname = new StringName("TLSOptions");
        let methodname = new StringName("get_own_certificate");
        this._bindings.method_get_own_certificate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1120709175
        );
      }
  }
  client(_trusted_chain, _common_name_override) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_client,
      this._owner,
			Variant.INT,
      _trusted_chain, _common_name_override
    );
    
  }
  client_unsafe(_trusted_chain) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_client_unsafe,
      this._owner,
			Variant.INT,
      _trusted_chain
    );
    
  }
  server(_key, _certificate) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_server,
      this._owner,
			Variant.INT,
      _key, _certificate
    );
    
  }
  is_server() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_server,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_unsafe_client() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_unsafe_client,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_common_name_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_common_name_override,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_trusted_ca_chain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_trusted_ca_chain,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_private_key() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_private_key,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_own_certificate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_own_certificate,
      this._owner,
			Variant.INT,
      
    );
    
  }
}