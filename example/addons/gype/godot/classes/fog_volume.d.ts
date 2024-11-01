
import { Material } from "@godot/classes/material";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class FogVolume extends VisualInstance3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_shape(_shape: number): void;
  public get_shape(): number;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get size(): Vector3 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get shape(): number {
    get_shape();
  }
  public set shape(value): void {
    set_shape(value);
  }
  public get material(): FogMaterial {
    get_material();
  }
  public set material(value): void {
    set_material(value);
  }
}