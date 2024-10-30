
import { RefCounted } from "@godot/classes/ref_counted";
import { GodotObject } from "@godot/classes/godot_object";

export declare class KinematicCollision3D extends RefCounted{
  public get_travel(): Vector3;
  public get_remainder(): Vector3;
  public get_depth(): number;
  public get_collision_count(): number;
  public get_position(_collision_index: number): Vector3;
  public get_normal(_collision_index: number): Vector3;
  public get_angle(_collision_index: number, _up_direction: Vector3): number;
  public get_local_shape(_collision_index: number): Object;
  public get_collider(_collision_index: number): Object;
  public get_collider_id(_collision_index: number): number;
  public get_collider_rid(_collision_index: number): RID;
  public get_collider_shape(_collision_index: number): Object;
  public get_collider_shape_index(_collision_index: number): number;
  public get_collider_velocity(_collision_index: number): Vector3;
}