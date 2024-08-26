import * as internal from '__internal__';
import { PlaceholderTextureLayered } from 'src/js_godot/classesplaceholder_texture_layered'
class _MethodBindings {
}


export class PlaceholderCubemapArray extends PlaceholderTextureLayered{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderCubemapArray");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}