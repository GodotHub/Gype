import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNodeTextureParameter } from '@js_godot/classes/visual_shader_node_texture_parameter'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
}
@GodotClass
export class VisualShaderNodeTexture2DParameter extends VisualShaderNodeTextureParameter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTexture2DParameter");
    } else {
      super(godot_object);
    }
  }

  
  
  

}