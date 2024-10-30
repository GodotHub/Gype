
import { Control } from "@godot/classes/control";
import { EditorSyntaxHighlighter } from "@godot/classes/editor_syntax_highlighter";
import { VBoxContainer } from "@godot/classes/v_box_container";

export declare class ScriptEditorBase extends VBoxContainer{
  public get_base_editor(): Control;
  public add_syntax_highlighter(_highlighter: EditorSyntaxHighlighter): void;
  public const name_changed: string = "name_changed";
  public const edited_script_changed: string = "edited_script_changed";
  public const request_help: string = "request_help";
  public const request_open_script_at_line: string = "request_open_script_at_line";
  public const request_save_history: string = "request_save_history";
  public const request_save_previous_state: string = "request_save_previous_state";
  public const go_to_help: string = "go_to_help";
  public const search_in_files_requested: string = "search_in_files_requested";
  public const replace_in_files_requested: string = "replace_in_files_requested";
  public const go_to_method: string = "go_to_method";
}