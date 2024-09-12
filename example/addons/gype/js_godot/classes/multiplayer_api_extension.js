import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { MultiplayerAPI } from '@js_godot/classes/multiplayer_api'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class MultiplayerAPIExtension extends MultiplayerAPI{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerAPIExtension");
    } else {
      super(godot_object);
    }
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