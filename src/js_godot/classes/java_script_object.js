import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
}


export class JavaScriptObject extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaScriptObject");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}