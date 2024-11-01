
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";

export declare class PlaneMesh extends PrimitiveMesh{
  public set_size(_size: Vector2): void;
  public get_size(): Vector2;
  public set_subdivide_width(_subdivide: number): void;
  public get_subdivide_width(): number;
  public set_subdivide_depth(_subdivide: number): void;
  public get_subdivide_depth(): number;
  public set_center_offset(_offset: Vector3): void;
  public get_center_offset(): Vector3;
  public set_orientation(_orientation: number): void;
  public get_orientation(): number;
  public get size(): Vector2 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get subdivide_width(): number {
    get_subdivide_width();
  }
  public set subdivide_width(value): void {
    set_subdivide_width(value);
  }
  public get subdivide_depth(): number {
    get_subdivide_depth();
  }
  public set subdivide_depth(value): void {
    set_subdivide_depth(value);
  }
  public get center_offset(): Vector3 {
    get_center_offset();
  }
  public set center_offset(value): void {
    set_center_offset(value);
  }
  public get orientation(): number {
    get_orientation();
  }
  public set orientation(value): void {
    set_orientation(value);
  }
  static Orientation = {
    FACE_X = 0,
    FACE_Y = 1,
    FACE_Z = 2,
  }
}