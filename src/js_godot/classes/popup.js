import * as internal from '__internal__';
import { Window } from 'src/js_godot/classeswindow'
class _MethodBindings {
}


export class Popup extends Window{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Popup");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}