import * as internal from '__internal__';
import { EditorExportPlatformPC } from 'src/js_godot/classes/editor_export_platform_pc'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class EditorExportPlatformLinuxBSD extends EditorExportPlatformPC{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorExportPlatformLinuxBSD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}