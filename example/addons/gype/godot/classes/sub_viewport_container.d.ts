
import { Container } from "@godot/classes/container";
import { InputEvent } from "@godot/classes/input_event";
export declare class SubViewportContainer extends Container{
  public _propagate_input_event(_event: InputEvent): boolean;
  public set_stretch(_enable: boolean): void;
  public is_stretch_enabled(): boolean;
  public set_stretch_shrink(_amount: number): void;
  public get_stretch_shrink(): number;
  public get stretch(): boolean;
  public set stretch(value): void;
  public get stretch_shrink(): number;
  public set stretch_shrink(value): void;
}