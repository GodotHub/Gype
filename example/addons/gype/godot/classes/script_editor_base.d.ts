
import { Control } from "@godot/classes/control";
import { EditorSyntaxHighlighter } from "@godot/classes/editor_syntax_highlighter";
import { VBoxContainer } from "@godot/classes/v_box_container";


export declare class ScriptEditorBase extends VBoxContainer{
  public get_base_editor(): Control;
  public add_syntax_highlighter(_highlighter: EditorSyntaxHighlighter): void;
  public get name_changed(): Signal;
  public get edited_script_changed(): Signal;
  public get request_help(): Signal;
  public get request_open_script_at_line(): Signal;
  public get request_save_history(): Signal;
  public get request_save_previous_state(): Signal;
  public get go_to_help(): Signal;
  public get search_in_files_requested(): Signal;
  public get replace_in_files_requested(): Signal;
  public get go_to_method(): Signal;
}