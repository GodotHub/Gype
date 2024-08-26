import * as internal from '__internal__';
import { EditorExportPlatform } from 'src/js_godot/classeseditor_export_platform'
class _MethodBindings {
}


export class EditorExportPlatformWeb extends EditorExportPlatform{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorExportPlatformWeb");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}