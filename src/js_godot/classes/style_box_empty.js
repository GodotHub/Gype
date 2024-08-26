import * as internal from '__internal__';
import { StyleBox } from 'src/js_godot/classesstyle_box'
class _MethodBindings {
}


export class StyleBoxEmpty extends StyleBox{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StyleBoxEmpty");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}