import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
}


export class ImageFormatLoader extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageFormatLoader");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  static LoaderFlags = {
    FLAG_NONE: 0,
    FLAG_FORCE_LINEAR: 1,
    FLAG_CONVERT_COLORS: 2,
  }
}