
import { Shape3D } from "@godot/classes/shape3d";
import { Node3D } from "@godot/classes/node3d";

export declare class SpringArm3D extends Node3D{
  public get_hit_length(): number;
  public set_length(_length: number): void;
  public get_length(): number;
  public set_shape(_shape: Shape3D): void;
  public get_shape(): Shape3D;
  public add_excluded_object(_RID: RID): void;
  public remove_excluded_object(_RID: RID): boolean;
  public clear_excluded_objects(): void;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_margin(_margin: number): void;
  public get_margin(): number;
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value): void {
    set_collision_mask(value);
  }
  public get shape(): Shape3D {
    get_shape();
  }
  public set shape(value): void {
    set_shape(value);
  }
  public get spring_length(): number {
    get_length();
  }
  public set spring_length(value): void {
    set_length(value);
  }
  public get margin(): number {
    get_margin();
  }
  public set margin(value): void {
    set_margin(value);
  }
}