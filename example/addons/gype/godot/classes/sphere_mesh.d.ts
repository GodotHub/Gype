
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
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value): void {
    set_height(value);
  }
  public get radial_segments(): number {
    get_radial_segments();
  }
  public set radial_segments(value): void {
    set_radial_segments(value);
  }
  public get rings(): number {
    get_rings();
  }
  public set rings(value): void {
    set_rings(value);
  }
  public get is_hemisphere(): boolean {
    get_is_hemisphere();
  }
  public set is_hemisphere(value): void {
    set_is_hemisphere(value);
  }
}