
import { Resource } from "@godot/classes/resource";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class PhysicsShapeQueryParameters2D extends RefCounted{
  public set_shape(_shape: Resource): void;
  public get_shape(): Resource;
  public set_shape_rid(_shape: RID): void;
  public get_shape_rid(): RID;
  public set_transform(_transform: Transform2D): void;
  public get_transform(): Transform2D;
  public set_motion(_motion: Vector2): void;
  public get_motion(): Vector2;
  public set_margin(_margin: number): void;
  public get_margin(): number;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_exclude(_exclude: GDArray): void;
  public get_exclude(): GDArray;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
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
  public get margin(): number {
    get_margin();
  }
  public set margin(value): void {
    set_margin(value);
  }
  public get motion(): Vector2 {
    get_motion();
  }
  public set motion(value): void {
    set_motion(value);
  }
  public get shape(): Shape2D {
    get_shape();
  }
  public set shape(value): void {
    set_shape(value);
  }
  public get shape_rid(): RID {
    get_shape_rid();
  }
  public set shape_rid(value): void {
    set_shape_rid(value);
  }
  public get transform(): Transform2D {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
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
}