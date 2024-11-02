
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
  public get size(): Vector2;
  public set size(value): void;
  public get subdivide_width(): number;
  public set subdivide_width(value): void;
  public get subdivide_depth(): number;
  public set subdivide_depth(value): void;
  public get center_offset(): Vector3;
  public set center_offset(value): void;
  public get orientation(): number;
  public set orientation(value): void;
  static Orientation = {
    FACE_X = 0,
    FACE_Y = 1,
    FACE_Z = 2,
  }
}