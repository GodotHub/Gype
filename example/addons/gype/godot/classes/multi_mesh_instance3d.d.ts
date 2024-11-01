
import { MultiMesh } from "@godot/classes/multi_mesh";
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";

export declare class MultiMeshInstance3D extends GeometryInstance3D{
  public set_multimesh(_multimesh: MultiMesh): void;
  public get_multimesh(): MultiMesh;
  public get multimesh(): MultiMesh {
    get_multimesh();
  }
  public set multimesh(value): void {
    set_multimesh(value);
  }
}