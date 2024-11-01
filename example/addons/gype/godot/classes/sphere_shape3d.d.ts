
import { Shape3D } from "@godot/classes/shape3d";

export declare class SphereShape3D extends Shape3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
}