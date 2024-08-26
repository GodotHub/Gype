import * as internal from '__internal__';
import { PlaneMesh } from 'src/js_godot/classesplane_mesh'
class _MethodBindings {
}


export class QuadMesh extends PlaneMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("QuadMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}