import * as internal from '__internal__';
import { Separator } from 'src/js_godot/classesseparator'
class _MethodBindings {
}


export class HSeparator extends Separator{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HSeparator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}