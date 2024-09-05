import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { Dictionary } from '@js_godot/variant/dictionary'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_connect_to_host;
  method_set_connection;
  method_get_connection;
  method_request_raw;
  method_request;
  method_close;
  method_has_response;
  method_is_response_chunked;
  method_get_response_code;
  method_get_response_headers;
  method_get_response_headers_as_dictionary;
  method_get_response_body_length;
  method_read_response_body_chunk;
  method_set_read_chunk_size;
  method_get_read_chunk_size;
  method_set_blocking_mode;
  method_is_blocking_mode_enabled;
  method_get_status;
  method_poll;
  method_set_http_proxy;
  method_set_https_proxy;
  method_query_string_from_dict;
}
export class HTTPClient extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("HTTPClient");
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
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("connect_to_host");
      this._bindings.method_connect_to_host = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        504540374
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("set_connection");
      this._bindings.method_set_connection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3281897016
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_connection");
      this._bindings.method_get_connection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2741655269
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("request_raw");
      this._bindings.method_request_raw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        540161961
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("request");
      this._bindings.method_request = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3778990155
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("has_response");
      this._bindings.method_has_response = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("is_response_chunked");
      this._bindings.method_is_response_chunked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_response_code");
      this._bindings.method_get_response_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_response_headers");
      this._bindings.method_get_response_headers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2981934095
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_response_headers_as_dictionary");
      this._bindings.method_get_response_headers_as_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2382534195
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_response_body_length");
      this._bindings.method_get_response_body_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("read_response_body_chunk");
      this._bindings.method_read_response_body_chunk = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2115431945
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("set_read_chunk_size");
      this._bindings.method_set_read_chunk_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_read_chunk_size");
      this._bindings.method_get_read_chunk_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("set_blocking_mode");
      this._bindings.method_set_blocking_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("is_blocking_mode_enabled");
      this._bindings.method_is_blocking_mode_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("get_status");
      this._bindings.method_get_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1426656811
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("set_http_proxy");
      this._bindings.method_set_http_proxy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2956805083
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("set_https_proxy");
      this._bindings.method_set_https_proxy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2956805083
      );
    }
    {
      let classname = new StringName("HTTPClient");
      let methodname = new StringName("query_string_from_dict");
      this._bindings.method_query_string_from_dict = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2538086567
      );
    }
  }
  
  connect_to_host(_host, _port, _tls_options) {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_connect_to_host,
      this._owner,
			Variant.INT,
      _host, _port, _tls_options
    );
    
  }
  set_connection(_connection) {
    return _call_native_mb_no_ret(
      HTTPClient._bindings.method_set_connection,
      this._owner,
      _connection
    );
    
  }
  get_connection() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_connection,
      this._owner,
			Variant.INT,
      
    );
    
  }
  request_raw(_method, _url, _headers, _body) {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_request_raw,
      this._owner,
			Variant.INT,
      _method, _url, _headers, _body
    );
    
  }
  request(_method, _url, _headers, _body) {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_request,
      this._owner,
			Variant.INT,
      _method, _url, _headers, _body
    );
    
  }
  close() {
    return _call_native_mb_no_ret(
      HTTPClient._bindings.method_close,
      this._owner,
      
    );
    
  }
  has_response() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_has_response,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_response_chunked() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_is_response_chunked,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_response_code() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_response_code,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_response_headers() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_response_headers,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_response_headers_as_dictionary() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_response_headers_as_dictionary,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_response_body_length() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_response_body_length,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  read_response_body_chunk() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_read_response_body_chunk,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  set_read_chunk_size(_bytes) {
    return _call_native_mb_no_ret(
      HTTPClient._bindings.method_set_read_chunk_size,
      this._owner,
      _bytes
    );
    
  }
  get_read_chunk_size() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_read_chunk_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_blocking_mode(_enabled) {
    return _call_native_mb_no_ret(
      HTTPClient._bindings.method_set_blocking_mode,
      this._owner,
      _enabled
    );
    
  }
  is_blocking_mode_enabled() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_is_blocking_mode_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_status() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_get_status,
      this._owner,
			Variant.INT,
      
    );
    
  }
  poll() {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_poll,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_http_proxy(_host, _port) {
    return _call_native_mb_no_ret(
      HTTPClient._bindings.method_set_http_proxy,
      this._owner,
      _host, _port
    );
    
  }
  set_https_proxy(_host, _port) {
    return _call_native_mb_no_ret(
      HTTPClient._bindings.method_set_https_proxy,
      this._owner,
      _host, _port
    );
    
  }
  query_string_from_dict(_fields) {
    return _call_native_mb_ret(
      HTTPClient._bindings.method_query_string_from_dict,
      this._owner,
			Variant.Type.STRING,
    
      _fields
    );
    
  }
  
get blocking_mode_enabled () {
  return this.is_blocking_mode_enabled();
}
set blocking_mode_enabled (new_value) {
  this.set_blocking_mode(new_value);
}
get connection () {
  return this.get_connection();
}
set connection (new_value) {
  this.set_connection(new_value);
}
get read_chunk_size () {
  return this.get_read_chunk_size();
}
set read_chunk_size (new_value) {
  this.set_read_chunk_size(new_value);
}

  static Method = {
    METHOD_GET: 0,
    METHOD_HEAD: 1,
    METHOD_POST: 2,
    METHOD_PUT: 3,
    METHOD_DELETE: 4,
    METHOD_OPTIONS: 5,
    METHOD_TRACE: 6,
    METHOD_CONNECT: 7,
    METHOD_PATCH: 8,
    METHOD_MAX: 9,
  }
  static Status = {
    STATUS_DISCONNECTED: 0,
    STATUS_RESOLVING: 1,
    STATUS_CANT_RESOLVE: 2,
    STATUS_CONNECTING: 3,
    STATUS_CANT_CONNECT: 4,
    STATUS_CONNECTED: 5,
    STATUS_REQUESTING: 6,
    STATUS_BODY: 7,
    STATUS_CONNECTION_ERROR: 8,
    STATUS_TLS_HANDSHAKE_ERROR: 9,
  }
  static ResponseCode = {
    RESPONSE_CONTINUE: 100,
    RESPONSE_SWITCHING_PROTOCOLS: 101,
    RESPONSE_PROCESSING: 102,
    RESPONSE_OK: 200,
    RESPONSE_CREATED: 201,
    RESPONSE_ACCEPTED: 202,
    RESPONSE_NON_AUTHORITATIVE_INFORMATION: 203,
    RESPONSE_NO_CONTENT: 204,
    RESPONSE_RESET_CONTENT: 205,
    RESPONSE_PARTIAL_CONTENT: 206,
    RESPONSE_MULTI_STATUS: 207,
    RESPONSE_ALREADY_REPORTED: 208,
    RESPONSE_IM_USED: 226,
    RESPONSE_MULTIPLE_CHOICES: 300,
    RESPONSE_MOVED_PERMANENTLY: 301,
    RESPONSE_FOUND: 302,
    RESPONSE_SEE_OTHER: 303,
    RESPONSE_NOT_MODIFIED: 304,
    RESPONSE_USE_PROXY: 305,
    RESPONSE_SWITCH_PROXY: 306,
    RESPONSE_TEMPORARY_REDIRECT: 307,
    RESPONSE_PERMANENT_REDIRECT: 308,
    RESPONSE_BAD_REQUEST: 400,
    RESPONSE_UNAUTHORIZED: 401,
    RESPONSE_PAYMENT_REQUIRED: 402,
    RESPONSE_FORBIDDEN: 403,
    RESPONSE_NOT_FOUND: 404,
    RESPONSE_METHOD_NOT_ALLOWED: 405,
    RESPONSE_NOT_ACCEPTABLE: 406,
    RESPONSE_PROXY_AUTHENTICATION_REQUIRED: 407,
    RESPONSE_REQUEST_TIMEOUT: 408,
    RESPONSE_CONFLICT: 409,
    RESPONSE_GONE: 410,
    RESPONSE_LENGTH_REQUIRED: 411,
    RESPONSE_PRECONDITION_FAILED: 412,
    RESPONSE_REQUEST_ENTITY_TOO_LARGE: 413,
    RESPONSE_REQUEST_URI_TOO_LONG: 414,
    RESPONSE_UNSUPPORTED_MEDIA_TYPE: 415,
    RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE: 416,
    RESPONSE_EXPECTATION_FAILED: 417,
    RESPONSE_IM_A_TEAPOT: 418,
    RESPONSE_MISDIRECTED_REQUEST: 421,
    RESPONSE_UNPROCESSABLE_ENTITY: 422,
    RESPONSE_LOCKED: 423,
    RESPONSE_FAILED_DEPENDENCY: 424,
    RESPONSE_UPGRADE_REQUIRED: 426,
    RESPONSE_PRECONDITION_REQUIRED: 428,
    RESPONSE_TOO_MANY_REQUESTS: 429,
    RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE: 431,
    RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS: 451,
    RESPONSE_INTERNAL_SERVER_ERROR: 500,
    RESPONSE_NOT_IMPLEMENTED: 501,
    RESPONSE_BAD_GATEWAY: 502,
    RESPONSE_SERVICE_UNAVAILABLE: 503,
    RESPONSE_GATEWAY_TIMEOUT: 504,
    RESPONSE_HTTP_VERSION_NOT_SUPPORTED: 505,
    RESPONSE_VARIANT_ALSO_NEGOTIATES: 506,
    RESPONSE_INSUFFICIENT_STORAGE: 507,
    RESPONSE_LOOP_DETECTED: 508,
    RESPONSE_NOT_EXTENDED: 510,
    RESPONSE_NETWORK_AUTH_REQUIRED: 511,
  }

  static {
    this._init_bindings();
  }
}