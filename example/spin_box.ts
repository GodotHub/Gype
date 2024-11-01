import { SpinBox } from "@godot/classes/spin_box";
import { GodotClass } from "@godot/core/class_defined";

@GodotClass
export class spin_box extends SpinBox {

	public update(num: number):void {
		GD.print(num);
	}

	public _ready(): void {
		this.value_changed.connect(new Callable(this, this.update), 0);
	}

	public _process(delta: number): void {

	}
}
	
