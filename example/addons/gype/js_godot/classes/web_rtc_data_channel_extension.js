import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { WebRTCDataChannel } from '@js_godot/classes/web_rtc_data_channel'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class WebRTCDataChannelExtension extends WebRTCDataChannel{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WebRTCDataChannelExtension");
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
  _get_packet(_r_buffer, _r_buffer_size) {
  }
  _put_packet(_p_buffer, _p_buffer_size) {
  }
  _get_available_packet_count() {
  }
  _get_max_packet_size() {
  }
  _poll() {
  }
  _close() {
  }
  _set_write_mode(_p_write_mode) {
  }
  _get_write_mode() {
  }
  _was_string_packet() {
  }
  _get_ready_state() {
  }
  _get_label() {
  }
  _is_ordered() {
  }
  _get_id() {
  }
  _get_max_packet_life_time() {
  }
  _get_max_retransmits() {
  }
  _get_protocol() {
  }
  _is_negotiated() {
  }
  _get_buffered_amount() {
  }
  


  static {
    this._init_bindings();
  }
}