
import { Resource } from "@godot/classes/resource";
import { ArrayMesh } from "@godot/classes/array_mesh";
import { Material } from "@godot/classes/material";


export declare class ImporterMesh extends Resource{
  public add_blend_shape(_name: GDString | StringName | string): void;
  public get_blend_shape_count(): number;
  public get_blend_shape_name(_blend_shape_idx: number): String;
  public set_blend_shape_mode(_mode: number): void;
  public get_blend_shape_mode(): number;
  public add_surface(_primitive: number, _arrays: GDArray, _blend_shapes: GDArray, _lods: Dictionary, _material: Material, _name: GDString | StringName | string, _flags: number): void;
  public get_surface_count(): number;
  public get_surface_primitive_type(_surface_idx: number): number;
  public get_surface_name(_surface_idx: number): String;
  public get_surface_arrays(_surface_idx: number): GDArray;
  public get_surface_blend_shape_arrays(_surface_idx: number, _blend_shape_idx: number): GDArray;
  public get_surface_lod_count(_surface_idx: number): number;
  public get_surface_lod_size(_surface_idx: number, _lod_idx: number): number;
  public get_surface_lod_indices(_surface_idx: number, _lod_idx: number): PackedInt32Array;
  public get_surface_material(_surface_idx: number): Material;
  public get_surface_format(_surface_idx: number): number;
  public set_surface_name(_surface_idx: number, _name: GDString | StringName | string): void;
  public set_surface_material(_surface_idx: number, _material: Material): void;
  public generate_lods(_normal_merge_angle: number, _normal_split_angle: number, _bone_transform_array: GDArray): void;
  public get_mesh(_base_mesh: ArrayMesh): ArrayMesh;
  public clear(): void;
  public set_lightmap_size_hint(_size: Vector2i): void;
  public get_lightmap_size_hint(): Vector2i;
}