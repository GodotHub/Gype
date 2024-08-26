import * as internal from '__internal__';
import { PrimitiveMesh } from 'src/js_godot/classesprimitive_mesh'
class _MethodBindings {
}


export class PointMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PointMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}