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
}
@GodotClass
export class PacketPeerExtension extends PacketPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerExtension");
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
  

}