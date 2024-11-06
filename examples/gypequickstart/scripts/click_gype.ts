import { Button } from "@godot/classes/button";
import { GodotClass } from "@godot/core/class_defined";
import { Label } from "@godot/classes/label";

@GodotClass
export class ClickGype extends Button {
	#label?: Label;
	#count = 0;

	public _ready(): void {
		this.#label = this.get_node("../Label");
		this.pressed.connect(new Callable(this, this.add_count));
	}

	public add_count() {
		this.#label!.text = (this.#count++).toString();
	}

	public _process(delta: number): void {

	}
}