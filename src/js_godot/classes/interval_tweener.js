import * as internal from '__internal__';
import { Tweener } from 'src/js_godot/classestweener'
class _MethodBindings {
}


export class IntervalTweener extends Tweener{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("IntervalTweener");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}