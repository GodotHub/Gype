
import { Object } from "@godot/classes/object";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class PhysicsTestMotionResult3D extends RefCounted{
  public get_travel(): Vector3;
  public get_remainder(): Vector3;
  public get_collision_safe_fraction(): number;
  public get_collision_unsafe_fraction(): number;
  public get_collision_count(): number;
  public get_collision_point(_collision_index: number): Vector3;
  public get_collision_normal(_collision_index: number): Vector3;
  public get_collider_velocity(_collision_index: number): Vector3;
  public get_collider_id(_collision_index: number): number;
  public get_collider_rid(_collision_index: number): RID;
  public get_collider(_collision_index: number): Object;
  public get_collider_shape(_collision_index: number): number;
  public get_collision_local_shape(_collision_index: number): number;
  public get_collision_depth(_collision_index: number): number;
}