
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Material } from "@godot/classes/material";


export declare class CSGBox3D extends CSGPrimitive3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get size(): Vector3;
  public set size(value): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
}