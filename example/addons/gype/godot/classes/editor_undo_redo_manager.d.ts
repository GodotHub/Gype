
import { UndoRedo } from "@godot/classes/undo_redo";
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorUndoRedoManager extends GodotObject{
  public create_action(_name: String | StringName | string, _merge_mode: number, _custom_context: Object, _backward_undo_ops: boolean): void;
  public commit_action(_execute: boolean): void;
  public is_committing_action(): boolean;
  public force_fixed_history(): void;
  public add_do_method(_object: Object, _method: String | StringName | string, ...arg: StringName): void;
  public add_undo_method(_object: Object, _method: String | StringName | string, ...arg: StringName): void;
  public add_do_property(_object: Object, _property: String | StringName | string, _value: any): void;
  public add_undo_property(_object: Object, _property: String | StringName | string, _value: any): void;
  public add_do_reference(_object: Object): void;
  public add_undo_reference(_object: Object): void;
  public get_object_history_id(_object: Object): number;
  public get_history_undo_redo(_id: number): UndoRedo;
  static SpecialHistory = {
    GLOBAL_HISTORY = 0,
    REMOTE_HISTORY = -9,
    INVALID_HISTORY = -99,
  }
  public get history_changed(): Signal;
  public get version_changed(): Signal;
}