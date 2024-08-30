import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { RenderSceneData } from 'src/js_godot/classes/render_scene_data'
import { RID } from 'src/js_godot/variant/rid'
import { Projection } from 'src/js_godot/variant/projection'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class RenderSceneDataExtension extends RenderSceneData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneDataExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _get_cam_transform() {
  }
  _get_cam_projection() {
  }
  _get_view_count() {
  }
  _get_view_eye_offset(_view) {
  }
  _get_view_projection(_view) {
  }
  _get_uniform_buffer() {
  }
}