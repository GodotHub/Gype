import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { RID } from 'src/js_godot/variant/rid'
import { RenderData } from 'src/js_godot/classes/render_data'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class RenderDataExtension extends RenderData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderDataExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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