import * as internal from '__internal__';
import { VisualShaderNodeOutput } from 'src/js_godot/classesvisual_shader_node_output'
class _MethodBindings {
}


export class VisualShaderNodeParticleOutput extends VisualShaderNodeOutput{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleOutput");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}