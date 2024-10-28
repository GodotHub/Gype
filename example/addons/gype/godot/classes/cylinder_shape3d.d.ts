
import { Shape3D } from "@godot/classes/shape3d";

export declare class CylinderShape3D extends Shape3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public get height(): number {
    get_height();
  }
  public set height(value: number): void {
    set_height(value);
  }
  public get radius(): number {
    get_radius();
  }
  public set radius(value: number): void {
    set_radius(value);
  }
}