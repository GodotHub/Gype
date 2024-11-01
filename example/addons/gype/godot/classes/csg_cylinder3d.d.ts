
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Material } from "@godot/classes/material";

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
  public get sides(): number {
    get_sides();
  }
  public set sides(value): void {
    set_sides(value);
  }
  public get cone(): boolean {
    is_cone();
  }
  public set cone(value): void {
    set_cone(value);
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