import * as internal from '__internal__';
import { CompressedTextureLayered } from 'src/js_godot/classescompressed_texture_layered'
class _MethodBindings {
}


export class CompressedCubemap extends CompressedTextureLayered{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CompressedCubemap");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}