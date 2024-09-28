import * as internal from '__internal__';
import { RenderSceneData } from '@js_godot/classes/render_scene_data'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
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
export class RenderSceneDataRD extends RenderSceneData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneDataRD");
    } else {
      super(godot_object);
    }
  }

  
  
  

}