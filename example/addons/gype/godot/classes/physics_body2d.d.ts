
import { KinematicCollision2D } from "@godot/classes/kinematic_collision2d";
import { CollisionObject2D } from "@godot/classes/collision_object2d";
import { Node } from "@godot/classes/node";
export declare class PhysicsBody2D extends CollisionObject2D{
  public move_and_collide(_motion: Vector2, _test_only: boolean = false, _safe_margin: number = 0.08, _recovery_as_collision: boolean = false): KinematicCollision2D;
  public test_move(_from: Transform2D, _motion: Vector2, _collision: KinematicCollision2D = null, _safe_margin: number = 0.08, _recovery_as_collision: boolean = false): boolean;
  public get_gravity(): Vector2;
  public get_collision_exceptions(): GDArray;
  public add_collision_exception_with(_body: Node): void;
  public remove_collision_exception_with(_body: Node): void;
}