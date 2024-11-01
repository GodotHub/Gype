
import { RefCounted } from "@godot/classes/ref_counted";
import { ArrayMesh } from "@godot/classes/array_mesh";
import { Mesh } from "@godot/classes/mesh";
import { Material } from "@godot/classes/material";

export declare class SurfaceTool extends RefCounted{
  public set_skin_weight_count(_count: number): void;
  public get_skin_weight_count(): number;
  public set_custom_format(_channel_index: number, _format: number): void;
  public get_custom_format(_channel_index: number): number;
  public begin(_primitive: number): void;
  public add_vertex(_vertex: Vector3): void;
  public set_color(_color: Color): void;
  public set_normal(_normal: Vector3): void;
  public set_tangent(_tangent: Plane): void;
  public set_uv(_uv: Vector2): void;
  public set_uv2(_uv2: Vector2): void;
  public set_bones(_bones: PackedInt32Array): void;
  public set_weights(_weights: PackedFloat32Array): void;
  public set_custom(_channel_index: number, _custom_color: Color): void;
  public set_smooth_group(_index: number): void;
  public add_triangle_fan(_vertices: PackedVector3Array, _uvs: PackedVector2Array, _colors: PackedColorArray, _uv2s: PackedVector2Array, _normals: PackedVector3Array, _tangents: GDArray): void;
  public add_index(_index: number): void;
  public index(): void;
  public deindex(): void;
  public generate_normals(_flip: boolean): void;
  public generate_tangents(): void;
  public optimize_indices_for_cache(): void;
  public get_aabb(): AABB;
  public generate_lod(_nd_threshold: number, _target_index_count: number): PackedInt32Array;
  public set_material(_material: Material): void;
  public get_primitive_type(): number;
  public clear(): void;
  public create_from(_existing: Mesh, _surface: number): void;
  public create_from_arrays(_arrays: GDArray, _primitive_type: number): void;
  public create_from_blend_shape(_existing: Mesh, _surface: number, _blend_shape: String | StringName | string): void;
  public append_from(_existing: Mesh, _surface: number, _transform: Transform3D): void;
  public commit(_existing: ArrayMesh, _flags: number): ArrayMesh;
  public commit_to_arrays(): GDArray;
  static CustomFormat = {
    CUSTOM_RGBA8_UNORM = 0,
    CUSTOM_RGBA8_SNORM = 1,
    CUSTOM_RG_HALF = 2,
    CUSTOM_RGBA_HALF = 3,
    CUSTOM_R_FLOAT = 4,
    CUSTOM_RG_FLOAT = 5,
    CUSTOM_RGB_FLOAT = 6,
    CUSTOM_RGBA_FLOAT = 7,
    CUSTOM_MAX = 8,
  }
  static SkinWeightCount = {
    SKIN_4_WEIGHTS = 0,
    SKIN_8_WEIGHTS = 1,
  }
}