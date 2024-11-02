
import { Material } from "@godot/classes/material";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";


export declare class CSGSphere3D extends CSGPrimitive3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_radial_segments(_radial_segments: number): void;
  public get_radial_segments(): number;
  public set_rings(_rings: number): void;
  public get_rings(): number;
  public set_smooth_faces(_smooth_faces: boolean): void;
  public get_smooth_faces(): boolean;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get radius(): number;
  public set radius(value): void;
  public get radial_segments(): number;
  public set radial_segments(value): void;
  public get rings(): number;
  public set rings(value): void;
  public get smooth_faces(): boolean;
  public set smooth_faces(value): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
}