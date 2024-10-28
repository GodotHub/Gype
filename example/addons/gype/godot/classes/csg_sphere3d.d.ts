
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Material } from "@godot/classes/material";

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
  public get radius(): number {
    get_radius();
  }
  public set radius(value: number): void {
    set_radius(value);
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
  public get smooth_faces(): boolean {
    get_smooth_faces();
  }
  public set smooth_faces(value: boolean): void {
    set_smooth_faces(value);
  }
  public get material(): BaseMaterial3D,ShaderMaterial {
    get_material();
  }
  public set material(value: BaseMaterial3D,ShaderMaterial): void {
    set_material(value);
  }
}