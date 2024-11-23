import {Node2D} from "@godot/classes/node2d";
import {GodotClass,to_promise} from "@godot/core/class_defined";

@GodotClass
export class world extends Node2D {

	public async _enter_tree(): Promise<void> {
		GD.print('pre');
		await to_promise(this.ready);
		GD.print('aft');
	}

	public _ready(): void {
		GD.print('ready');
	}

	public _process(delta: number): void {
		
	}
	
	public test_callable(): void {
	}
}
