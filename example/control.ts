import { Control } from "@godot/classes/control";
import { GodotClass } from "@godot/core/class_defined";

@GodotClass
export class RootNode extends Control {
  public _ready(): void {
    let child = this.get_node("./Child");
    GD.print((child as Control).size);
  }

  public _process(delta: number): void {}
}
