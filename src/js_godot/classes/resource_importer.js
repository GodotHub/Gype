import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
}


export class ResourceImporter extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceImporter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  static ImportOrder = {
    IMPORT_ORDER_DEFAULT: 0,
    IMPORT_ORDER_SCENE: 100,
  }
}