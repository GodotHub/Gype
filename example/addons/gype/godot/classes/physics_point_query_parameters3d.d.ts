
import { RefCounted } from "@godot/classes/ref_counted";


export declare class PhysicsPointQueryParameters3D extends RefCounted{
  public set_position(_position: Vector3): void;
  public get_position(): Vector3;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_exclude(_exclude: GDArray): void;
  public get_exclude(): GDArray;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
  public get position(): Vector3;
  public set position(value): void;
  public get collision_mask(): number;
  public set collision_mask(value): void;
  public get exclude(): GDArray;
  public set exclude(value): void;
  public get collide_with_bodies(): boolean;
  public set collide_with_bodies(value): void;
  public get collide_with_areas(): boolean;
  public set collide_with_areas(value): void;
}