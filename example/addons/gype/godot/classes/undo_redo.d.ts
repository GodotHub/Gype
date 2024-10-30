
import { GodotObject } from "@godot/classes/godot_object";

export declare class UndoRedo extends GodotObject{
  public create_action(_name: String | StringName | string, _merge_mode: number, _backward_undo_ops: boolean): void;
  public commit_action(_execute: boolean): void;
  public is_committing_action(): boolean;
  public add_do_method(_callable: Callable): void;
  public add_undo_method(_callable: Callable): void;
  public add_do_property(_object: Object, _property: String | StringName | string, _value: any): void;
  public add_undo_property(_object: Object, _property: String | StringName | string, _value: any): void;
  public add_do_reference(_object: Object): void;
  public add_undo_reference(_object: Object): void;
  public start_force_keep_in_merge_ends(): void;
  public end_force_keep_in_merge_ends(): void;
  public get_history_count(): number;
  public get_current_action(): number;
  public get_action_name(_id: number): String;
  public clear_history(_increase_version: boolean): void;
  public get_current_action_name(): String;
  public has_undo(): boolean;
  public has_redo(): boolean;
  public get_version(): number;
  public set_max_steps(_max_steps: number): void;
  public get_max_steps(): number;
  public redo(): boolean;
  public undo(): boolean;
  public get max_steps(): number {
    get_max_steps();
  }
  public set max_steps(value): void {
    set_max_steps(value);
  }
  static MergeMode = {
    MERGE_DISABLE = 0,
    MERGE_ENDS = 1,
    MERGE_ALL = 2,
  }
  public const version_changed: string = "version_changed";
}