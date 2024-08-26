import * as internal from '__internal__';
import { VisualShaderNodeTextureParameter } from 'src/js_godot/classesvisual_shader_node_texture_parameter'
class _MethodBindings {
}


export class VisualShaderNodeTexture3DParameter extends VisualShaderNodeTextureParameter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTexture3DParameter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}