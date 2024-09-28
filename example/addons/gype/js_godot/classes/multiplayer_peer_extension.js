import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { MultiplayerPeer } from '@js_godot/classes/multiplayer_peer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
}
@GodotClass
export class MultiplayerPeerExtension extends MultiplayerPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerPeerExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _get_packet(_r_buffer, _r_buffer_size) {
  }
  _put_packet(_p_buffer, _p_buffer_size) {
  }
  _get_available_packet_count() {
  }
  _get_max_packet_size() {
  }
  _get_packet_script() {
  }
  _put_packet_script(_p_buffer) {
  }
  _get_packet_channel() {
  }
  _get_packet_mode() {
  }
  _set_transfer_channel(_p_channel) {
  }
  _get_transfer_channel() {
  }
  _set_transfer_mode(_p_mode) {
  }
  _get_transfer_mode() {
  }
  _set_target_peer(_p_peer) {
  }
  _get_packet_peer() {
  }
  _is_server() {
  }
  _poll() {
  }
  _close() {
  }
  _disconnect_peer(_p_peer, _p_force) {
  }
  _get_unique_id() {
  }
  _set_refuse_new_connections(_p_enable) {
  }
  _is_refusing_new_connections() {
  }
  _is_server_relay_supported() {
  }
  _get_connection_status() {
  }
  

}