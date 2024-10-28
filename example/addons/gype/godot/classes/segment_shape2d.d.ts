
import { Shape2D } from "@godot/classes/shape2d";

export declare class SegmentShape2D extends Shape2D{
  public set_a(_a: Vector2): void;
  public get_a(): Vector2;
  public set_b(_b: Vector2): void;
  public get_b(): Vector2;
  public get a(): Vector2 {
    get_a();
  }
  public set a(value: Vector2): void {
    set_a(value);
  }
  public get b(): Vector2 {
    get_b();
  }
  public set b(value: Vector2): void {
    set_b(value);
  }
}