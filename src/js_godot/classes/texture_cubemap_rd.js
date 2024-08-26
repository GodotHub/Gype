import * as internal from '__internal__';
import { TextureLayeredRD } from 'src/js_godot/classestexture_layered_rd'
class _MethodBindings {
}


export class TextureCubemapRD extends TextureLayeredRD{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureCubemapRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}