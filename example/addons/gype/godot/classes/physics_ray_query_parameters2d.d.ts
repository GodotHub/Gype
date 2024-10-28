
import { RefCounted } from "@godot/classes/ref_counted";

export declare class PhysicsRayQueryParameters2D extends RefCounted{
  public create(_from: Vector2, _to: Vector2, _collision_mask: number, _exclude: typedarray::RID): PhysicsRayQueryParameters2D;
  public set_from(_from: Vector2): void;
  public get_from(): Vector2;
  public set_to(_to: Vector2): void;
  public get_to(): Vector2;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_exclude(_exclude: typedarray::RID): void;
  public get_exclude(): Array;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
  public set_hit_from_inside(_enable: boolean): void;
  public is_hit_from_inside_enabled(): boolean;
  public get from(): Vector2 {
    get_from();
  }
  public set from(value: Vector2): void {
    set_from(value);
  }
  public get to(): Vector2 {
    get_to();
  }
  public set to(value: Vector2): void {
    set_to(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value: number): void {
    set_collision_mask(value);
  }
  public get exclude(): Array {
    get_exclude();
  }
  public set exclude(value: Array): void {
    set_exclude(value);
  }
  public get collide_with_bodies(): boolean {
    is_collide_with_bodies_enabled();
  }
  public set collide_with_bodies(value: boolean): void {
    set_collide_with_bodies(value);
  }
  public get collide_with_areas(): boolean {
    is_collide_with_areas_enabled();
  }
  public set collide_with_areas(value: boolean): void {
    set_collide_with_areas(value);
  }
  public get hit_from_inside(): boolean {
    is_hit_from_inside_enabled();
  }
  public set hit_from_inside(value: boolean): void {
    set_hit_from_inside(value);
  }
}