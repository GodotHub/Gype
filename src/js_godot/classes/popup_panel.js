import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Popup } from 'src/js_godot/classes/popup'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class PopupPanel extends Popup{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PopupPanel");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}