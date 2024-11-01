
import { RefCounted } from "@godot/classes/ref_counted";

export declare class AStar3D extends RefCounted{
  public _estimate_cost(_from_id: number, _to_id: number): number;
  public _compute_cost(_from_id: number, _to_id: number): number;
  public get_available_point_id(): number;
  public add_point(_id: number, _position: Vector3, _weight_scale: number): void;
  public get_point_position(_id: number): Vector3;
  public set_point_position(_id: number, _position: Vector3): void;
  public get_point_weight_scale(_id: number): number;
  public set_point_weight_scale(_id: number, _weight_scale: number): void;
  public remove_point(_id: number): void;
  public has_point(_id: number): boolean;
  public get_point_connections(_id: number): PackedInt64Array;
  public get_point_ids(): PackedInt64Array;
  public set_point_disabled(_id: number, _disabled: boolean): void;
  public is_point_disabled(_id: number): boolean;
  public connect_points(_id: number, _to_id: number, _bidirectional: boolean): void;
  public disconnect_points(_id: number, _to_id: number, _bidirectional: boolean): void;
  public are_points_connected(_id: number, _to_id: number, _bidirectional: boolean): boolean;
  public get_point_count(): number;
  public get_point_capacity(): number;
  public reserve_space(_num_nodes: number): void;
  public clear(): void;
  public get_closest_point(_to_position: Vector3, _include_disabled: boolean): number;
  public get_closest_position_in_segment(_to_position: Vector3): Vector3;
  public get_point_path(_from_id: number, _to_id: number, _allow_partial_path: boolean): PackedVector3Array;
  public get_id_path(_from_id: number, _to_id: number, _allow_partial_path: boolean): PackedInt64Array;
}