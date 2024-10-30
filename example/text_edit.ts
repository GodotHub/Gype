import { TextEdit } from "@godot/classes/text_edit";
import { GodotClass, ToSignal } from "@godot/core/class_defined";

@GodotClass
export class text_edit extends TextEdit {
	public async _ready(): Promise<void> {
		await ToSignal(this, "text_changed");
		GD.print('123');
	}

	public _process(delta: number): void {

	}
}
	
