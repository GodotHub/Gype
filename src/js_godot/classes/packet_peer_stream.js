import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PacketPeer } from '@js_godot/classes/packet_peer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stream_peer;
  method_get_stream_peer;
  method_set_input_buffer_max_size;
  method_set_output_buffer_max_size;
  method_get_input_buffer_max_size;
  method_get_output_buffer_max_size;
}
export class PacketPeerStream extends PacketPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerStream");
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
      let classname = new StringName("PacketPeerStream");
      let methodname = new StringName("set_stream_peer");
      this._bindings.method_set_stream_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3281897016
      );
    }
    {
      let classname = new StringName("PacketPeerStream");
      let methodname = new StringName("get_stream_peer");
      this._bindings.method_get_stream_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2741655269
      );
    }
    {
      let classname = new StringName("PacketPeerStream");
      let methodname = new StringName("set_input_buffer_max_size");
      this._bindings.method_set_input_buffer_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PacketPeerStream");
      let methodname = new StringName("set_output_buffer_max_size");
      this._bindings.method_set_output_buffer_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PacketPeerStream");
      let methodname = new StringName("get_input_buffer_max_size");
      this._bindings.method_get_input_buffer_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PacketPeerStream");
      let methodname = new StringName("get_output_buffer_max_size");
      this._bindings.method_get_output_buffer_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_stream_peer(_peer) {
    return _call_native_mb_no_ret(
      PacketPeerStream._bindings.method_set_stream_peer,
      this._owner,
      _peer
    );
    
  }
  get_stream_peer() {
    return _call_native_mb_ret(
      PacketPeerStream._bindings.method_get_stream_peer,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_input_buffer_max_size(_max_size_bytes) {
    return _call_native_mb_no_ret(
      PacketPeerStream._bindings.method_set_input_buffer_max_size,
      this._owner,
      _max_size_bytes
    );
    
  }
  set_output_buffer_max_size(_max_size_bytes) {
    return _call_native_mb_no_ret(
      PacketPeerStream._bindings.method_set_output_buffer_max_size,
      this._owner,
      _max_size_bytes
    );
    
  }
  get_input_buffer_max_size() {
    return _call_native_mb_ret(
      PacketPeerStream._bindings.method_get_input_buffer_max_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_output_buffer_max_size() {
    return _call_native_mb_ret(
      PacketPeerStream._bindings.method_get_output_buffer_max_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get input_buffer_max_size () {
  return this.get_input_buffer_max_size();
}
set input_buffer_max_size (new_value) {
  this.set_input_buffer_max_size(new_value);
}
get output_buffer_max_size () {
  return this.get_output_buffer_max_size();
}
set output_buffer_max_size (new_value) {
  this.set_output_buffer_max_size(new_value);
}
get stream_peer () {
  return this.get_stream_peer();
}
set stream_peer (new_value) {
  this.set_stream_peer(new_value);
}


  static {
    this._init_bindings();
  }
}