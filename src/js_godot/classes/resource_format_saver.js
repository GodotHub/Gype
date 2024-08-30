import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class ResourceFormatSaver extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceFormatSaver");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _save(_resource, _path, _flags) {
  }
  _set_uid(_path, _uid) {
  }
  _recognize(_resource) {
  }
  _get_recognized_extensions(_resource) {
  }
  _recognize_path(_resource, _path) {
  }
}