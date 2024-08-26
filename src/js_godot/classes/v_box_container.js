import * as internal from '__internal__';
import { BoxContainer } from 'src/js_godot/classesbox_container'
class _MethodBindings {
}


export class VBoxContainer extends BoxContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VBoxContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}