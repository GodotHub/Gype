
import { Mesh } from "@godot/classes/mesh";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";
import { Material } from "@godot/classes/material";

export declare class CSGMesh3D extends CSGPrimitive3D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value: Mesh): void {
    set_mesh(value);
  }
  public get material(): BaseMaterial3D,ShaderMaterial {
    get_material();
  }
  public set material(value: BaseMaterial3D,ShaderMaterial): void {
    set_material(value);
  }
}