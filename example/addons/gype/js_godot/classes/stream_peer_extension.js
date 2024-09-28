import * as internal from '__internal__';
import { StreamPeer } from '@js_godot/classes/stream_peer'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
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
export class StreamPeerExtension extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _get_data(_r_buffer, _r_bytes, _r_received) {
  }
  _get_partial_data(_r_buffer, _r_bytes, _r_received) {
  }
  _put_data(_p_data, _p_bytes, _r_sent) {
  }
  _put_partial_data(_p_data, _p_bytes, _r_sent) {
  }
  _get_available_bytes() {
  }
  

}