import * as internal from '__internal__';
import { AnimationNode } from 'src/js_godot/classesanimation_node'
class _MethodBindings {
}


export class AnimationRootNode extends AnimationNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationRootNode");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}