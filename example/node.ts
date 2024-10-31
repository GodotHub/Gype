import { Node } from "@godot/classes/node";
import { GodotClass, toPromise } from "@godot/core/class_defined";

@GodotClass
export class node extends Node {
	public async _enter_tree(): Promise<void> {
		GD.print("test1");
		await toPromise(this.ready);
		GD.print("test2");
	}
	
	public _ready(): void {
		GD.print("test3");
	}

	public _process(delta: number): void {

	}
}
	
