
import { InputEvent } from "@godot/classes/input_event";
import { Container } from "@godot/classes/container";

export declare class SubViewportContainer extends Container{
  public _propagate_input_event(_event: InputEvent): boolean;
  public set_stretch(_enable: boolean): void;
  public is_stretch_enabled(): boolean;
  public set_stretch_shrink(_amount: number): void;
  public get_stretch_shrink(): number;
  public get stretch(): boolean {
    is_stretch_enabled();
  }
  public set stretch(value): void {
    set_stretch(value);
  }
  public get stretch_shrink(): number {
    get_stretch_shrink();
  }
  public set stretch_shrink(value): void {
    set_stretch_shrink(value);
  }
}