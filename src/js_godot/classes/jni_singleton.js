import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
class _MethodBindings {
}


export class JNISingleton extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("JNISingleton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}