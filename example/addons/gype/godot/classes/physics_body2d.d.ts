
import { CollisionObject2D } from "@godot/classes/collision_object2d";
import { KinematicCollision2D } from "@godot/classes/kinematic_collision2d";
import { Node } from "@godot/classes/node";


export declare class PhysicsBody2D extends CollisionObject2D{
  public move_and_collide(_motion: Vector2, _test_only: boolean, _safe_margin: number, _recovery_as_collision: boolean): KinematicCollision2D;
  public test_move(_from: Transform2D, _motion: Vector2, _collision: KinematicCollision2D, _safe_margin: number, _recovery_as_collision: boolean): boolean;
  public get_gravity(): Vector2;
  public get_collision_exceptions(): GDArray;
  public add_collision_exception_with(_body: Node): void;
  public remove_collision_exception_with(_body: Node): void;
}