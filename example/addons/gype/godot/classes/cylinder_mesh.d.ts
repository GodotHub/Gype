
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
  public get top_radius(): number {
    get_top_radius();
  }
  public set top_radius(value: number): void {
    set_top_radius(value);
  }
  public get bottom_radius(): number {
    get_bottom_radius();
  }
  public set bottom_radius(value: number): void {
    set_bottom_radius(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value: number): void {
    set_height(value);
  }
  public get radial_segments(): number {
    get_radial_segments();
  }
  public set radial_segments(value: number): void {
    set_radial_segments(value);
  }
  public get rings(): number {
    get_rings();
  }
  public set rings(value: number): void {
    set_rings(value);
  }
  public get cap_top(): boolean {
    is_cap_top();
  }
  public set cap_top(value: boolean): void {
    set_cap_top(value);
  }
  public get cap_bottom(): boolean {
    is_cap_bottom();
  }
  public set cap_bottom(value: boolean): void {
    set_cap_bottom(value);
  }
}