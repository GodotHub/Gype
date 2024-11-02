
import { Mesh } from "@godot/classes/mesh";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Material } from "@godot/classes/material";


export declare class CSGMesh3D extends CSGPrimitive3D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get mesh(): Mesh;
  public set mesh(value): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
}