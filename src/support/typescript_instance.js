import { TypeScriptInstanceInfo } from "src/js_godot/support/typescript";
import { JSPointer } from "__internal__";

export class TypeScriptInstance {
  godot_object;
  instance_info = new TypeScriptInstanceInfo();

  constructor(godot_object) {
    this.godot_object = godot_object;
  }
}
