import * as internal from '__internal__';
import { BaseMaterial3D } from 'src/js_godot/classesbase_material3d'
class _MethodBindings {
}


export class ORMMaterial3D extends BaseMaterial3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ORMMaterial3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}