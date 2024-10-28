
import { Occluder3D } from "@godot/classes/occluder3d";

export declare class ArrayOccluder3D extends Occluder3D{
  public set_arrays(_vertices: PackedVector3Array, _indices: PackedInt32Array): void;
  public set_vertices(_vertices: PackedVector3Array): void;
  public set_indices(_indices: PackedInt32Array): void;
  public get vertices(): PackedVector3Array {
    get_vertices();
  }
  public set vertices(value: PackedVector3Array): void {
    set_vertices(value);
  }
  public get indices(): PackedInt32Array {
    get_indices();
  }
  public set indices(value: PackedInt32Array): void {
    set_indices(value);
  }
}