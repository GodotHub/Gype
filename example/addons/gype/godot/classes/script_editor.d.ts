
import { Script } from "@godot/classes/script";
import { Script } from "@godot/classes/script";
import { ScriptEditorBase } from "@godot/classes/script_editor_base";
import { EditorSyntaxHighlighter } from "@godot/classes/editor_syntax_highlighter";
import { PanelContainer } from "@godot/classes/panel_container";
import { ScriptEditorBase } from "@godot/classes/script_editor_base";

export declare class ScriptEditor extends PanelContainer{
  public get_current_editor(): ScriptEditorBase;
  public get_open_script_editors(): Array;
  public register_syntax_highlighter(_syntax_highlighter: EditorSyntaxHighlighter): void;
  public unregister_syntax_highlighter(_syntax_highlighter: EditorSyntaxHighlighter): void;
  public goto_line(_line_number: number): void;
  public get_current_script(): Script;
  public get_open_scripts(): Array;
  public open_script_create_dialog(_base_name: String, _base_path: String): void;
  public goto_help(_topic: String): void;
}