
import { Mesh } from "@godot/classes/mesh";

export declare class ArrayMesh extends Mesh{
  public add_blend_shape(_name: StringName): void;
  public get_blend_shape_count(): number;
  public get_blend_shape_name(_index: number): StringName;
  public set_blend_shape_name(_index: number, _name: StringName): void;
  public clear_blend_shapes(): void;
  public set_blend_shape_mode(_mode: number): void;
  public get_blend_shape_mode(): number;
  public add_surface_from_arrays(_primitive: number, _arrays: GDArray, _blend_shapes: GDArray, _lods: Dictionary, _flags: number): void;
  public clear_surfaces(): void;
  public surface_update_vertex_region(_surf_idx: number, _offset: number, _data: PackedByteArray): void;
  public surface_update_attribute_region(_surf_idx: number, _offset: number, _data: PackedByteArray): void;
  public surface_update_skin_region(_surf_idx: number, _offset: number, _data: PackedByteArray): void;
  public surface_get_array_len(_surf_idx: number): number;
  public surface_get_array_index_len(_surf_idx: number): number;
  public surface_get_format(_surf_idx: number): number;
  public surface_get_primitive_type(_surf_idx: number): number;
  public surface_find_by_name(_name: String): number;
  public surface_set_name(_surf_idx: number, _name: String): void;
  public surface_get_name(_surf_idx: number): String;
  public regen_normal_maps(): void;
  public lightmap_unwrap(_transform: Transform3D, _texel_size: number): number;
  public set_custom_aabb(_aabb: AABB): void;
  public get_custom_aabb(): AABB;
  public set_shadow_mesh(_mesh: ArrayMesh): void;
  public get_shadow_mesh(): ArrayMesh;
  public get blend_shape_mode(): number {
    get_blend_shape_mode();
  }
  public set blend_shape_mode(value): void {
    set_blend_shape_mode(value);
  }
  public get custom_aabb(): AABB {
    get_custom_aabb();
  }
  public set custom_aabb(value): void {
    set_custom_aabb(value);
  }
  public get shadow_mesh(): ArrayMesh {
    get_shadow_mesh();
  }
  public set shadow_mesh(value): void {
    set_shadow_mesh(value);
  }
}