
import { RefCounted } from "@godot/classes/ref_counted";

export declare class PhysicsRayQueryParameters3D extends RefCounted{
  public create(_from: Vector3, _to: Vector3, _collision_mask: number, _exclude: GDArray): PhysicsRayQueryParameters3D;
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
  public get from(): Vector3 {
    get_from();
  }
  public set from(value): void {
    set_from(value);
  }
  public get to(): Vector3 {
    get_to();
  }
  public set to(value): void {
    set_to(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value): void {
    set_collision_mask(value);
  }
  public get exclude(): GDArray {
    get_exclude();
  }
  public set exclude(value): void {
    set_exclude(value);
  }
  public get collide_with_bodies(): boolean {
    is_collide_with_bodies_enabled();
  }
  public set collide_with_bodies(value): void {
    set_collide_with_bodies(value);
  }
  public get collide_with_areas(): boolean {
    is_collide_with_areas_enabled();
  }
  public set collide_with_areas(value): void {
    set_collide_with_areas(value);
  }
  public get hit_from_inside(): boolean {
    is_hit_from_inside_enabled();
  }
  public set hit_from_inside(value): void {
    set_hit_from_inside(value);
  }
  public get hit_back_faces(): boolean {
    is_hit_back_faces_enabled();
  }
  public set hit_back_faces(value): void {
    set_hit_back_faces(value);
  }
}