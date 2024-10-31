
import { RefCounted } from "@godot/classes/ref_counted";
import { ArrayMesh } from "@godot/classes/array_mesh";
import { Material } from "@godot/classes/material";

export declare class MeshDataTool extends RefCounted{
  public clear(): void;
  public create_from_surface(_mesh: ArrayMesh, _surface: number): number;
  public commit_to_surface(_mesh: ArrayMesh, _compression_flags: number): number;
  public get_format(): number;
  public get_vertex_count(): number;
  public get_edge_count(): number;
  public get_face_count(): number;
  public set_vertex(_idx: number, _vertex: Vector3): void;
  public get_vertex(_idx: number): Vector3;
  public set_vertex_normal(_idx: number, _normal: Vector3): void;
  public get_vertex_normal(_idx: number): Vector3;
  public set_vertex_tangent(_idx: number, _tangent: Plane): void;
  public get_vertex_tangent(_idx: number): Plane;
  public set_vertex_uv(_idx: number, _uv: Vector2): void;
  public get_vertex_uv(_idx: number): Vector2;
  public set_vertex_uv2(_idx: number, _uv2: Vector2): void;
  public get_vertex_uv2(_idx: number): Vector2;
  public set_vertex_color(_idx: number, _color: Color): void;
  public get_vertex_color(_idx: number): Color;
  public set_vertex_bones(_idx: number, _bones: PackedInt32Array): void;
  public get_vertex_bones(_idx: number): PackedInt32Array;
  public set_vertex_weights(_idx: number, _weights: PackedFloat32Array): void;
  public get_vertex_weights(_idx: number): PackedFloat32Array;
  public set_vertex_meta(_idx: number, _meta: any): void;
  public get_vertex_meta(_idx: number): any;
  public get_vertex_edges(_idx: number): PackedInt32Array;
  public get_vertex_faces(_idx: number): PackedInt32Array;
  public get_edge_vertex(_idx: number, _vertex: number): number;
  public get_edge_faces(_idx: number): PackedInt32Array;
  public set_edge_meta(_idx: number, _meta: any): void;
  public get_edge_meta(_idx: number): any;
  public get_face_vertex(_idx: number, _vertex: number): number;
  public get_face_edge(_idx: number, _edge: number): number;
  public set_face_meta(_idx: number, _meta: any): void;
  public get_face_meta(_idx: number): any;
  public get_face_normal(_idx: number): Vector3;
  public set_material(_material: Material): void;
  public get_material(): Material;
}