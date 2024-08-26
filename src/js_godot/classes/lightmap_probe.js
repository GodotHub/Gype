import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
class _MethodBindings {
}


export class LightmapProbe extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LightmapProbe");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}