
import { Mesh } from "@godot/classes/mesh";
import { Material } from "@godot/classes/material";

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
  public get material(): BaseMaterial3D,ShaderMaterial {
    get_material();
  }
  public set material(value: BaseMaterial3D,ShaderMaterial): void {
    set_material(value);
  }
  public get custom_aabb(): AABB {
    get_custom_aabb();
  }
  public set custom_aabb(value: AABB): void {
    set_custom_aabb(value);
  }
  public get flip_faces(): boolean {
    get_flip_faces();
  }
  public set flip_faces(value: boolean): void {
    set_flip_faces(value);
  }
  public get add_uv2(): boolean {
    get_add_uv2();
  }
  public set add_uv2(value: boolean): void {
    set_add_uv2(value);
  }
  public get uv2_padding(): number {
    get_uv2_padding();
  }
  public set uv2_padding(value: number): void {
    set_uv2_padding(value);
  }
}