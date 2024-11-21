import {Node2D} from "@godot/classes/node2d";
import {GodotClass} from "@godot/core/class_defined";

@GodotClass
export class world extends Node2D {

	public _ready(): void {
		let callable = new Callable(this, this.test_callable);
		callable.call();
	}

	public _process(delta: number): void {
		
	}
	
	public test_callable(): void {
		GD.print('test callable');
	}
}
