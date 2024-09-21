import { GodotClass } from "@js_godot/core/class_define";
import { Node2D } from "@js_godot/classes/node2d";

@GodotClass
export class MyNode extends Node2D {
  constructor() {
	super();
  }

  _get(name, property) {
	GD.print(name);
	return true;
  }
}
