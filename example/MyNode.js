import { GodotClass, Tool } from "@js_godot/class_defined";
import { Node2D } from "godot/classes/node2d";

@GodotClass
export class MyNode extends Node2D {
  node;

  constructor() {
	super();
  }

  _ready() {
	this.node = new Node2D();
	this.add_child(this.node);
  }
}
