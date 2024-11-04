import { Node2D } from "@godot/classes/node2d";
import { GodotClass } from "@godot/core/class_defined";

@GodotClass
export class world extends Node2D {
  #test_node: Node2D = new Node2D();

  public _ready(): void {
	this.add_child(this.#test_node);
  }

  public _process(delta: number): void {}
}
