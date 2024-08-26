import * as internal from '__internal__';
import { FlowContainer } from 'src/js_godot/classesflow_container'
class _MethodBindings {
}


export class VFlowContainer extends FlowContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VFlowContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}