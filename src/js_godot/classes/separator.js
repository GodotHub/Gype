import * as internal from '__internal__';
import { Control } from 'src/js_godot/classescontrol'
class _MethodBindings {
}


export class Separator extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Separator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}