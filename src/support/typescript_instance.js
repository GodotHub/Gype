import { TypeScriptInstanceInfo } from "support/typescript";
import { JSPointer } from "__internal__";

export class TypeScriptInstance {
  godot_object;

  constructor(godot_object) {
    this.godot_object = godot_object;
  }

  set(name, p_value) {}
  get(name, r_ret) {}
}
