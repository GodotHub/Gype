import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Variant } from 'src/js_godot/variant/variant'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class EditorSceneFormatImporter extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSceneFormatImporter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _get_import_flags() {
  }
  _get_extensions() {
  }
  _import_scene(_path, _flags, _options) {
  }
  _get_import_options(_path) {
  }
  _get_option_visibility(_path, _for_animation, _option) {
  }
}