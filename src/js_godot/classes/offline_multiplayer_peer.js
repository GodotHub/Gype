import * as internal from '__internal__';
import { MultiplayerPeer } from 'src/js_godot/classes/multiplayer_peer'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class OfflineMultiplayerPeer extends MultiplayerPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OfflineMultiplayerPeer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}