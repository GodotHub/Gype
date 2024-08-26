import * as internal from '__internal__';
import { Popup } from 'src/js_godot/classespopup'
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