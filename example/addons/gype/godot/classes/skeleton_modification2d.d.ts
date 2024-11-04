
import { Resource } from "@godot/classes/resource";
import { SkeletonModificationStack2D } from "@godot/classes/skeleton_modification_stack2d";
export declare class SkeletonModification2D extends Resource{
  public _execute(_delta: number): void;
  public _setup_modification(_modification_stack: SkeletonModificationStack2D): void;
  public _draw_editor_gizmo(): void;
  public set_enabled(_enabled: boolean): void;
  public get_enabled(): boolean;
  public get_modification_stack(): SkeletonModificationStack2D;
  public set_is_setup(_is_setup: boolean): void;
  public get_is_setup(): boolean;
  public set_execution_mode(_execution_mode: number): void;
  public get_execution_mode(): number;
  public clamp_angle(_angle: number, _min: number, _max: number, _invert: boolean): number;
  public set_editor_draw_gizmo(_draw_gizmo: boolean): void;
  public get_editor_draw_gizmo(): boolean;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get execution_mode(): number;
  public set execution_mode(value): void;
}