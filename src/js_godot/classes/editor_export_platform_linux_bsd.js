import * as internal from '__internal__';
import { EditorExportPlatformPC } from 'src/js_godot/classeseditor_export_platform_pc'
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