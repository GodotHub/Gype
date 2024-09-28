import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
}
@GodotClass
export class ScriptLanguage extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptLanguage");
    } else {
      super(godot_object);
    }
  }

  
  
  

  static ScriptNameCasing = {
    SCRIPT_NAME_CASING_AUTO: 0,
    SCRIPT_NAME_CASING_PASCAL_CASE: 1,
    SCRIPT_NAME_CASING_SNAKE_CASE: 2,
    SCRIPT_NAME_CASING_KEBAB_CASE: 3,
  }
}