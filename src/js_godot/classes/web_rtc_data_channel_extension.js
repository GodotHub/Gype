import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { WebRTCDataChannel } from 'src/js_godot/classesweb_rtc_data_channel'
class _MethodBindings {
    method__get_packet;
    method__put_packet;
    method__get_available_packet_count;
    method__get_max_packet_size;
    method__poll;
    method__close;
    method__set_write_mode;
    method__get_write_mode;
    method__was_string_packet;
    method__get_ready_state;
    method__get_label;
    method__is_ordered;
    method__get_id;
    method__get_max_packet_life_time;
    method__get_max_retransmits;
    method__get_protocol;
    method__is_negotiated;
    method__get_buffered_amount;
}


export class WebRTCDataChannelExtension extends WebRTCDataChannel{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCDataChannelExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_packet");
      this._bindings.method__get_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_put_packet");
      this._bindings.method__put_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_available_packet_count");
      this._bindings.method__get_available_packet_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_max_packet_size");
      this._bindings.method__get_max_packet_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_poll");
      this._bindings.method__poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_close");
      this._bindings.method__close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_set_write_mode");
      this._bindings.method__set_write_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_write_mode");
      this._bindings.method__get_write_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_was_string_packet");
      this._bindings.method__was_string_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_ready_state");
      this._bindings.method__get_ready_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_label");
      this._bindings.method__get_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_is_ordered");
      this._bindings.method__is_ordered = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_id");
      this._bindings.method__get_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_max_packet_life_time");
      this._bindings.method__get_max_packet_life_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_max_retransmits");
      this._bindings.method__get_max_retransmits = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_protocol");
      this._bindings.method__get_protocol = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_is_negotiated");
      this._bindings.method__is_negotiated = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCDataChannelExtension");
      let methodname = new StringName("_get_buffered_amount");
      this._bindings.method__get_buffered_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_packet(_r_buffer, _r_buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet,
      this._owner,
			Variant.INT,
      _r_buffer, _r_buffer_size
    );
  }
  _put_packet(_p_buffer, _p_buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__put_packet,
      this._owner,
			Variant.INT,
      _p_buffer, _p_buffer_size
    );
  }
  _get_available_packet_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_available_packet_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_max_packet_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_max_packet_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _poll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__poll,
      this._owner,
			Variant.INT,
      
    );
  }
  _close() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__close,
      this._owner,
      
    );
  }
  _set_write_mode(_p_write_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_write_mode,
      this._owner,
      _p_write_mode
    );
  }
  _get_write_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_write_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  _was_string_packet() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__was_string_packet,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_ready_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_ready_state,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_label() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_label,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _is_ordered() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_ordered,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_max_packet_life_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_max_packet_life_time,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_max_retransmits() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_max_retransmits,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_protocol() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_protocol,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _is_negotiated() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_negotiated,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_buffered_amount() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_buffered_amount,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}