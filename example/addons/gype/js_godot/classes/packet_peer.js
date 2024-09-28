import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_get_var;
  method_put_var;
  method_get_packet;
  method_put_packet;
  method_get_packet_error;
  method_get_available_packet_count;
  method_get_encode_buffer_max_size;
  method_set_encode_buffer_max_size;
}
@GodotClass
export class PacketPeer extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeer");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_var() {
    if (!this._bindings.method_get_var) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("get_var");
      this._bindings.method_get_var = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3442865206
      );
    }
  }
  static init_method_put_var() {
    if (!this._bindings.method_put_var) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("put_var");
      this._bindings.method_put_var = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2436251611
      );
    }
  }
  static init_method_get_packet() {
    if (!this._bindings.method_get_packet) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("get_packet");
      this._bindings.method_get_packet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2115431945
      );
    }
  }
  static init_method_put_packet() {
    if (!this._bindings.method_put_packet) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("put_packet");
      this._bindings.method_put_packet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        680677267
      );
    }
  }
  static init_method_get_packet_error() {
    if (!this._bindings.method_get_packet_error) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("get_packet_error");
      this._bindings.method_get_packet_error = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3185525595
      );
    }
  }
  static init_method_get_available_packet_count() {
    if (!this._bindings.method_get_available_packet_count) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("get_available_packet_count");
      this._bindings.method_get_available_packet_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_encode_buffer_max_size() {
    if (!this._bindings.method_get_encode_buffer_max_size) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("get_encode_buffer_max_size");
      this._bindings.method_get_encode_buffer_max_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_encode_buffer_max_size() {
    if (!this._bindings.method_set_encode_buffer_max_size) {
      let classname = new StringName("PacketPeer");
      let methodname = new StringName("set_encode_buffer_max_size");
      this._bindings.method_set_encode_buffer_max_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  get_var(_allow_objects) {
    PacketPeer.init_method_get_var();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_get_var,
      this._owner,
			Variant.Type.VARIANT,
    
      _allow_objects
    );
    
  }
  put_var(_var, _full_objects) {
    PacketPeer.init_method_put_var();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_put_var,
      this._owner,
			Variant.Type.INT,
    
      _var, _full_objects
    );
    
  }
  get_packet() {
    PacketPeer.init_method_get_packet();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_get_packet,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  put_packet(_buffer) {
    PacketPeer.init_method_put_packet();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_put_packet,
      this._owner,
			Variant.Type.INT,
    
      _buffer
    );
    
  }
  get_packet_error() {
    PacketPeer.init_method_get_packet_error();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_get_packet_error,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_available_packet_count() {
    PacketPeer.init_method_get_available_packet_count();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_get_available_packet_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_encode_buffer_max_size() {
    PacketPeer.init_method_get_encode_buffer_max_size();
    return _call_native_mb_ret(
      PacketPeer._bindings.method_get_encode_buffer_max_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_encode_buffer_max_size(_max_size) {
    PacketPeer.init_method_set_encode_buffer_max_size();
    return _call_native_mb_no_ret(
      PacketPeer._bindings.method_set_encode_buffer_max_size,
      this._owner,
      _max_size
    );
    
  }
  
get encode_buffer_max_size () {
  return this.get_encode_buffer_max_size();
}
set encode_buffer_max_size (new_value) {
  this.set_encode_buffer_max_size(new_value);
}

}