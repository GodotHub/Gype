
import { Resource } from "@godot/classes/resource";
import { Mesh } from "@godot/classes/mesh";
export declare class NavigationMeshSourceGeometryData3D extends Resource{
  public set_vertices(_vertices: PackedFloat32Array): void;
  public get_vertices(): PackedFloat32Array;
  public set_indices(_indices: PackedInt32Array): void;
  public get_indices(): PackedInt32Array;
  public append_arrays(_vertices: PackedFloat32Array, _indices: PackedInt32Array): void;
  public clear(): void;
  public has_data(): boolean;
  public add_mesh(_mesh: Mesh, _xform: Transform3D): void;
  public add_mesh_array(_mesh_array: GDArray, _xform: Transform3D): void;
  public add_faces(_faces: PackedVector3Array, _xform: Transform3D): void;
  public merge(_other_geometry: NavigationMeshSourceGeometryData3D): void;
  public add_projected_obstruction(_vertices: PackedVector3Array, _elevation: number, _height: number, _carve: boolean): void;
  public clear_projected_obstructions(): void;
  public set_projected_obstructions(_projected_obstructions: GDArray): void;
  public get_projected_obstructions(): GDArray;
  public get vertices(): PackedVector3Array;
  public set vertices(value): void;
  public get indices(): PackedInt32Array;
  public set indices(value): void;
  public get projected_obstructions(): GDArray;
  public set projected_obstructions(value): void;
}