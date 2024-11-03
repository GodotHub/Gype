
import { Shape2D } from "@godot/classes/shape2d";
export declare class ConcavePolygonShape2D extends Shape2D{
  public set_segments(_segments: PackedVector2Array): void;
  public get_segments(): PackedVector2Array;
  public get segments(): PackedVector2Array;
  public set segments(value): void;
}