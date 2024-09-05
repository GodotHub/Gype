import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { PacketPeer } from '@js_godot/classes/packet_peer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_poll;
  method_close;
  method_was_string_packet;
  method_set_write_mode;
  method_get_write_mode;
  method_get_ready_state;
  method_get_label;
  method_is_ordered;
  method_get_id;
  method_get_max_packet_life_time;
  method_get_max_retransmits;
  method_get_protocol;
  method_is_negotiated;
  method_get_buffered_amount;
}
export class WebRTCDataChannel extends PacketPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCDataChannel");
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
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("was_string_packet");
      this._bindings.method_was_string_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("set_write_mode");
      this._bindings.method_set_write_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1999768052
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_write_mode");
      this._bindings.method_get_write_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2848495172
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_ready_state");
      this._bindings.method_get_ready_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3501143017
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_label");
      this._bindings.method_get_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("is_ordered");
      this._bindings.method_is_ordered = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_id");
      this._bindings.method_get_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_max_packet_life_time");
      this._bindings.method_get_max_packet_life_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_max_retransmits");
      this._bindings.method_get_max_retransmits = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_protocol");
      this._bindings.method_get_protocol = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("is_negotiated");
      this._bindings.method_is_negotiated = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_buffered_amount");
      this._bindings.method_get_buffered_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  poll() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_poll,
      this._owner,
			Variant.INT,
      
    );
    
  }
  close() {
    return _call_native_mb_no_ret(
      WebRTCDataChannel._bindings.method_close,
      this._owner,
      
    );
    
  }
  was_string_packet() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_was_string_packet,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_write_mode(_write_mode) {
    return _call_native_mb_no_ret(
      WebRTCDataChannel._bindings.method_set_write_mode,
      this._owner,
      _write_mode
    );
    
  }
  get_write_mode() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_write_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_ready_state() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_ready_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_label() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_ordered() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_is_ordered,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_id() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_max_packet_life_time() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_max_packet_life_time,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_max_retransmits() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_max_retransmits,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_protocol() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_protocol,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_negotiated() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_is_negotiated,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_buffered_amount() {
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_buffered_amount,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get write_mode () {
  return this.get_write_mode();
}
set write_mode (new_value) {
  this.set_write_mode(new_value);
}

  static WriteMode = {
    WRITE_MODE_TEXT: 0,
    WRITE_MODE_BINARY: 1,
  }
  static ChannelState = {
    STATE_CONNECTING: 0,
    STATE_OPEN: 1,
    STATE_CLOSING: 2,
    STATE_CLOSED: 3,
  }

  static {
    this._init_bindings();
  }
}