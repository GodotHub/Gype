import { GodotClass, Tool } from "@js_godot/class_defined";
import { Node2D } from "godot/classes/node2d";

@GodotClass
export class MyNode extends Node2D {
  _position = new Vector2();
  constructor() {
	super();
  }

  _ready() {
	GD.print(this.position);
  }

  _process(delta) {
  }
}
