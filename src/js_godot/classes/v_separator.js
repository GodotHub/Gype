import * as internal from '__internal__';
import { Separator } from 'src/js_godot/classesseparator'
class _MethodBindings {
}


export class VSeparator extends Separator{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VSeparator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}