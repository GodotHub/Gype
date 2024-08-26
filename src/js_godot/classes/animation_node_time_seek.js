import * as internal from '__internal__';
import { AnimationNode } from 'src/js_godot/classesanimation_node'
class _MethodBindings {
}


export class AnimationNodeTimeSeek extends AnimationNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeTimeSeek");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}