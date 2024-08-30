import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class EditorResourcePreviewGenerator extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePreviewGenerator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
}