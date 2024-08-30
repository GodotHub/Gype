import * as internal from '__internal__';
import { PacketPeer } from 'src/js_godot/classes/packet_peer'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class PacketPeerExtension extends PacketPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _get_packet(_r_buffer, _r_buffer_size) {
  }
  _put_packet(_p_buffer, _p_buffer_size) {
  }
  _get_available_packet_count() {
  }
  _get_max_packet_size() {
  }
}