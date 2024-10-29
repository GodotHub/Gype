
import { Light2D } from "@godot/classes/light2d";

export declare class DirectionalLight2D extends Light2D{
  public set_max_distance(_pixels: number): void;
  public get_max_distance(): number;
  public get height(): number {
    get_height();
  }
  public set height(value): void {
    set_height(value);
  }
  public get max_distance(): number {
    get_max_distance();
  }
  public set max_distance(value): void {
    set_max_distance(value);
  }
}