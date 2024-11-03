
import { Resource } from "@godot/classes/resource";
export declare class VoxelGIData extends Resource{
  public allocate(_to_cell_xform: Transform3D, _aabb: AABB, _octree_size: Vector3, _octree_cells: PackedByteArray, _data_cells: PackedByteArray, _distance_field: PackedByteArray, _level_counts: PackedInt32Array): void;
  public get_bounds(): AABB;
  public get_octree_size(): Vector3;
  public get_to_cell_xform(): Transform3D;
  public get_octree_cells(): PackedByteArray;
  public get_data_cells(): PackedByteArray;
  public get_level_counts(): PackedInt32Array;
  public set_dynamic_range(_dynamic_range: number): void;
  public get_dynamic_range(): number;
  public set_energy(_energy: number): void;
  public get_energy(): number;
  public set_bias(_bias: number): void;
  public get_bias(): number;
  public set_normal_bias(_bias: number): void;
  public get_normal_bias(): number;
  public set_propagation(_propagation: number): void;
  public get_propagation(): number;
  public set_interior(_interior: boolean): void;
  public is_interior(): boolean;
  public set_use_two_bounces(_enable: boolean): void;
  public is_using_two_bounces(): boolean;
  public get dynamic_range(): number;
  public set dynamic_range(value): void;
  public get energy(): number;
  public set energy(value): void;
  public get bias(): number;
  public set bias(value): void;
  public get normal_bias(): number;
  public set normal_bias(value): void;
  public get propagation(): number;
  public set propagation(value): void;
  public get use_two_bounces(): boolean;
  public set use_two_bounces(value): void;
  public get interior(): boolean;
  public set interior(value): void;
}