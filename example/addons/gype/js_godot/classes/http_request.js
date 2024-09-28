import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
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
@GodotClass
export class HTTPRequest extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HTTPRequest");
    } else {
      super(godot_object);
    }
  }
  static init_method_request() {
    if (!this._bindings.method_request) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("request");
      this._bindings.method_request = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3215244323
      );
    }
  }
  static init_method_request_raw() {
    if (!this._bindings.method_request_raw) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("request_raw");
      this._bindings.method_request_raw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2714829993
      );
    }
  }
  static init_method_cancel_request() {
    if (!this._bindings.method_cancel_request) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("cancel_request");
      this._bindings.method_cancel_request = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_tls_options() {
    if (!this._bindings.method_set_tls_options) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_tls_options");
      this._bindings.method_set_tls_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2210231844
      );
    }
  }
  static init_method_get_http_client_status() {
    if (!this._bindings.method_get_http_client_status) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_http_client_status");
      this._bindings.method_get_http_client_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1426656811
      );
    }
  }
  static init_method_set_use_threads() {
    if (!this._bindings.method_set_use_threads) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_use_threads");
      this._bindings.method_set_use_threads = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_threads() {
    if (!this._bindings.method_is_using_threads) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("is_using_threads");
      this._bindings.method_is_using_threads = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_accept_gzip() {
    if (!this._bindings.method_set_accept_gzip) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_accept_gzip");
      this._bindings.method_set_accept_gzip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_accepting_gzip() {
    if (!this._bindings.method_is_accepting_gzip) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("is_accepting_gzip");
      this._bindings.method_is_accepting_gzip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_body_size_limit() {
    if (!this._bindings.method_set_body_size_limit) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_body_size_limit");
      this._bindings.method_set_body_size_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_body_size_limit() {
    if (!this._bindings.method_get_body_size_limit) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_body_size_limit");
      this._bindings.method_get_body_size_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_redirects() {
    if (!this._bindings.method_set_max_redirects) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_max_redirects");
      this._bindings.method_set_max_redirects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_redirects() {
    if (!this._bindings.method_get_max_redirects) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_max_redirects");
      this._bindings.method_get_max_redirects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_download_file() {
    if (!this._bindings.method_set_download_file) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_download_file");
      this._bindings.method_set_download_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_download_file() {
    if (!this._bindings.method_get_download_file) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_download_file");
      this._bindings.method_get_download_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_downloaded_bytes() {
    if (!this._bindings.method_get_downloaded_bytes) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_downloaded_bytes");
      this._bindings.method_get_downloaded_bytes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_body_size() {
    if (!this._bindings.method_get_body_size) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_body_size");
      this._bindings.method_get_body_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_timeout() {
    if (!this._bindings.method_set_timeout) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_timeout");
      this._bindings.method_set_timeout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_timeout() {
    if (!this._bindings.method_get_timeout) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_timeout");
      this._bindings.method_get_timeout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_download_chunk_size() {
    if (!this._bindings.method_set_download_chunk_size) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_download_chunk_size");
      this._bindings.method_set_download_chunk_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_download_chunk_size() {
    if (!this._bindings.method_get_download_chunk_size) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("get_download_chunk_size");
      this._bindings.method_get_download_chunk_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_http_proxy() {
    if (!this._bindings.method_set_http_proxy) {
      let classname = new StringName("HTTPRequest");
      let methodname = new StringName("set_http_proxy");
      this._bindings.method_set_http_proxy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2956805083
      );
    }
  }
  static init_method_set_https_proxy() {
    if (!this._bindings.method_set_https_proxy) {
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
    HTTPRequest.init_method_request();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_request,
      this._owner,
			Variant.Type.INT,
    
      _url, _custom_headers, _method, _request_data
    );
    
  }
  request_raw(_url, _custom_headers, _method, _request_data_raw) {
    HTTPRequest.init_method_request_raw();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_request_raw,
      this._owner,
			Variant.Type.INT,
    
      _url, _custom_headers, _method, _request_data_raw
    );
    
  }
  cancel_request() {
    HTTPRequest.init_method_cancel_request();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_cancel_request,
      this._owner,
      
    );
    
  }
  set_tls_options(_client_options) {
    HTTPRequest.init_method_set_tls_options();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_tls_options,
      this._owner,
      _client_options
    );
    
  }
  get_http_client_status() {
    HTTPRequest.init_method_get_http_client_status();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_http_client_status,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_threads(_enable) {
    HTTPRequest.init_method_set_use_threads();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_use_threads,
      this._owner,
      _enable
    );
    
  }
  is_using_threads() {
    HTTPRequest.init_method_is_using_threads();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_is_using_threads,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_accept_gzip(_enable) {
    HTTPRequest.init_method_set_accept_gzip();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_accept_gzip,
      this._owner,
      _enable
    );
    
  }
  is_accepting_gzip() {
    HTTPRequest.init_method_is_accepting_gzip();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_is_accepting_gzip,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_body_size_limit(_bytes) {
    HTTPRequest.init_method_set_body_size_limit();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_body_size_limit,
      this._owner,
      _bytes
    );
    
  }
  get_body_size_limit() {
    HTTPRequest.init_method_get_body_size_limit();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_body_size_limit,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_redirects(_amount) {
    HTTPRequest.init_method_set_max_redirects();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_max_redirects,
      this._owner,
      _amount
    );
    
  }
  get_max_redirects() {
    HTTPRequest.init_method_get_max_redirects();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_max_redirects,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_download_file(_path) {
    HTTPRequest.init_method_set_download_file();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_download_file,
      this._owner,
      _path
    );
    
  }
  get_download_file() {
    HTTPRequest.init_method_get_download_file();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_download_file,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_downloaded_bytes() {
    HTTPRequest.init_method_get_downloaded_bytes();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_downloaded_bytes,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_body_size() {
    HTTPRequest.init_method_get_body_size();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_body_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_timeout(_timeout) {
    HTTPRequest.init_method_set_timeout();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_timeout,
      this._owner,
      _timeout
    );
    
  }
  get_timeout() {
    HTTPRequest.init_method_get_timeout();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_timeout,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_download_chunk_size(_chunk_size) {
    HTTPRequest.init_method_set_download_chunk_size();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_download_chunk_size,
      this._owner,
      _chunk_size
    );
    
  }
  get_download_chunk_size() {
    HTTPRequest.init_method_get_download_chunk_size();
    return _call_native_mb_ret(
      HTTPRequest._bindings.method_get_download_chunk_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_http_proxy(_host, _port) {
    HTTPRequest.init_method_set_http_proxy();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_http_proxy,
      this._owner,
      _host, _port
    );
    
  }
  set_https_proxy(_host, _port) {
    HTTPRequest.init_method_set_https_proxy();
    return _call_native_mb_no_ret(
      HTTPRequest._bindings.method_set_https_proxy,
      this._owner,
      _host, _port
    );
    
  }
  
get download_file () {
  return this.get_download_file();
}
set download_file (new_value) {
  this.set_download_file(new_value);
}
get download_chunk_size () {
  return this.get_download_chunk_size();
}
set download_chunk_size (new_value) {
  this.set_download_chunk_size(new_value);
}
get use_threads () {
  return this.is_using_threads();
}
set use_threads (new_value) {
  this.set_use_threads(new_value);
}
get accept_gzip () {
  return this.is_accepting_gzip();
}
set accept_gzip (new_value) {
  this.set_accept_gzip(new_value);
}
get body_size_limit () {
  return this.get_body_size_limit();
}
set body_size_limit (new_value) {
  this.set_body_size_limit(new_value);
}
get max_redirects () {
  return this.get_max_redirects();
}
set max_redirects (new_value) {
  this.set_max_redirects(new_value);
}
get timeout () {
  return this.get_timeout();
}
set timeout (new_value) {
  this.set_timeout(new_value);
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