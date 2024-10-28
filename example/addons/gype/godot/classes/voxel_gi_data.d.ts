
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
  public get dynamic_range(): number {
    get_dynamic_range();
  }
  public set dynamic_range(value: number): void {
    set_dynamic_range(value);
  }
  public get energy(): number {
    get_energy();
  }
  public set energy(value: number): void {
    set_energy(value);
  }
  public get bias(): number {
    get_bias();
  }
  public set bias(value: number): void {
    set_bias(value);
  }
  public get normal_bias(): number {
    get_normal_bias();
  }
  public set normal_bias(value: number): void {
    set_normal_bias(value);
  }
  public get propagation(): number {
    get_propagation();
  }
  public set propagation(value: number): void {
    set_propagation(value);
  }
  public get use_two_bounces(): boolean {
    is_using_two_bounces();
  }
  public set use_two_bounces(value: boolean): void {
    set_use_two_bounces(value);
  }
  public get interior(): boolean {
    is_interior();
  }
  public set interior(value: boolean): void {
    set_interior(value);
  }
}