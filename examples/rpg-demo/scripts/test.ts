import { Node2D } from "@godot/classes/node2d";
import { GodotClass } from "@godot/core/class_defined";

@GodotClass
export class Test extends Node2D {
	public _ready(): void {
		GD.print(123);
	}

	public _process(delta: number): void {

	}
}
