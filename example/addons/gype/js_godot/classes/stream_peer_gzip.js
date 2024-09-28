import * as internal from '__internal__';
import { StreamPeer } from '@js_godot/classes/stream_peer'
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
  method_start_compression;
  method_start_decompression;
  method_finish;
  method_clear;
}
@GodotClass
export class StreamPeerGZIP extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerGZIP");
    } else {
      super(godot_object);
    }
  }
  static init_method_start_compression() {
    if (!this._bindings.method_start_compression) {
      let classname = new StringName("StreamPeerGZIP");
      let methodname = new StringName("start_compression");
      this._bindings.method_start_compression = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        781582770
      );
    }
  }
  static init_method_start_decompression() {
    if (!this._bindings.method_start_decompression) {
      let classname = new StringName("StreamPeerGZIP");
      let methodname = new StringName("start_decompression");
      this._bindings.method_start_decompression = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        781582770
      );
    }
  }
  static init_method_finish() {
    if (!this._bindings.method_finish) {
      let classname = new StringName("StreamPeerGZIP");
      let methodname = new StringName("finish");
      this._bindings.method_finish = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("StreamPeerGZIP");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  start_compression(_use_deflate, _buffer_size) {
    StreamPeerGZIP.init_method_start_compression();
    return _call_native_mb_ret(
      StreamPeerGZIP._bindings.method_start_compression,
      this._owner,
			Variant.Type.INT,
    
      _use_deflate, _buffer_size
    );
    
  }
  start_decompression(_use_deflate, _buffer_size) {
    StreamPeerGZIP.init_method_start_decompression();
    return _call_native_mb_ret(
      StreamPeerGZIP._bindings.method_start_decompression,
      this._owner,
			Variant.Type.INT,
    
      _use_deflate, _buffer_size
    );
    
  }
  finish() {
    StreamPeerGZIP.init_method_finish();
    return _call_native_mb_ret(
      StreamPeerGZIP._bindings.method_finish,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  clear() {
    StreamPeerGZIP.init_method_clear();
    return _call_native_mb_no_ret(
      StreamPeerGZIP._bindings.method_clear,
      this._owner,
      
    );
    
  }
  

}