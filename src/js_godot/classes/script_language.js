import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class ScriptLanguage extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptLanguage");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  static ScriptNameCasing = {
    SCRIPT_NAME_CASING_AUTO: 0,
    SCRIPT_NAME_CASING_PASCAL_CASE: 1,
    SCRIPT_NAME_CASING_SNAKE_CASE: 2,
    SCRIPT_NAME_CASING_KEBAB_CASE: 3,
  }
}