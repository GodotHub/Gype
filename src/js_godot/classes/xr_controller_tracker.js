import * as internal from '__internal__';
import { XRPositionalTracker } from 'src/js_godot/classesxr_positional_tracker'
class _MethodBindings {
}


export class XRControllerTracker extends XRPositionalTracker{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRControllerTracker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}