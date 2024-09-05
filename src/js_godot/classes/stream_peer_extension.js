import * as internal from '__internal__';
import { StreamPeer } from '@js_godot/classes/stream_peer'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class StreamPeerExtension extends StreamPeer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
  


  static {
    this._init_bindings();
  }
}