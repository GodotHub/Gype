
import { RefCounted } from "@godot/classes/ref_counted";

export declare class PhysicsTestMotionParameters2D extends RefCounted{
  public get_from(): Transform2D;
  public set_from(_from: Transform2D): void;
  public get_motion(): Vector2;
  public set_motion(_motion: Vector2): void;
  public get_margin(): number;
  public set_margin(_margin: number): void;
  public is_collide_separation_ray_enabled(): boolean;
  public set_collide_separation_ray_enabled(_enabled: boolean): void;
  public get_exclude_bodies(): Array;
  public set_exclude_bodies(_exclude_list: typedarray::RID): void;
  public get_exclude_objects(): Array;
  public set_exclude_objects(_exclude_list: typedarray::int): void;
  public is_recovery_as_collision_enabled(): boolean;
  public set_recovery_as_collision_enabled(_enabled: boolean): void;
  public get from(): Transform2D {
    get_from();
  }
  public set from(value: Transform2D): void {
    set_from(value);
  }
  public get motion(): Vector2 {
    get_motion();
  }
  public set motion(value: Vector2): void {
    set_motion(value);
  }
  public get margin(): number {
    get_margin();
  }
  public set margin(value: number): void {
    set_margin(value);
  }
  public get collide_separation_ray(): boolean {
    is_collide_separation_ray_enabled();
  }
  public set collide_separation_ray(value: boolean): void {
    set_collide_separation_ray_enabled(value);
  }
  public get exclude_bodies(): Array {
    get_exclude_bodies();
  }
  public set exclude_bodies(value: Array): void {
    set_exclude_bodies(value);
  }
  public get exclude_objects(): Array {
    get_exclude_objects();
  }
  public set exclude_objects(value: Array): void {
    set_exclude_objects(value);
  }
  public get recovery_as_collision(): boolean {
    is_recovery_as_collision_enabled();
  }
  public set recovery_as_collision(value: boolean): void {
    set_recovery_as_collision_enabled(value);
  }
}