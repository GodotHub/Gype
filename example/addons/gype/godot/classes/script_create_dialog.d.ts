
import { ConfirmationDialog } from "@godot/classes/confirmation_dialog";

export declare class ScriptCreateDialog extends ConfirmationDialog{
  public config(_inherits: String | StringName | string, _path: String | StringName | string, _built_in_enabled: boolean, _load_enabled: boolean): void;
  public const script_created: string = "script_created";
}