
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
  public get inner_radius(): number;
  public set inner_radius(value): void;
  public get outer_radius(): number;
  public set outer_radius(value): void;
  public get rings(): number;
  public set rings(value): void;
  public get ring_segments(): number;
  public set ring_segments(value): void;
}