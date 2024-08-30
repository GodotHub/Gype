import * as internal from '__internal__';
import { RenderSceneBuffers } from 'src/js_godot/classes/render_scene_buffers'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class RenderSceneBuffersExtension extends RenderSceneBuffers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffersExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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