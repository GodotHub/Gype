
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Mesh } from "@godot/classes/mesh";
import { Material } from "@godot/classes/material";

export declare class CSGMesh3D extends CSGPrimitive3D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value): void {
    set_mesh(value);
  }
  public get material(): BaseMaterial3D {
    get_material();
  }
  public set material(value): void {
    set_material(value);
  }
}