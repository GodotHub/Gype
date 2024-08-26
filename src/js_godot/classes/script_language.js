import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
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