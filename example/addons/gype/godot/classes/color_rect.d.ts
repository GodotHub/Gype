
import { Control } from "@godot/classes/control";

export declare class ColorRect extends Control{
  public set_color(_color: Color): void;
  public get_color(): Color;
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
}