import * as internal from '__internal__';
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { WebRTCPeerConnection } from 'src/js_godot/classes/web_rtc_peer_connection'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
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
  }
  _get_connection_state() {
  }
  _get_gathering_state() {
  }
  _get_signaling_state() {
  }
  _initialize(_p_config) {
  }
  _create_data_channel(_p_label, _p_config) {
  }
  _create_offer() {
  }
  _set_remote_description(_p_type, _p_sdp) {
  }
  _set_local_description(_p_type, _p_sdp) {
  }
  _add_ice_candidate(_p_sdp_mid_name, _p_sdp_mline_index, _p_sdp_name) {
  }
  _poll() {
  }
  _close() {
  }
}