import * as internal from '__internal__';
import { VisualShaderNodeParticleEmitter } from 'src/js_godot/classesvisual_shader_node_particle_emitter'
class _MethodBindings {
}


export class VisualShaderNodeParticleBoxEmitter extends VisualShaderNodeParticleEmitter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleBoxEmitter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}