import * as internal from '__internal__';
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


export class ImageFormatLoader extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageFormatLoader");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  static LoaderFlags = {
    FLAG_NONE: 0,
    FLAG_FORCE_LINEAR: 1,
    FLAG_CONVERT_COLORS: 2,
  }
}