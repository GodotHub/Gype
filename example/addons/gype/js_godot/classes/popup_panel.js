import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Popup } from '@js_godot/classes/popup'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class PopupPanel extends Popup{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PopupPanel");
    } else {
      super(godot_object);
    }
  }

  
  
  

}