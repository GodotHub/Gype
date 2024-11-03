
import { CollisionObject3D } from "@godot/classes/collision_object3d";
import { Node } from "@godot/classes/node";
import { KinematicCollision3D } from "@godot/classes/kinematic_collision3d";
export declare class PhysicsBody3D extends CollisionObject3D{
  public move_and_collide(_motion: Vector3, _test_only: boolean = false, _safe_margin: number = 0.001, _recovery_as_collision: boolean = false, _max_collisions: number = 1): KinematicCollision3D;
  public test_move(_from: Transform3D, _motion: Vector3, _collision: KinematicCollision3D = null, _safe_margin: number = 0.001, _recovery_as_collision: boolean = false, _max_collisions: number = 1): boolean;
  public get_gravity(): Vector3;
  public set_axis_lock(_axis: number, _lock: boolean): void;
  public get_axis_lock(_axis: number): boolean;
  public get_collision_exceptions(): GDArray;
  public add_collision_exception_with(_body: Node): void;
  public remove_collision_exception_with(_body: Node): void;
  public get axis_lock_linear_x(): boolean;
  public set axis_lock_linear_x(value): void;
  public get axis_lock_linear_y(): boolean;
  public set axis_lock_linear_y(value): void;
  public get axis_lock_linear_z(): boolean;
  public set axis_lock_linear_z(value): void;
  public get axis_lock_angular_x(): boolean;
  public set axis_lock_angular_x(value): void;
  public get axis_lock_angular_y(): boolean;
  public set axis_lock_angular_y(value): void;
  public get axis_lock_angular_z(): boolean;
  public set axis_lock_angular_z(value): void;
}