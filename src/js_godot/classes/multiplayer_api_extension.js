import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { MultiplayerAPI } from 'src/js_godot/classes/multiplayer_api'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class MultiplayerAPIExtension extends MultiplayerAPI{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerAPIExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _poll() {
  }
  _set_multiplayer_peer(_multiplayer_peer) {
  }
  _get_multiplayer_peer() {
  }
  _get_unique_id() {
  }
  _get_peer_ids() {
  }
  _rpc(_peer, _object, _method, _args) {
  }
  _get_remote_sender_id() {
  }
  _object_configuration_add(_object, _configuration) {
  }
  _object_configuration_remove(_object, _configuration) {
  }
}