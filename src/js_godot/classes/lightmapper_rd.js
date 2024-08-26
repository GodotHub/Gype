import * as internal from '__internal__';
import { Lightmapper } from 'src/js_godot/classeslightmapper'
class _MethodBindings {
}


export class LightmapperRD extends Lightmapper{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LightmapperRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}