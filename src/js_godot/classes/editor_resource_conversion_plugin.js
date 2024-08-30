import * as internal from '__internal__';
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


export class EditorResourceConversionPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourceConversionPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _converts_to() {
  }
  _handles(_resource) {
  }
  _convert(_resource) {
  }
}