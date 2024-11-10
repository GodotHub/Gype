import { Node2D } from "@godot/classes/node2d";
import { GodotClass } from "@godot/core/class_defined";

@GodotClass
export class test extends Node2D {
	public _ready(): void {
		GD.print("1");
	}

	public _process(delta: number): void {

	}
}
	
