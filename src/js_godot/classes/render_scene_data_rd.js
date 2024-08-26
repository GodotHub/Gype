import * as internal from '__internal__';
import { RenderSceneData } from 'src/js_godot/classesrender_scene_data'
class _MethodBindings {
}


export class RenderSceneDataRD extends RenderSceneData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneDataRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}