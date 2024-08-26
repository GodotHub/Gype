import * as internal from '__internal__';
import { ResourceImporter } from 'src/js_godot/classesresource_importer'
class _MethodBindings {
}


export class ResourceImporterScene extends ResourceImporter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceImporterScene");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}