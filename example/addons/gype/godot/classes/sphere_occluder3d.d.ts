
import { Occluder3D } from "@godot/classes/occluder3d";

export declare class SphereOccluder3D extends Occluder3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
}