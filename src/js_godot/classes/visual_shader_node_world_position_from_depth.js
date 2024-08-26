import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
class _MethodBindings {
}


export class VisualShaderNodeWorldPositionFromDepth extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeWorldPositionFromDepth");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}