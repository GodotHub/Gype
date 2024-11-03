
import { RefCounted } from "@godot/classes/ref_counted";
import { GodotObject } from "@godot/classes/godot_object";
export declare class KinematicCollision3D extends RefCounted{
  public get_travel(): Vector3;
  public get_remainder(): Vector3;
  public get_depth(): number;
  public get_collision_count(): number;
  public get_position(_collision_index: number = 0): Vector3;
  public get_normal(_collision_index: number = 0): Vector3;
  public get_angle(_collision_index: number = 0, _up_direction: Vector3 = Vector3(0, 1, 0)): number;
  public get_local_shape(_collision_index: number = 0): GodotObject;
  public get_collider(_collision_index: number = 0): GodotObject;
  public get_collider_id(_collision_index: number = 0): number;
  public get_collider_rid(_collision_index: number = 0): RID;
  public get_collider_shape(_collision_index: number = 0): GodotObject;
  public get_collider_shape_index(_collision_index: number = 0): number;
  public get_collider_velocity(_collision_index: number = 0): Vector3;
}