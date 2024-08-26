import * as internal from '__internal__';
import { Container } from 'src/js_godot/classescontainer'
class _MethodBindings {
}


export class MarginContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MarginContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}