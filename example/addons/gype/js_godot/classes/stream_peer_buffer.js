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
  method_seek;
  method_get_size;
  method_get_position;
  method_resize;
  method_set_data_array;
  method_get_data_array;
  method_clear;
  method_duplicate;
}
@GodotClass
export class StreamPeerBuffer extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerBuffer");
    } else {
      super(godot_object);
    }
  }
  static init_method_seek() {
    if (!this._bindings.method_seek) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("seek");
      this._bindings.method_seek = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_position() {
    if (!this._bindings.method_get_position) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_resize() {
    if (!this._bindings.method_resize) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("resize");
      this._bindings.method_resize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_data_array() {
    if (!this._bindings.method_set_data_array) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("set_data_array");
      this._bindings.method_set_data_array = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2971499966
      );
    }
  }
  static init_method_get_data_array() {
    if (!this._bindings.method_get_data_array) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("get_data_array");
      this._bindings.method_get_data_array = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2362200018
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_duplicate() {
    if (!this._bindings.method_duplicate) {
      let classname = new StringName("StreamPeerBuffer");
      let methodname = new StringName("duplicate");
      this._bindings.method_duplicate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2474064677
      );
    }
  }

  
  
  seek(_position) {
    StreamPeerBuffer.init_method_seek();
    return _call_native_mb_no_ret(
      StreamPeerBuffer._bindings.method_seek,
      this._owner,
      _position
    );
    
  }
  get_size() {
    StreamPeerBuffer.init_method_get_size();
    return _call_native_mb_ret(
      StreamPeerBuffer._bindings.method_get_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_position() {
    StreamPeerBuffer.init_method_get_position();
    return _call_native_mb_ret(
      StreamPeerBuffer._bindings.method_get_position,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  resize(_size) {
    StreamPeerBuffer.init_method_resize();
    return _call_native_mb_no_ret(
      StreamPeerBuffer._bindings.method_resize,
      this._owner,
      _size
    );
    
  }
  set_data_array(_data) {
    StreamPeerBuffer.init_method_set_data_array();
    return _call_native_mb_no_ret(
      StreamPeerBuffer._bindings.method_set_data_array,
      this._owner,
      _data
    );
    
  }
  get_data_array() {
    StreamPeerBuffer.init_method_get_data_array();
    return _call_native_mb_ret(
      StreamPeerBuffer._bindings.method_get_data_array,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  clear() {
    StreamPeerBuffer.init_method_clear();
    return _call_native_mb_no_ret(
      StreamPeerBuffer._bindings.method_clear,
      this._owner,
      
    );
    
  }
  duplicate() {
    StreamPeerBuffer.init_method_duplicate();
    return _call_native_mb_ret(
      StreamPeerBuffer._bindings.method_duplicate,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get data_array () {
  return this.get_data_array();
}
set data_array (new_value) {
  this.set_data_array(new_value);
}

}