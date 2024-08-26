import * as internal from '__internal__';
import { Light3D } from 'src/js_godot/classeslight3d'
class _MethodBindings {
}


export class SpotLight3D extends Light3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpotLight3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}