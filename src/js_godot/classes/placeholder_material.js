import * as internal from '__internal__';
import { Material } from 'src/js_godot/classesmaterial'
class _MethodBindings {
}


export class PlaceholderMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}