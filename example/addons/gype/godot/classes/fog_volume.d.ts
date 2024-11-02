
import { Material } from "@godot/classes/material";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";


export declare class FogVolume extends VisualInstance3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_shape(_shape: number): void;
  public get_shape(): number;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get size(): Vector3;
  public set size(value): void;
  public get shape(): number;
  public set shape(value): void;
  public get material(): FogMaterial;
  public set material(value): void;
}