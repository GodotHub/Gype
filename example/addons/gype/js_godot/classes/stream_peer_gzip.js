import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { StreamPeer } from '@js_godot/classes/stream_peer'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_start_compression;
  method_start_decompression;
  method_finish;
  method_clear;
}
export class StreamPeerGZIP extends StreamPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerGZIP");
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
      StreamPeerGZIP._bindings.method_start_compression,
      this._owner,
			Variant.INT,
      _use_deflate, _buffer_size
    );
    
  }
  start_decompression(_use_deflate, _buffer_size) {
    return _call_native_mb_ret(
      StreamPeerGZIP._bindings.method_start_decompression,
      this._owner,
			Variant.INT,
      _use_deflate, _buffer_size
    );
    
  }
  finish() {
    return _call_native_mb_ret(
      StreamPeerGZIP._bindings.method_finish,
      this._owner,
			Variant.INT,
      
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      StreamPeerGZIP._bindings.method_clear,
      this._owner,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}