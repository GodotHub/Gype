import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { RenderData } from '@js_godot/classes/render_data'
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
export class RenderDataExtension extends RenderData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderDataExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _get_render_scene_buffers() {
  }
  _get_render_scene_data() {
  }
  _get_environment() {
  }
  _get_camera_attributes() {
  }
  

}