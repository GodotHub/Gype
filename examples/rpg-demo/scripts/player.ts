import { Node2D } from "@godot/classes/node2d";
import { GodotClass } from "@godot/core/class_defined";

@GodotClass
export class Player extends Node2D {
  public _ready(): void {
  }

  public _process(delta: number): void {
	let x =
	  Input.get_action_strength("ui_right") -
	  Input.get_action_strength("ui_left");
	let y =
	  Input.get_action_strength("ui_down") - Input.get_action_strength("ui_up");
	  
  }
}
