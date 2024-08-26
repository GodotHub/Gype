import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
}


export class Texture extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}