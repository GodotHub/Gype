import * as internal from '__internal__';
import { RID } from '@js_godot/variant/rid'
import { StringName } from '@js_godot/variant/string_name'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import { Projection } from '@js_godot/variant/projection'
import { RenderSceneData } from '@js_godot/classes/render_scene_data'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class RenderSceneDataExtension extends RenderSceneData{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneDataExtension");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
  


  static {
    this._init_bindings();
  }
}