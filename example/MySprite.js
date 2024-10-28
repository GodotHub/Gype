import { GodotClass, Tool, ToSignal } from "@js_godot/class_defined";
import { Sprite2D } from "godot/classes/sprite2d";

@GodotClass
export class MySprite extends Sprite2D {
  vec2 = new Vector2(500, 0);
  constructor() {
    super();
  }

  _test() {
    GD.print("_test");
  }

  async _enter_tree() {
    GD.print("pre");
    await ToSignal(this, "ready");
    GD.print("after");
  }

  _ready() {
    // GD.print(this.vec2);
  }

  _process(delta) {}
}
