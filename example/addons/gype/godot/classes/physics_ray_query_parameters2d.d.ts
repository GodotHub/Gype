
import { RefCounted } from "@godot/classes/ref_counted";


export declare class PhysicsRayQueryParameters2D extends RefCounted{
  public create(_from: Vector2, _to: Vector2, _collision_mask: number, _exclude: GDArray): PhysicsRayQueryParameters2D;
  public set_from(_from: Vector2): void;
  public get_from(): Vector2;
  public set_to(_to: Vector2): void;
  public get_to(): Vector2;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_exclude(_exclude: GDArray): void;
  public get_exclude(): GDArray;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
  public set_hit_from_inside(_enable: boolean): void;
  public is_hit_from_inside_enabled(): boolean;
  public get from(): Vector2;
  public set from(value): void;
  public get to(): Vector2;
  public set to(value): void;
  public get collision_mask(): number;
  public set collision_mask(value): void;
  public get exclude(): GDArray;
  public set exclude(value): void;
  public get collide_with_bodies(): boolean;
  public set collide_with_bodies(value): void;
  public get collide_with_areas(): boolean;
  public set collide_with_areas(value): void;
  public get hit_from_inside(): boolean;
  public set hit_from_inside(value): void;
}