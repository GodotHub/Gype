import * as internal from '__internal__';
import { ScrollBar } from 'src/js_godot/classesscroll_bar'
class _MethodBindings {
}


export class HScrollBar extends ScrollBar{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HScrollBar");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}