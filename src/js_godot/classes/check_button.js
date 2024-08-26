import * as internal from '__internal__';
import { Button } from 'src/js_godot/classesbutton'
class _MethodBindings {
}


export class CheckButton extends Button{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CheckButton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}