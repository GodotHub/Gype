import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { Variant } from '@js_godot/variant/variant'
import { Vector2i } from '@js_godot/variant/vector2i'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class EditorResourcePreviewGenerator extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePreviewGenerator");
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
  _handles(_type) {
  }
  _generate(_resource, _size, _metadata) {
  }
  _generate_from_path(_path, _size, _metadata) {
  }
  _generate_small_preview_automatically() {
  }
  _can_generate_small_preview() {
  }
  


  static {
    this._init_bindings();
  }
}