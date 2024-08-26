import * as internal from '__internal__';
import { CompressedTextureLayered } from 'src/js_godot/classescompressed_texture_layered'
class _MethodBindings {
}


export class CompressedCubemapArray extends CompressedTextureLayered{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CompressedCubemapArray");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}