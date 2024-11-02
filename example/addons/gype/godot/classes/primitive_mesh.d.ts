
import { Material } from "@godot/classes/material";
import { Mesh } from "@godot/classes/mesh";


export declare class PrimitiveMesh extends Mesh{
  public _create_mesh_array(): GDArray;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get_mesh_arrays(): GDArray;
  public set_custom_aabb(_aabb: AABB): void;
  public get_custom_aabb(): AABB;
  public set_flip_faces(_flip_faces: boolean): void;
  public get_flip_faces(): boolean;
  public set_add_uv2(_add_uv2: boolean): void;
  public get_add_uv2(): boolean;
  public set_uv2_padding(_uv2_padding: number): void;
  public get_uv2_padding(): number;
  public request_update(): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
  public get custom_aabb(): AABB;
  public set custom_aabb(value): void;
  public get flip_faces(): boolean;
  public set flip_faces(value): void;
  public get add_uv2(): boolean;
  public set add_uv2(value): void;
  public get uv2_padding(): number;
  public set uv2_padding(value): void;
}