import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RenderSceneBuffers } from '@js_godot/classes/render_scene_buffers'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class RenderSceneBuffersExtension extends RenderSceneBuffers{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffersExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _configure(_config) {
  }
  _set_fsr_sharpness(_fsr_sharpness) {
  }
  _set_texture_mipmap_bias(_texture_mipmap_bias) {
  }
  _set_use_debanding(_use_debanding) {
  }
  

}