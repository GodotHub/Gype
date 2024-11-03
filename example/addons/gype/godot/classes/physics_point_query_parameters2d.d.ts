
import { RefCounted } from "@godot/classes/ref_counted";
export declare class PhysicsPointQueryParameters2D extends RefCounted{
  public set_position(_position: Vector2): void;
  public get_position(): Vector2;
  public set_canvas_instance_id(_canvas_instance_id: number): void;
  public get_canvas_instance_id(): number;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_exclude(_exclude: GDArray): void;
  public get_exclude(): GDArray;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
  public get position(): Vector2;
  public set position(value): void;
  public get canvas_instance_id(): number;
  public set canvas_instance_id(value): void;
  public get collision_mask(): number;
  public set collision_mask(value): void;
  public get exclude(): GDArray;
  public set exclude(value): void;
  public get collide_with_bodies(): boolean;
  public set collide_with_bodies(value): void;
  public get collide_with_areas(): boolean;
  public set collide_with_areas(value): void;
}