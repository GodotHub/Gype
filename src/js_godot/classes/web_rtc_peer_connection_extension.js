import * as internal from '__internal__';
import { WebRTCPeerConnection } from 'src/js_godot/classesweb_rtc_peer_connection'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__get_connection_state;
    method__get_gathering_state;
    method__get_signaling_state;
    method__initialize;
    method__create_data_channel;
    method__create_offer;
    method__set_remote_description;
    method__set_local_description;
    method__add_ice_candidate;
    method__poll;
    method__close;
}


export class WebRTCPeerConnectionExtension extends WebRTCPeerConnection{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCPeerConnectionExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_get_connection_state");
      this._bindings.method__get_connection_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_get_gathering_state");
      this._bindings.method__get_gathering_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_get_signaling_state");
      this._bindings.method__get_signaling_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_initialize");
      this._bindings.method__initialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_create_data_channel");
      this._bindings.method__create_data_channel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_create_offer");
      this._bindings.method__create_offer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_set_remote_description");
      this._bindings.method__set_remote_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_set_local_description");
      this._bindings.method__set_local_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_add_ice_candidate");
      this._bindings.method__add_ice_candidate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_poll");
      this._bindings.method__poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("WebRTCPeerConnectionExtension");
      let methodname = new StringName("_close");
      this._bindings.method__close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_connection_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_connection_state,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_gathering_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_gathering_state,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_signaling_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_signaling_state,
      this._owner,
			Variant.INT,
      
    );
  }
  _initialize(_p_config) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__initialize,
      this._owner,
			Variant.INT,
      _p_config
    );
  }
  _create_data_channel(_p_label, _p_config) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_data_channel,
      this._owner,
			Variant.INT,
      _p_label, _p_config
    );
  }
  _create_offer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_offer,
      this._owner,
			Variant.INT,
      
    );
  }
  _set_remote_description(_p_type, _p_sdp) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_remote_description,
      this._owner,
			Variant.INT,
      _p_type, _p_sdp
    );
  }
  _set_local_description(_p_type, _p_sdp) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_local_description,
      this._owner,
			Variant.INT,
      _p_type, _p_sdp
    );
  }
  _add_ice_candidate(_p_sdp_mid_name, _p_sdp_mline_index, _p_sdp_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__add_ice_candidate,
      this._owner,
			Variant.INT,
      _p_sdp_mid_name, _p_sdp_mline_index, _p_sdp_name
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
}