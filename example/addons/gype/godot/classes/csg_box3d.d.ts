
import { Material } from "@godot/classes/material";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";

export declare class CSGBox3D extends CSGPrimitive3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get size(): Vector3 {
    get_size();
  }
  public set size(value: Vector3): void {
    set_size(value);
  }
  public get material(): BaseMaterial3D,ShaderMaterial {
    get_material();
  }
  public set material(value: BaseMaterial3D,ShaderMaterial): void {
    set_material(value);
  }
}