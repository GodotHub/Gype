
import { Node2D } from "@godot/classes/node2d";
import { Curve2D } from "@godot/classes/curve2d";

export declare class Path2D extends Node2D{
  public set_curve(_curve: Curve2D): void;
  public get_curve(): Curve2D;
  public get curve(): Curve2D {
    get_curve();
  }
  public set curve(value): void {
    set_curve(value);
  }
}