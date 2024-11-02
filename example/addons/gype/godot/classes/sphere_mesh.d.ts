
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";


export declare class SphereMesh extends PrimitiveMesh{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public set_radial_segments(_radial_segments: number): void;
  public get_radial_segments(): number;
  public set_rings(_rings: number): void;
  public get_rings(): number;
  public set_is_hemisphere(_is_hemisphere: boolean): void;
  public get_is_hemisphere(): boolean;
  public get radius(): number;
  public set radius(value): void;
  public get height(): number;
  public set height(value): void;
  public get radial_segments(): number;
  public set radial_segments(value): void;
  public get rings(): number;
  public set rings(value): void;
  public get is_hemisphere(): boolean;
  public set is_hemisphere(value): void;
}