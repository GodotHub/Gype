
import { GodotObject } from "@godot/classes/godot_object";
import { UndoRedo } from "@godot/classes/undo_redo";
export declare class EditorUndoRedoManager extends GodotObject{
  public create_action(_name: GDString | StringName | string, _merge_mode: number = 0, _custom_context: GodotObject = null, _backward_undo_ops: boolean = false): void;
  public commit_action(_execute: boolean = true): void;
  public is_committing_action(): boolean;
  public force_fixed_history(): void;
  public add_do_method(_object: GodotObject, _method: GDString | StringName | string, ...arg: StringName): void;
  public add_undo_method(_object: GodotObject, _method: GDString | StringName | string, ...arg: StringName): void;
  public add_do_property(_object: GodotObject, _property: GDString | StringName | string, _value: any): void;
  public add_undo_property(_object: GodotObject, _property: GDString | StringName | string, _value: any): void;
  public add_do_reference(_object: GodotObject): void;
  public add_undo_reference(_object: GodotObject): void;
  public get_object_history_id(_object: GodotObject): number;
  public get_history_undo_redo(_id: number): UndoRedo;
  static SpecialHistory = {
    GLOBAL_HISTORY = 0,
    REMOTE_HISTORY = -9,
    INVALID_HISTORY = -99,
  }
  public get history_changed(): Signal;
  public get version_changed(): Signal;
}