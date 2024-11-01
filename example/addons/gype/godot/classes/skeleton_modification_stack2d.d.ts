
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";
import { Resource } from "@godot/classes/resource";
import { Skeleton2D } from "@godot/classes/skeleton2d";

export declare class SkeletonModificationStack2D extends Resource{
  public setup(): void;
  public execute(_delta: number, _execution_mode: number): void;
  public enable_all_modifications(_enabled: boolean): void;
  public get_modification(_mod_idx: number): SkeletonModification2D;
  public add_modification(_modification: SkeletonModification2D): void;
  public delete_modification(_mod_idx: number): void;
  public set_modification(_mod_idx: number, _modification: SkeletonModification2D): void;
  public set_modification_count(_count: number): void;
  public get_modification_count(): number;
  public get_is_setup(): boolean;
  public set_enabled(_enabled: boolean): void;
  public get_enabled(): boolean;
  public set_strength(_strength: number): void;
  public get_strength(): number;
  public get_skeleton(): Skeleton2D;
  public get enabled(): boolean {
    get_enabled();
  }
  public set enabled(value): void {
    set_enabled(value);
  }
  public get strength(): number {
    get_strength();
  }
  public set strength(value): void {
    set_strength(value);
  }
  public get modification_count(): number {
    get_modification_count();
  }
  public set modification_count(value): void {
    set_modification_count(value);
  }
}