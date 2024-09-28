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
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class WebRTCDataChannel extends PacketPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCDataChannel");
    } else {
      super(godot_object);
    }
  }
  static init_method_poll() {
    if (!this._bindings.method_poll) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("poll");
      this._bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_close() {
    if (!this._bindings.method_close) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_was_string_packet() {
    if (!this._bindings.method_was_string_packet) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("was_string_packet");
      this._bindings.method_was_string_packet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_write_mode() {
    if (!this._bindings.method_set_write_mode) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("set_write_mode");
      this._bindings.method_set_write_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1999768052
      );
    }
  }
  static init_method_get_write_mode() {
    if (!this._bindings.method_get_write_mode) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_write_mode");
      this._bindings.method_get_write_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2848495172
      );
    }
  }
  static init_method_get_ready_state() {
    if (!this._bindings.method_get_ready_state) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_ready_state");
      this._bindings.method_get_ready_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3501143017
      );
    }
  }
  static init_method_get_label() {
    if (!this._bindings.method_get_label) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_label");
      this._bindings.method_get_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_ordered() {
    if (!this._bindings.method_is_ordered) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("is_ordered");
      this._bindings.method_is_ordered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_id() {
    if (!this._bindings.method_get_id) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_id");
      this._bindings.method_get_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_max_packet_life_time() {
    if (!this._bindings.method_get_max_packet_life_time) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_max_packet_life_time");
      this._bindings.method_get_max_packet_life_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_max_retransmits() {
    if (!this._bindings.method_get_max_retransmits) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_max_retransmits");
      this._bindings.method_get_max_retransmits = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_protocol() {
    if (!this._bindings.method_get_protocol) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("get_protocol");
      this._bindings.method_get_protocol = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_negotiated() {
    if (!this._bindings.method_is_negotiated) {
      let classname = new StringName("WebRTCDataChannel");
      let methodname = new StringName("is_negotiated");
      this._bindings.method_is_negotiated = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_buffered_amount() {
    if (!this._bindings.method_get_buffered_amount) {
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
    WebRTCDataChannel.init_method_poll();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_poll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  close() {
    WebRTCDataChannel.init_method_close();
    return _call_native_mb_no_ret(
      WebRTCDataChannel._bindings.method_close,
      this._owner,
      
    );
    
  }
  was_string_packet() {
    WebRTCDataChannel.init_method_was_string_packet();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_was_string_packet,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_write_mode(_write_mode) {
    WebRTCDataChannel.init_method_set_write_mode();
    return _call_native_mb_no_ret(
      WebRTCDataChannel._bindings.method_set_write_mode,
      this._owner,
      _write_mode
    );
    
  }
  get_write_mode() {
    WebRTCDataChannel.init_method_get_write_mode();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_write_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_ready_state() {
    WebRTCDataChannel.init_method_get_ready_state();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_ready_state,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_label() {
    WebRTCDataChannel.init_method_get_label();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_ordered() {
    WebRTCDataChannel.init_method_is_ordered();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_is_ordered,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_id() {
    WebRTCDataChannel.init_method_get_id();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_max_packet_life_time() {
    WebRTCDataChannel.init_method_get_max_packet_life_time();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_max_packet_life_time,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_max_retransmits() {
    WebRTCDataChannel.init_method_get_max_retransmits();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_max_retransmits,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_protocol() {
    WebRTCDataChannel.init_method_get_protocol();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_get_protocol,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_negotiated() {
    WebRTCDataChannel.init_method_is_negotiated();
    return _call_native_mb_ret(
      WebRTCDataChannel._bindings.method_is_negotiated,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_buffered_amount() {
    WebRTCDataChannel.init_method_get_buffered_amount();
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
}