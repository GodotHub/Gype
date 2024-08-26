import * as internal from '__internal__';
import { VisualShaderNodeExpression } from 'src/js_godot/classesvisual_shader_node_expression'
class _MethodBindings {
}


export class VisualShaderNodeGlobalExpression extends VisualShaderNodeExpression{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeGlobalExpression");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}