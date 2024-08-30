import * as internal from '__internal__';
import { StreamPeer } from 'src/js_godot/classes/stream_peer'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class StreamPeerExtension extends StreamPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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