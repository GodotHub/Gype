import { GodotClass } from "@js_godot/class_defined";
import { Sprite2D } from "godot/classes/sprite2d";

@GodotClass
export class MySprite extends Sprite2D {
  speed = 1.0;

  constructor() {
	super();
  }

  _ready() {
	GD.print("ready");
	GD.print("speed: ", this.speed);
  }
}
