import * as internal from '__internal__';
import { RenderData } from 'src/js_godot/classesrender_data'
class _MethodBindings {
}


export class RenderDataRD extends RenderData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderDataRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}