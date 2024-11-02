
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";


export declare class CylinderMesh extends PrimitiveMesh{
  public set_top_radius(_radius: number): void;
  public get_top_radius(): number;
  public set_bottom_radius(_radius: number): void;
  public get_bottom_radius(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public set_radial_segments(_segments: number): void;
  public get_radial_segments(): number;
  public set_rings(_rings: number): void;
  public get_rings(): number;
  public set_cap_top(_cap_top: boolean): void;
  public is_cap_top(): boolean;
  public set_cap_bottom(_cap_bottom: boolean): void;
  public is_cap_bottom(): boolean;
  public get top_radius(): number;
  public set top_radius(value): void;
  public get bottom_radius(): number;
  public set bottom_radius(value): void;
  public get height(): number;
  public set height(value): void;
  public get radial_segments(): number;
  public set radial_segments(value): void;
  public get rings(): number;
  public set rings(value): void;
  public get cap_top(): boolean;
  public set cap_top(value): void;
  public get cap_bottom(): boolean;
  public set cap_bottom(value): void;
}