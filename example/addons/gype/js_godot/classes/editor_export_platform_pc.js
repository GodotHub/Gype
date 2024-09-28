import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { EditorExportPlatform } from '@js_godot/classes/editor_export_platform'
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
export class EditorExportPlatformPC extends EditorExportPlatform{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorExportPlatformPC");
    } else {
      super(godot_object);
    }
  }

  
  
  

}