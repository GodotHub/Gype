import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_set_scope;
  method_process_action;
  method_process_string;
  method_make_request;
  method_make_response;
  method_make_notification;
  method_make_response_error;
}
@GodotClass
export class JSONRPC extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("JSONRPC");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_scope() {
    if (!this._bindings.method_set_scope) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("set_scope");
      this._bindings.method_set_scope = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2572618360
      );
    }
  }
  static init_method_process_action() {
    if (!this._bindings.method_process_action) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("process_action");
      this._bindings.method_process_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2963479484
      );
    }
  }
  static init_method_process_string() {
    if (!this._bindings.method_process_string) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("process_string");
      this._bindings.method_process_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1703090593
      );
    }
  }
  static init_method_make_request() {
    if (!this._bindings.method_make_request) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("make_request");
      this._bindings.method_make_request = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3423508980
      );
    }
  }
  static init_method_make_response() {
    if (!this._bindings.method_make_response) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("make_response");
      this._bindings.method_make_response = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5053918
      );
    }
  }
  static init_method_make_notification() {
    if (!this._bindings.method_make_notification) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("make_notification");
      this._bindings.method_make_notification = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2949127017
      );
    }
  }
  static init_method_make_response_error() {
    if (!this._bindings.method_make_response_error) {
      let classname = new StringName("JSONRPC");
      let methodname = new StringName("make_response_error");
      this._bindings.method_make_response_error = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        928596297
      );
    }
  }

  
  
  set_scope(_scope, _target) {
    JSONRPC.init_method_set_scope();
    return _call_native_mb_no_ret(
      JSONRPC._bindings.method_set_scope,
      this._owner,
      _scope, _target
    );
    
  }
  process_action(_action, _recurse) {
    JSONRPC.init_method_process_action();
    return _call_native_mb_ret(
      JSONRPC._bindings.method_process_action,
      this._owner,
			Variant.Type.VARIANT,
    
      _action, _recurse
    );
    
  }
  process_string(_action) {
    JSONRPC.init_method_process_string();
    return _call_native_mb_ret(
      JSONRPC._bindings.method_process_string,
      this._owner,
			Variant.Type.STRING,
    
      _action
    );
    
  }
  make_request(_method, _params, _id) {
    JSONRPC.init_method_make_request();
    return _call_native_mb_ret(
      JSONRPC._bindings.method_make_request,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _method, _params, _id
    );
    
  }
  make_response(_result, _id) {
    JSONRPC.init_method_make_response();
    return _call_native_mb_ret(
      JSONRPC._bindings.method_make_response,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _result, _id
    );
    
  }
  make_notification(_method, _params) {
    JSONRPC.init_method_make_notification();
    return _call_native_mb_ret(
      JSONRPC._bindings.method_make_notification,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _method, _params
    );
    
  }
  make_response_error(_code, _message, _id) {
    JSONRPC.init_method_make_response_error();
    return _call_native_mb_ret(
      JSONRPC._bindings.method_make_response_error,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _code, _message, _id
    );
    
  }
  

  static ErrorCode = {
    PARSE_ERROR: -32700,
    INVALID_REQUEST: -32600,
    METHOD_NOT_FOUND: -32601,
    INVALID_PARAMS: -32602,
    INTERNAL_ERROR: -32603,
  }
}