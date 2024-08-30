import * as internal from '__internal__';
import { StreamPeer } from 'src/js_godot/classes/stream_peer'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_start_compression;
    method_start_decompression;
    method_finish;
    method_clear;
}


export class StreamPeerGZIP extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerGZIP");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("StreamPeerGZIP");
        let methodname = new StringName("start_compression");
        this._bindings.method_start_compression = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          781582770
        );
      }
      {
        let classname = new StringName("StreamPeerGZIP");
        let methodname = new StringName("start_decompression");
        this._bindings.method_start_decompression = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          781582770
        );
      }
      {
        let classname = new StringName("StreamPeerGZIP");
        let methodname = new StringName("finish");
        this._bindings.method_finish = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_start_compression,
      this._owner,
			Variant.INT,
      _use_deflate, _buffer_size
    );
    
  }
  start_decompression(_use_deflate, _buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_start_decompression,
      this._owner,
			Variant.INT,
      _use_deflate, _buffer_size
    );
    
  }
  finish() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_finish,
      this._owner,
			Variant.INT,
      
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
}