import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Node } from 'src/js_godot/classesnode'
class _MethodBindings {
    method_request;
    method_request_raw;
    method_cancel_request;
    method_set_tls_options;
    method_get_http_client_status;
    method_set_use_threads;
    method_is_using_threads;
    method_set_accept_gzip;
    method_is_accepting_gzip;
    method_set_body_size_limit;
    method_get_body_size_limit;
    method_set_max_redirects;
    method_get_max_redirects;
    method_set_download_file;
    method_get_download_file;
    method_get_downloaded_bytes;
    method_get_body_size;
    method_set_timeout;
    method_get_timeout;
    method_set_download_chunk_size;
    method_get_download_chunk_size;
    method_set_http_proxy;
    method_set_https_proxy;
}


export class HTTPRequest extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HTTPRequest");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("request");
      this._bindings.method_request = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3215244323
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("request_raw");
      this._bindings.method_request_raw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2714829993
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("cancel_request");
      this._bindings.method_cancel_request = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_tls_options");
      this._bindings.method_set_tls_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2210231844
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_http_client_status");
      this._bindings.method_get_http_client_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1426656811
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_use_threads");
      this._bindings.method_set_use_threads = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("is_using_threads");
      this._bindings.method_is_using_threads = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_accept_gzip");
      this._bindings.method_set_accept_gzip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("is_accepting_gzip");
      this._bindings.method_is_accepting_gzip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_body_size_limit");
      this._bindings.method_set_body_size_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_body_size_limit");
      this._bindings.method_get_body_size_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_max_redirects");
      this._bindings.method_set_max_redirects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_max_redirects");
      this._bindings.method_get_max_redirects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_download_file");
      this._bindings.method_set_download_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_download_file");
      this._bindings.method_get_download_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_downloaded_bytes");
      this._bindings.method_get_downloaded_bytes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_body_size");
      this._bindings.method_get_body_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_timeout");
      this._bindings.method_set_timeout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_timeout");
      this._bindings.method_get_timeout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_download_chunk_size");
      this._bindings.method_set_download_chunk_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_download_chunk_size");
      this._bindings.method_get_download_chunk_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_http_proxy");
      this._bindings.method_set_http_proxy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2956805083
      );
    }
    {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_https_proxy");
      this._bindings.method_set_https_proxy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2956805083
      );
    }
  }
  request(_url, _custom_headers, _method, _request_data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_request,
      this._owner,
			Variant.INT,
      _url, _custom_headers, _method, _request_data
    );
  }
  request_raw(_url, _custom_headers, _method, _request_data_raw) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_request_raw,
      this._owner,
			Variant.INT,
      _url, _custom_headers, _method, _request_data_raw
    );
  }
  cancel_request() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_cancel_request,
      this._owner,
      
    );
  }
  set_tls_options(_client_options) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tls_options,
      this._owner,
      _client_options
    );
  }
  get_http_client_status() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_http_client_status,
      this._owner,
			Variant.INT,
      
    );
  }
  set_use_threads(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_threads,
      this._owner,
      _enable
    );
  }
  is_using_threads() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_threads,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_accept_gzip(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_accept_gzip,
      this._owner,
      _enable
    );
  }
  is_accepting_gzip() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_accepting_gzip,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_body_size_limit(_bytes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_body_size_limit,
      this._owner,
      _bytes
    );
  }
  get_body_size_limit() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_body_size_limit,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_max_redirects(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_redirects,
      this._owner,
      _amount
    );
  }
  get_max_redirects() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_redirects,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_download_file(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_download_file,
      this._owner,
      _path
    );
  }
  get_download_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_download_file,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_downloaded_bytes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_downloaded_bytes,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_body_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_body_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_timeout(_timeout) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_timeout,
      this._owner,
      _timeout
    );
  }
  get_timeout() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_timeout,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_download_chunk_size(_chunk_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_download_chunk_size,
      this._owner,
      _chunk_size
    );
  }
  get_download_chunk_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_download_chunk_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_http_proxy(_host, _port) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_http_proxy,
      this._owner,
      _host, _port
    );
  }
  set_https_proxy(_host, _port) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_https_proxy,
      this._owner,
      _host, _port
    );
  }
  static Result = {
    RESULT_SUCCESS: 0,
    RESULT_CHUNKED_BODY_SIZE_MISMATCH: 1,
    RESULT_CANT_CONNECT: 2,
    RESULT_CANT_RESOLVE: 3,
    RESULT_CONNECTION_ERROR: 4,
    RESULT_TLS_HANDSHAKE_ERROR: 5,
    RESULT_NO_RESPONSE: 6,
    RESULT_BODY_SIZE_LIMIT_EXCEEDED: 7,
    RESULT_BODY_DECOMPRESS_FAILED: 8,
    RESULT_REQUEST_FAILED: 9,
    RESULT_DOWNLOAD_FILE_CANT_OPEN: 10,
    RESULT_DOWNLOAD_FILE_WRITE_ERROR: 11,
    RESULT_REDIRECT_LIMIT_REACHED: 12,
    RESULT_TIMEOUT: 13,
  }
}