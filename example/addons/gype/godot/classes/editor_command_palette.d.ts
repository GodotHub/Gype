
import { ConfirmationDialog } from "@godot/classes/confirmation_dialog";

export declare class EditorCommandPalette extends ConfirmationDialog{
  public add_command(_command_name: String, _key_name: String, _binded_callable: Callable, _shortcut_text: String): void;
  public remove_command(_key_name: String): void;
}