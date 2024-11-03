
import { RefCounted } from "@godot/classes/ref_counted";
export declare class PhysicsRayQueryParameters3D extends RefCounted{
  public
 static create(_from: Vector3, _to: Vector3, _collision_mask: number = 4294967295, _exclude: GDArray = Array[RID]([])): PhysicsRayQueryParameters3D;
  public set_from(_from: Vector3): void;
  public get_from(): Vector3;
  public set_to(_to: Vector3): void;
  public get_to(): Vector3;
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
  public set_hit_back_faces(_enable: boolean): void;
  public is_hit_back_faces_enabled(): boolean;
  public get from(): Vector3;
  public set from(value): void;
  public get to(): Vector3;
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
  public get hit_back_faces(): boolean;
  public set hit_back_faces(value): void;
}