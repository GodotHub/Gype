import { GodotClass, Tool } from "@js_godot/class_defined";
import { Sprite2D } from "godot/classes/sprite2d";

@GodotClass
export class MySprite extends Sprite2D {
  vec2 = new Vector2(500, 0);
  constructor() {
	super();
  }

  _method() {
	GD.print("process");
  }

  _ready() {
	this.position = this.vec2;
	GD.print(this.position);
	
	let method = new Callable(this, this._method);
	method.call();
  }

  _process(delta) {
	this.vec2.y += 100 * delta;
	this.position = this.vec2;
  }

}
