
import { Resource } from "@godot/classes/resource";
export declare class Shape2D extends Resource{
  public set_custom_solver_bias(_bias: number): void;
  public get_custom_solver_bias(): number;
  public collide(_local_xform: Transform2D, _with_shape: Shape2D, _shape_xform: Transform2D): boolean;
  public collide_with_motion(_local_xform: Transform2D, _local_motion: Vector2, _with_shape: Shape2D, _shape_xform: Transform2D, _shape_motion: Vector2): boolean;
  public collide_and_get_contacts(_local_xform: Transform2D, _with_shape: Shape2D, _shape_xform: Transform2D): PackedVector2Array;
  public collide_with_motion_and_get_contacts(_local_xform: Transform2D, _local_motion: Vector2, _with_shape: Shape2D, _shape_xform: Transform2D, _shape_motion: Vector2): PackedVector2Array;
  public draw(_canvas_item: RID, _color: Color): void;
  public get_rect(): Rect2;
  public get custom_solver_bias(): number;
  public set custom_solver_bias(value): void;
}