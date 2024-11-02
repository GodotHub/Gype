
import { Material } from "@godot/classes/material";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";


export declare class CSGCylinder3D extends CSGPrimitive3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public set_sides(_sides: number): void;
  public get_sides(): number;
  public set_cone(_cone: boolean): void;
  public is_cone(): boolean;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public set_smooth_faces(_smooth_faces: boolean): void;
  public get_smooth_faces(): boolean;
  public get radius(): number;
  public set radius(value): void;
  public get height(): number;
  public set height(value): void;
  public get sides(): number;
  public set sides(value): void;
  public get cone(): boolean;
  public set cone(value): void;
  public get smooth_faces(): boolean;
  public set smooth_faces(value): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
}