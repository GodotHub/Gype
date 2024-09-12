import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCPeerConnection");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_default_extension() {
    if (!this.#_bindings.method_set_default_extension) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("set_default_extension");
      this.#_bindings.method_set_default_extension = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_initialize() {
    if (!this.#_bindings.method_initialize) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("initialize");
      this.#_bindings.method_initialize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2625064318
      );
    }
  }
  static init_method_create_data_channel() {
    if (!this.#_bindings.method_create_data_channel) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("create_data_channel");
      this.#_bindings.method_create_data_channel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1288557393
      );
    }
  }
  static init_method_create_offer() {
    if (!this.#_bindings.method_create_offer) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("create_offer");
      this.#_bindings.method_create_offer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_set_local_description() {
    if (!this.#_bindings.method_set_local_description) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("set_local_description");
      this.#_bindings.method_set_local_description = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        852856452
      );
    }
  }
  static init_method_set_remote_description() {
    if (!this.#_bindings.method_set_remote_description) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("set_remote_description");
      this.#_bindings.method_set_remote_description = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        852856452
      );
    }
  }
  static init_method_add_ice_candidate() {
    if (!this.#_bindings.method_add_ice_candidate) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("add_ice_candidate");
      this.#_bindings.method_add_ice_candidate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3958950400
      );
    }
  }
  static init_method_poll() {
    if (!this.#_bindings.method_poll) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("poll");
      this.#_bindings.method_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_close() {
    if (!this.#_bindings.method_close) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("close");
      this.#_bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_connection_state() {
    if (!this.#_bindings.method_get_connection_state) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("get_connection_state");
      this.#_bindings.method_get_connection_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2275710506
      );
    }
  }
  static init_method_get_gathering_state() {
    if (!this.#_bindings.method_get_gathering_state) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("get_gathering_state");
      this.#_bindings.method_get_gathering_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4262591401
      );
    }
  }
  static init_method_get_signaling_state() {
    if (!this.#_bindings.method_get_signaling_state) {
      let classname = new StringName("WebRTCPeerConnection");
      let methodname = new StringName("get_signaling_state");
      this.#_bindings.method_get_signaling_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3342956226
      );
    }
  }

  
  
  set_default_extension(_extension_class) {
    WebRTCPeerConnection.init_method_set_default_extension();
    return _call_native_mb_no_ret(
      WebRTCPeerConnection.#_bindings.method_set_default_extension,
      this._owner,
      _extension_class
    );
    
  }
  initialize(_configuration) {
    WebRTCPeerConnection.init_method_initialize();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_initialize,
      this._owner,
			Variant.Type.INT,
    
      _configuration
    );
    
  }
  create_data_channel(_label, _options) {
    WebRTCPeerConnection.init_method_create_data_channel();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_create_data_channel,
      this._owner,
			Variant.Type.OBJECT,
      _label, _options
    );
    
  }
  create_offer() {
    WebRTCPeerConnection.init_method_create_offer();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_create_offer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_local_description(_type, _sdp) {
    WebRTCPeerConnection.init_method_set_local_description();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_set_local_description,
      this._owner,
			Variant.Type.INT,
    
      _type, _sdp
    );
    
  }
  set_remote_description(_type, _sdp) {
    WebRTCPeerConnection.init_method_set_remote_description();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_set_remote_description,
      this._owner,
			Variant.Type.INT,
    
      _type, _sdp
    );
    
  }
  add_ice_candidate(_media, _index, _name) {
    WebRTCPeerConnection.init_method_add_ice_candidate();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_add_ice_candidate,
      this._owner,
			Variant.Type.INT,
    
      _media, _index, _name
    );
    
  }
  poll() {
    WebRTCPeerConnection.init_method_poll();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_poll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  close() {
    WebRTCPeerConnection.init_method_close();
    return _call_native_mb_no_ret(
      WebRTCPeerConnection.#_bindings.method_close,
      this._owner,
      
    );
    
  }
  get_connection_state() {
    WebRTCPeerConnection.init_method_get_connection_state();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_get_connection_state,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_gathering_state() {
    WebRTCPeerConnection.init_method_get_gathering_state();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_get_gathering_state,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_signaling_state() {
    WebRTCPeerConnection.init_method_get_signaling_state();
    return _call_native_mb_ret(
      WebRTCPeerConnection.#_bindings.method_get_signaling_state,
      this._owner,
			Variant.Type.INT,
    
      
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