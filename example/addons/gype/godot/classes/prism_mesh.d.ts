
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";


export declare class PrismMesh extends PrimitiveMesh{
  public set_left_to_right(_left_to_right: number): void;
  public get_left_to_right(): number;
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_subdivide_width(_segments: number): void;
  public get_subdivide_width(): number;
  public set_subdivide_height(_segments: number): void;
  public get_subdivide_height(): number;
  public set_subdivide_depth(_segments: number): void;
  public get_subdivide_depth(): number;
  public get left_to_right(): number;
  public set left_to_right(value): void;
  public get size(): Vector3;
  public set size(value): void;
  public get subdivide_width(): number;
  public set subdivide_width(value): void;
  public get subdivide_height(): number;
  public set subdivide_height(value): void;
  public get subdivide_depth(): number;
  public set subdivide_depth(value): void;
}