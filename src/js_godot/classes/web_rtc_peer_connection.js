import * as internal from '__internal__';
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_default_extension;
    method_initialize;
    method_create_data_channel;
    method_create_offer;
    method_set_local_description;
    method_set_remote_description;
    method_add_ice_candidate;
    method_poll;
    method_close;
    method_get_connection_state;
    method_get_gathering_state;
    method_get_signaling_state;
}


export class WebRTCPeerConnection extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCPeerConnection");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("set_default_extension");
        this._bindings.method_set_default_extension = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("initialize");
        this._bindings.method_initialize = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2625064318
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("create_data_channel");
        this._bindings.method_create_data_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1288557393
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("create_offer");
        this._bindings.method_create_offer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("set_local_description");
        this._bindings.method_set_local_description = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("set_remote_description");
        this._bindings.method_set_remote_description = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("add_ice_candidate");
        this._bindings.method_add_ice_candidate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3958950400
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("poll");
        this._bindings.method_poll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("close");
        this._bindings.method_close = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("get_connection_state");
        this._bindings.method_get_connection_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2275710506
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("get_gathering_state");
        this._bindings.method_get_gathering_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4262591401
        );
      }
      {
        let classname = new StringName("WebRTCPeerConnection");
        let methodname = new StringName("get_signaling_state");
        this._bindings.method_get_signaling_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3342956226
        );
      }
  }
  set_default_extension(_extension_class) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_extension,
      this._owner,
      _extension_class
    );
    
  }
  initialize(_configuration) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_initialize,
      this._owner,
			Variant.INT,
      _configuration
    );
    
  }
  create_data_channel(_label, _options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_data_channel,
      this._owner,
			Variant.INT,
      _label, _options
    );
    
  }
  create_offer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_offer,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_local_description(_type, _sdp) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_local_description,
      this._owner,
			Variant.INT,
      _type, _sdp
    );
    
  }
  set_remote_description(_type, _sdp) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_remote_description,
      this._owner,
			Variant.INT,
      _type, _sdp
    );
    
  }
  add_ice_candidate(_media, _index, _name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_ice_candidate,
      this._owner,
			Variant.INT,
      _media, _index, _name
    );
    
  }
  poll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_poll,
      this._owner,
			Variant.INT,
      
    );
    
  }
  close() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_close,
      this._owner,
      
    );
    
  }
  get_connection_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_gathering_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gathering_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_signaling_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_signaling_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static ConnectionState = {
    STATE_NEW: 0,
    STATE_CONNECTING: 1,
    STATE_CONNECTED: 2,
    STATE_DISCONNECTED: 3,
    STATE_FAILED: 4,
    STATE_CLOSED: 5,
  }
  static GatheringState = {
    GATHERING_STATE_NEW: 0,
    GATHERING_STATE_GATHERING: 1,
    GATHERING_STATE_COMPLETE: 2,
  }
  static SignalingState = {
    SIGNALING_STATE_STABLE: 0,
    SIGNALING_STATE_HAVE_LOCAL_OFFER: 1,
    SIGNALING_STATE_HAVE_REMOTE_OFFER: 2,
    SIGNALING_STATE_HAVE_LOCAL_PRANSWER: 3,
    SIGNALING_STATE_HAVE_REMOTE_PRANSWER: 4,
    SIGNALING_STATE_CLOSED: 5,
  }
}