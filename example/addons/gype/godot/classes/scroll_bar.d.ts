
import { Range } from "@godot/classes/range";

export declare class ScrollBar extends Range{
  public set_custom_step(_step: number): void;
  public get_custom_step(): number;
  public get custom_step(): number {
    get_custom_step();
  }
  public set custom_step(value: number): void {
    set_custom_step(value);
  }
}