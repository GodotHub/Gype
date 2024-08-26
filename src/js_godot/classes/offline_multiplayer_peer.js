import * as internal from '__internal__';
import { MultiplayerPeer } from 'src/js_godot/classesmultiplayer_peer'
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