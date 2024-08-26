import * as internal from '__internal__';
import { GLTFDocument } from 'src/js_godot/classesgltf_document'
class _MethodBindings {
}


export class FBXDocument extends GLTFDocument{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FBXDocument");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}