
import { ConfirmationDialog } from "@godot/classes/confirmation_dialog";
export declare class EditorCommandPalette extends ConfirmationDialog{
  public add_command(_command_name: GDString | StringName | string, _key_name: GDString | StringName | string, _binded_callable: Callable, _shortcut_text: GDString | StringName | string = "None"): void;
  public remove_command(_key_name: GDString | StringName | string): void;
}