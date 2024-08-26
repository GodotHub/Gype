import * as internal from '__internal__';
import { CSGShape3D } from 'src/js_godot/classescsg_shape3d'
class _MethodBindings {
}


export class CSGCombiner3D extends CSGShape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGCombiner3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}