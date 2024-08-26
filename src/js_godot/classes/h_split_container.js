import * as internal from '__internal__';
import { SplitContainer } from 'src/js_godot/classessplit_container'
class _MethodBindings {
}


export class HSplitContainer extends SplitContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HSplitContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}