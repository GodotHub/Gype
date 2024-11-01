
import { Material } from "@godot/classes/material";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";

export declare class CSGTorus3D extends CSGPrimitive3D{
  public set_inner_radius(_radius: number): void;
  public get_inner_radius(): number;
  public set_outer_radius(_radius: number): void;
  public get_outer_radius(): number;
  public set_sides(_sides: number): void;
  public get_sides(): number;
  public set_ring_sides(_sides: number): void;
  public get_ring_sides(): number;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public set_smooth_faces(_smooth_faces: boolean): void;
  public get_smooth_faces(): boolean;
  public get inner_radius(): number {
    get_inner_radius();
  }
  public set inner_radius(value): void {
    set_inner_radius(value);
  }
  public get outer_radius(): number {
    get_outer_radius();
  }
  public set outer_radius(value): void {
    set_outer_radius(value);
  }
  public get sides(): number {
    get_sides();
  }
  public set sides(value): void {
    set_sides(value);
  }
  public get ring_sides(): number {
    get_ring_sides();
  }
  public set ring_sides(value): void {
    set_ring_sides(value);
  }
  public get smooth_faces(): boolean {
    get_smooth_faces();
  }
  public set smooth_faces(value): void {
    set_smooth_faces(value);
  }
  public get material(): BaseMaterial3D {
    get_material();
  }
  public set material(value): void {
    set_material(value);
  }
}