
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Material } from "@godot/classes/material";
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
  public get inner_radius(): number;
  public set inner_radius(value): void;
  public get outer_radius(): number;
  public set outer_radius(value): void;
  public get sides(): number;
  public set sides(value): void;
  public get ring_sides(): number;
  public set ring_sides(value): void;
  public get smooth_faces(): boolean;
  public set smooth_faces(value): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
}