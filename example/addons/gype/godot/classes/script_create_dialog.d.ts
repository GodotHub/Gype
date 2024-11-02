
import { ConfirmationDialog } from "@godot/classes/confirmation_dialog";


export declare class ScriptCreateDialog extends ConfirmationDialog{
  public config(_inherits: GDString | StringName | string, _path: GDString | StringName | string, _built_in_enabled: boolean, _load_enabled: boolean): void;
  public get script_created(): Signal;
}