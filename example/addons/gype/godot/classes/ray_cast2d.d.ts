
import { Node2D } from "@godot/classes/node2d";
import { CollisionObject2D } from "@godot/classes/collision_object2d";
import { Object } from "@godot/classes/object";

export declare class RayCast2D extends Node2D{
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_target_position(_local_point: Vector2): void;
  public get_target_position(): Vector2;
  public is_colliding(): boolean;
  public force_raycast_update(): void;
  public get_collider(): Object;
  public get_collider_rid(): RID;
  public get_collider_shape(): number;
  public get_collision_point(): Vector2;
  public get_collision_normal(): Vector2;
  public add_exception_rid(_rid: RID): void;
  public add_exception(_node: CollisionObject2D): void;
  public remove_exception_rid(_rid: RID): void;
  public remove_exception(_node: CollisionObject2D): void;
  public clear_exceptions(): void;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_exclude_parent_body(_mask: boolean): void;
  public get_exclude_parent_body(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_hit_from_inside(_enable: boolean): void;
  public is_hit_from_inside_enabled(): boolean;
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value: boolean): void {
    set_enabled(value);
  }
  public get exclude_parent(): boolean {
    get_exclude_parent_body();
  }
  public set exclude_parent(value: boolean): void {
    set_exclude_parent_body(value);
  }
  public get target_position(): Vector2 {
    get_target_position();
  }
  public set target_position(value: Vector2): void {
    set_target_position(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value: number): void {
    set_collision_mask(value);
  }
  public get hit_from_inside(): boolean {
    is_hit_from_inside_enabled();
  }
  public set hit_from_inside(value: boolean): void {
    set_hit_from_inside(value);
  }
  public get collide_with_areas(): boolean {
    is_collide_with_areas_enabled();
  }
  public set collide_with_areas(value: boolean): void {
    set_collide_with_areas(value);
  }
  public get collide_with_bodies(): boolean {
    is_collide_with_bodies_enabled();
  }
  public set collide_with_bodies(value: boolean): void {
    set_collide_with_bodies(value);
  }
}