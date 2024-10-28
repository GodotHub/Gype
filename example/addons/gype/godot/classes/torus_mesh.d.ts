
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";

export declare class TorusMesh extends PrimitiveMesh{
  public set_inner_radius(_radius: number): void;
  public get_inner_radius(): number;
  public set_outer_radius(_radius: number): void;
  public get_outer_radius(): number;
  public set_rings(_rings: number): void;
  public get_rings(): number;
  public set_ring_segments(_rings: number): void;
  public get_ring_segments(): number;
  public get inner_radius(): number {
    get_inner_radius();
  }
  public set inner_radius(value: number): void {
    set_inner_radius(value);
  }
  public get outer_radius(): number {
    get_outer_radius();
  }
  public set outer_radius(value: number): void {
    set_outer_radius(value);
  }
  public get rings(): number {
    get_rings();
  }
  public set rings(value: number): void {
    set_rings(value);
  }
  public get ring_segments(): number {
    get_ring_segments();
  }
  public set ring_segments(value: number): void {
    set_ring_segments(value);
  }
}