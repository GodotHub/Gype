
import { ConfirmationDialog } from "@godot/classes/confirmation_dialog";

export declare class EditorCommandPalette extends ConfirmationDialog{
  public add_command(_command_name: String | StringName | string, _key_name: String | StringName | string, _binded_callable: Callable, _shortcut_text: String | StringName | string): void;
  public remove_command(_key_name: String | StringName | string): void;
}