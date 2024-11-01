
import { Node2D } from "@godot/classes/node2d";

export declare class CanvasModulate extends Node2D{
  public set_color(_color: Color): void;
  public get_color(): Color;
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
}