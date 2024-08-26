import * as internal from '__internal__';
import { Camera3D } from 'src/js_godot/classescamera3d'
class _MethodBindings {
}


export class XRCamera3D extends Camera3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRCamera3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}