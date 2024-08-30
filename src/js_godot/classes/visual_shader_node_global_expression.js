import * as internal from '__internal__';
import { VisualShaderNodeExpression } from 'src/js_godot/classes/visual_shader_node_expression'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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