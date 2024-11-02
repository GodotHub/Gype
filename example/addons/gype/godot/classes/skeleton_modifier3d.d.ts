
import { Skeleton3D } from "@godot/classes/skeleton3d";
import { Node3D } from "@godot/classes/node3d";


export declare class SkeletonModifier3D extends Node3D{
  public _process_modification(): void;
  public get_skeleton(): Skeleton3D;
  public set_active(_active: boolean): void;
  public is_active(): boolean;
  public set_influence(_influence: number): void;
  public get_influence(): number;
  public get active(): boolean;
  public set active(value): void;
  public get influence(): number;
  public set influence(value): void;
  public get modification_processed(): Signal;
}