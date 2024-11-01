
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
  public get left_to_right(): number {
    get_left_to_right();
  }
  public set left_to_right(value): void {
    set_left_to_right(value);
  }
  public get size(): Vector3 {
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
  public get subdivide_height(): number {
    get_subdivide_height();
  }
  public set subdivide_height(value): void {
    set_subdivide_height(value);
  }
  public get subdivide_depth(): number {
    get_subdivide_depth();
  }
  public set subdivide_depth(value): void {
    set_subdivide_depth(value);
  }
}